import json
import hashlib
import subprocess
import urllib.request
from pathlib import Path
import argparse
import re

SOURCE_ROOT = "."

parser = argparse.ArgumentParser()
parser.add_argument("--config", required=False)
args = parser.parse_args()

DELINK_VERSION = "v0.1.0"
DELINK_EXE = Path("build/tools/delink-windows-x86_64.exe")
DELINK_URL = f"https://github.com/HaydnTrigg/delink/releases/download/{DELINK_VERSION}/delink-windows-x86_64.exe"
DELINK_SHA1 = "26e58fe113ebdafc8e682e69523e07d9eb1c6191"

OBJDIFF_VERSION = "v3.7.2-Monkey"
OBJDIFF_CLI_EXE = Path("build/tools/objdiff-cli-windows-x86_64.exe")
OBJDIFF_CLI_URL = f"https://github.com/HaydnTrigg/objdiff/releases/download/{OBJDIFF_VERSION}/objdiff-cli-windows-x86_64.exe"
OBJDIFF_CLI_SHA1 = "52509e6b7b1b93e516bc6e1635fd2ee7fb6b82c5"

OBJDIFF_EXE = Path("build/tools/objdiff-windows-x86_64.exe")
OBJDIFF_URL = f"https://github.com/HaydnTrigg/objdiff/releases/download/{OBJDIFF_VERSION}/objdiff-windows-x86_64.exe"
OBJDIFF_SHA1 = "8de8e7b364580f3a0752c4c0ed09db546acb4703"

ORIG_BINARIES = [
    (Path("orig/Homeworld2Classic/Bin/Test/Console.dll"),    Path("orig/Homeworld2Classic/Bin/Test/console.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/DCDefault.dll"),  Path("orig/Homeworld2Classic/Bin/Test/dcdefault.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/DCWindow.dll"),   Path("orig/Homeworld2Classic/Bin/Test/dcwindow.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/Debug.dll"),      Path("orig/Homeworld2Classic/Bin/Test/debug.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/ExeTie.dll"),     Path("orig/Homeworld2Classic/Bin/Test/exetie.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/FileIO.dll"),     Path("orig/Homeworld2Classic/Bin/Test/fileio.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/GL.dll"),         Path("orig/Homeworld2Classic/Bin/Test/gl.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/GSLobby.dll"),    Path("orig/Homeworld2Classic/Bin/Test/gslobby.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/Homeworld2.exe"), Path("orig/Homeworld2Classic/Bin/Test/homeworld2.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/HW2Box.dll"),     Path("orig/Homeworld2Classic/Bin/Test/hw2box.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/Localizer.dll"),  Path("orig/Homeworld2Classic/Bin/Test/localizer.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/lua.dll"),        Path("orig/Homeworld2Classic/Bin/Test/lua.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/LuaConfig.dll"),  Path("orig/Homeworld2Classic/Bin/Test/luaconfig.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/Memory.dll"),     Path("orig/Homeworld2Classic/Bin/Test/memory.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/Objects.dll"),    Path("orig/Homeworld2Classic/Bin/Test/objects.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/Platform.dll"),   Path("orig/Homeworld2Classic/Bin/Test/platform.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/Profile.dll"),    Path("orig/Homeworld2Classic/Bin/Test/profile.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/seDXAudio.dll"),  Path("orig/Homeworld2Classic/Bin/Test/sedxaudio.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/seFDAudio.dll"),  Path("orig/Homeworld2Classic/Bin/Test/sefdaudio.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/SteamLobby.dll"), Path("orig/Homeworld2Classic/Bin/Test/steamlobby.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/Util.dll"),       Path("orig/Homeworld2Classic/Bin/Test/util.pdb")),
    (Path("orig/Homeworld2Classic/Bin/Test/ZLib.dll"),       Path("orig/Homeworld2Classic/Bin/Test/zlib.pdb")),
]

DELINK_OUTPUT_DIR = Path("build/DevRelease/delink")
OUTPUT_DIR = Path("build/DevRelease")

config_path = args.config or "config/DevRelease/config.json"

def load_json(path):
    print(f'Reading {path}')
    with open(path, "r", encoding="utf-8") as f:
        text = f.read()

        # Strip block comments
        text = re.sub(r'/\*.*?\*/', '', text, flags=re.DOTALL)

        # Strip line comments
        text = re.sub(r'//[^\n]*', '', text)
        return json.loads(text)

config = load_json(config_path)

objects = {}
for bin_path, _ in ORIG_BINARIES:
    binary_name = bin_path.name
    obj_file = Path(f"config/DevRelease/{binary_name}.json")
    if obj_file.exists():
        objects.update(load_json(obj_file))

COMPILER_ROOT = config.get("compiler_root")

def sha1_file(path: Path) -> str:
    h = hashlib.sha1()
    with open(path, "rb") as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def run(cmd, cwd=None):
    print(f"Running: {' '.join(map(str, cmd))}")
    subprocess.run(cmd, cwd=cwd, check=True)


def download_file(url: str, dest: Path, expected_sha1: str):
    if dest.exists() and sha1_file(dest).lower() == expected_sha1.lower():
        print(f"{dest} already present and verified.")
        return
    print(f"Downloading {url} -> {dest}")
    dest.parent.mkdir(parents=True, exist_ok=True)
    urllib.request.urlretrieve(url, dest)
    actual = sha1_file(dest)
    if actual.lower() != expected_sha1.lower():
        raise RuntimeError(f"SHA1 mismatch for {dest}: expected {expected_sha1}, got {actual}")
    print(f"{dest} downloaded and verified.")


def verify_hash(path_str: str, expected: list[str]):
    expected = [item.casefold() for item in expected]
    path = Path(path_str)
    if not path.exists():
        raise RuntimeError(f"Missing required file: {path}")
    actual = sha1_file(path)
    if actual.casefold() not in expected:
        print(f"{path} SHA1 invalid {actual}")
    else:
        print(f"{path} SHA1 verified")

verify_hash("orig/Homeworld2Classic/Bin/Test/autoexec.lua", ["D807C88860BB1AD4ABDF2E832495EE2EA655ECB2"])
verify_hash("orig/Homeworld2Classic/Bin/Test/Console.dll", ["209B0C7A9A36A52E54DD611192AB836866CD7313"])
verify_hash("orig/Homeworld2Classic/Bin/Test/console.pdb", ["5AF8A0270887FE4D6DBD19C6E53301ABB356340F"])
verify_hash("orig/Homeworld2Classic/Bin/Test/DCDefault.dll", ["D4BDA8A63EB65AA13248CA4C72484BCC470BF9EB"])
verify_hash("orig/Homeworld2Classic/Bin/Test/dcdefault.pdb", ["14D8E3AD0092CB048503726E809627B7FAA930DB"])
verify_hash("orig/Homeworld2Classic/Bin/Test/DCWindow.dll", ["DC1B66963ACF1BA7BAB1EFFFC88A650314259D22"])
verify_hash("orig/Homeworld2Classic/Bin/Test/dcwindow.pdb", ["0ADBB7776899578DF2407A4B95817F31BD5B3D48"])
verify_hash("orig/Homeworld2Classic/Bin/Test/Debug.dll", ["F3F7E034D4AA359F505ADBD30A678C8A4ADDED75"])
verify_hash("orig/Homeworld2Classic/Bin/Test/Debug.map", ["A50F3A031F2AF2EBCCF26313A531DCFFC0463A8A"])
verify_hash("orig/Homeworld2Classic/Bin/Test/debug.pdb", ["59DCCABFE658A06A403EC95171542E62AF53A090"])
verify_hash("orig/Homeworld2Classic/Bin/Test/DivxDecoder.dll", ["DABD5ECF1FC64C2DCD451646BAC9F9309AADE0B4"])
verify_hash("orig/Homeworld2Classic/Bin/Test/DivxMediaLib.dll", ["7E1F3909E2E598BEDAFBEEF8C8E3248FD6AE14ED"])
verify_hash("orig/Homeworld2Classic/Bin/Test/ExeTie.dll", ["1B26301CFD9FAD649A69A7CEAECA1426E73BC860"])
verify_hash("orig/Homeworld2Classic/Bin/Test/exetie.pdb", ["2E21307328B1883A212FA670A4C54E3B4DE682BC"])
verify_hash("orig/Homeworld2Classic/Bin/Test/FileIO.dll", ["7C38853CF6194A90C97208F88F8F7742FA8F669D"])
verify_hash("orig/Homeworld2Classic/Bin/Test/fileio.pdb", ["6EDD1D6D63B87155D0E14AE4D91814B776C7482B"])
verify_hash("orig/Homeworld2Classic/Bin/Test/FileParser.dll", ["A49300A34E7DC52E58654551B846769363803CA4"])
verify_hash("orig/Homeworld2Classic/Bin/Test/GL.dll", ["B12A5A34D6B1BA6EAE08F199A012E0DA20F5886C"])
verify_hash("orig/Homeworld2Classic/Bin/Test/gl.pdb", ["9C1E5D42950E18B0E93F5C8CC62B02F89989C3E2"])
verify_hash("orig/Homeworld2Classic/Bin/Test/GSLobby.dll", ["FD84820FB0081F36800608AF36B66CAEA5A71830"])
verify_hash("orig/Homeworld2Classic/Bin/Test/gslobby.pdb", ["3848244FC6EAF4D2F87DA4AB31D23706EF1B66E0"])
verify_hash("orig/Homeworld2Classic/Bin/Test/Homeworld2.exe", ["D466E943BBC0DE15E6A03D4528FADAFE9A61E058"])
verify_hash("orig/Homeworld2Classic/Bin/Test/homeworld2.pdb", ["3FFF5AE05735824B2CD0CF99ED977FD9F43411DD"])
verify_hash("orig/Homeworld2Classic/Bin/Test/HW2Box.dll", ["4BF1488669359EBA55C9AFA4EC892C7B0AC7076B"])
verify_hash("orig/Homeworld2Classic/Bin/Test/HW2Box.idb", ["8E21E5E27C1DDE1A204166E6D132DE2A7033549E"])
verify_hash("orig/Homeworld2Classic/Bin/Test/hw2box.pdb", ["13E90C2A1A5F2B1567C4FAF35BE2A79E91948F20"])
verify_hash("orig/Homeworld2Classic/Bin/Test/Localizer.dll", ["5D61D3C7966E929F12B269E34E7D75CA3462623F"])
verify_hash("orig/Homeworld2Classic/Bin/Test/Localizer.map", ["7CB03DD81BF1CE8A75B6F2F141CFAF928EC3E667"])
verify_hash("orig/Homeworld2Classic/Bin/Test/localizer.pdb", ["B8BFF85CA917AE0C1DEFA5369868BFCC162EEA2E"])
verify_hash("orig/Homeworld2Classic/Bin/Test/lua.dll", ["E84BD2F04F24F3C271BFCEDEDB5F311968A8423E"])
verify_hash("orig/Homeworld2Classic/Bin/Test/lua.map", ["2A5EBB640BB81C13A83AF47BB95DEDF12CD906CA"])
verify_hash("orig/Homeworld2Classic/Bin/Test/lua.pdb", ["DE6ED02382C992A1E9386D03BC419FC41CBDEBAC"])
verify_hash("orig/Homeworld2Classic/Bin/Test/LuaConfig.dll", ["803EE5A8B248667F1183C9909A2B213888F07E6F"])
verify_hash("orig/Homeworld2Classic/Bin/Test/luaconfig.pdb", ["8E8D632ADE09932D695C5F2D05C9EBBFA6BC882C"])
verify_hash("orig/Homeworld2Classic/Bin/Test/Memory.dll", ["11BE85168EA7CEDE79014C59194ADC1D36AEE025"])
verify_hash("orig/Homeworld2Classic/Bin/Test/Memory.map", ["08BB534FDC90B63BC6A53D699BF9E0832149278C"])
verify_hash("orig/Homeworld2Classic/Bin/Test/memory.pdb", ["32060B645F111B101EA77F28448231F6EB8943C7"])
verify_hash("orig/Homeworld2Classic/Bin/Test/Objects.dll", ["83166611A3BF9DEF772970D7700978CE54D3BE70"])
verify_hash("orig/Homeworld2Classic/Bin/Test/objects.pdb", ["FF2D84B8E4AC4B128ECAF161A72A4A174EA4B1D6"])
verify_hash("orig/Homeworld2Classic/Bin/Test/Platform.dll", ["CB1BD6F664BA168BECC5DCC3EB7FDE2B09CEEF2E"])
verify_hash("orig/Homeworld2Classic/Bin/Test/platform.pdb", ["868F8A91797E5FCA9089014C2FE6A6AA7EFB7D3A"])
verify_hash("orig/Homeworld2Classic/Bin/Test/Profile.dll", ["D2645A52C9F8AD95B83CF9BC941407F908F90031"])
verify_hash("orig/Homeworld2Classic/Bin/Test/profile.pdb", ["A607E1B6D5F0990695760EDB62765EAD19B91B87"])
verify_hash("orig/Homeworld2Classic/Bin/Test/seDXAudio.dll", ["1F0F0D5800931758C74DE783D186D10A6189CBE6"])
verify_hash("orig/Homeworld2Classic/Bin/Test/sedxaudio.pdb", ["275C89EFA651C3E3D0DBF41943DA314B5EB6308F"])
verify_hash("orig/Homeworld2Classic/Bin/Test/seFDAudio.dll", ["A338AA4DD826EDCEB10F71E6D2A18D3D6B1EB9EB"])
verify_hash("orig/Homeworld2Classic/Bin/Test/sefdaudio.pdb", ["42CDCE1CD71A3835AF8ACBBA44BAEB3456E5A4E6"])
verify_hash("orig/Homeworld2Classic/Bin/Test/SteamLobby.dll", ["B6E66A7FBCA6428CFF6DBA2B45BBA7248C3E2CF2"])
verify_hash("orig/Homeworld2Classic/Bin/Test/steamlobby.pdb", ["355A8D95F6C5775AB8F69F9B5C7F00E6FE94AA81"])
verify_hash("orig/Homeworld2Classic/Bin/Test/steam_api.dll", ["A80ABFB6D95D59536BB83776258D1094054C3595"])
verify_hash("orig/Homeworld2Classic/Bin/Test/steam_appid.txt", ["259C2F70E80A13E01EEA061B007624CD5FBE837E"])
verify_hash("orig/Homeworld2Classic/Bin/Test/Util.dll", ["9B44569B89B4F4B2A751CF36FEBEBC8DC75B9D10"])
verify_hash("orig/Homeworld2Classic/Bin/Test/util.pdb", ["C9786DD63A87F23A848F0099C39A3BCFD2680A0F"])
verify_hash("orig/Homeworld2Classic/Bin/Test/ZLib.dll", ["F6709D5C89EB17D88E3114D08A99C6D54A1A7EF8"])
verify_hash("orig/Homeworld2Classic/Bin/Test/ZLib.map", ["6AEAA188A3C83D0CE607BEC53A464C4009BC4C00"])
verify_hash("orig/Homeworld2Classic/Bin/Test/zlib.pdb", ["C0AF615EC1AEC75E6302B9C1C33AAE60C80FA84C"])
verify_hash("orig/Homeworld2Classic/Data/English.big", ["40CD7736EE2E84DB54D1C2E9E3958ED1BEAEA132"])
verify_hash("orig/Homeworld2Classic/Data/EnglishSpeech.big", ["5E2D0632A14DCB70610AFA405792C19FD7E26E9F"])
verify_hash("orig/Homeworld2Classic/Data/French.big", ["456AF1F18937829AEE9829A889792F24D849C079"])
verify_hash("orig/Homeworld2Classic/Data/FrenchSpeech.big", ["5E2D0632A14DCB70610AFA405792C19FD7E26E9F"])
verify_hash("orig/Homeworld2Classic/Data/German.big", ["DA2937945AB06655BA45671335EE6F98B5C71606"])
verify_hash("orig/Homeworld2Classic/Data/GermanSpeech.big", ["5E2D0632A14DCB70610AFA405792C19FD7E26E9F"])
verify_hash("orig/Homeworld2Classic/Data/Homeworld2.big", ["D604EB8F74BB517AE45D40D723CBB04D4A3B1803"])
verify_hash("orig/Homeworld2Classic/Data/Italian.big", ["8FC43819DFF8BFDC4735F90CB3B7E3A576E10969"])
verify_hash("orig/Homeworld2Classic/Data/ItalianSpeech.big", ["5E2D0632A14DCB70610AFA405792C19FD7E26E9F"])
verify_hash("orig/Homeworld2Classic/Data/Music.big", ["AE96811472C38471E90E9642DB65031822E8B87D"])
verify_hash("orig/Homeworld2Classic/Data/Spanish.big", ["AA05968040229C215C17A1A75ECE4D88D9C13582"])
verify_hash("orig/Homeworld2Classic/Data/SpanishSpeech.big", ["5E2D0632A14DCB70610AFA405792C19FD7E26E9F"])

def substitute_flag(flag):
    substitutions = {
        "$(SOURCE_ROOT)": SOURCE_ROOT,
        "$(COMPILER_ROOT)": COMPILER_ROOT,
    }
    for token, value in substitutions.items():
        flag = flag.replace(token, value)
    return flag

def flatten_cflags(name, cflags_dict):
    result = []

    def recurse(n):
        entry = cflags_dict[n]
        if "base" in entry:
            recurse(entry["base"])
        result.extend(substitute_flag(f) for f in entry.get("flags", []))

    recurse(name)
    return result


def to_forward_path(p):
    return p.replace("\\", "/")


def get_delink_path(binary_name, src):
    return f"build/DevRelease/delink/{binary_name}/" + to_forward_path(src).rsplit(".", 1)[0] + ".obj"


def get_target_path(lib_name, src):
    return f"build/DevRelease/{lib_name}/obj/" + to_forward_path(src).rsplit(".", 1)[0] + ".obj"


def write_objdiff(config, objects):
    units = []
    for lib_name, lib in objects.items():
        category = lib.get("progress_category", "default")
        for src, target in lib["objects"].items():
            units.append({
                "name": to_forward_path(src).rsplit(".", 1)[0],
                "target_path": get_delink_path(lib_name, target or src),
                "base_path": get_target_path(lib_name, src),
                "metadata": {
                    "complete": False,
                    "reverse_fn_order": False,
                    "source_path": SOURCE_ROOT + "/" + to_forward_path(src),
                    "progress_categories": [category],
                    "auto_generated": False,
                },
            })

    return {
        "min_version": "2.0.0-beta.5",
        "custom_make": "ninja",
        "build_target": False,
        "watch_patterns": [
            "*.c", "*.cp", "*.cpp", "*.h", "*.hpp",
            "*.inc", "*.py", "*.yml", "*.txt", "*.json"
        ],
        "units": units,
        "progress_categories": [
            {"id": k, "name": v}
            for k, v in config.get("progress_categories", {}).items()
        ],
    }


def write_ninja(config, objects):
    lines = []
    cxx = config.get("compiler", "clang++")
    lines.append(f"cxx = {cxx}\n\n")

    asflags = " ".join(substitute_flag(f) for f in config.get("asflags", []))
    ldflags = " ".join(substitute_flag(f) for f in config.get("ldflags", []))
    if asflags:
        lines.append(f"asflags = {asflags}\n\n")
    if ldflags:
        lines.append(f"ldflags = {ldflags}\n\n")

    lines.append("rule compile\n")
    lines.append("  command = $cxx /c $cflags -c $in \"/Fo$out\"\n")
    lines.append("  description = Compiling $in\n\n")

    all_objs = []
    for lib_name, lib in objects.items():
        flags_str = " ".join(flatten_cflags(lib["cflags"], config["cflags"]))
        for src in lib["objects"]:
            obj = get_target_path(lib_name, src)
            all_objs.append(obj)
            lines.append(f"build {obj}: compile {to_forward_path(SOURCE_ROOT + '/' + src)}\n")
            lines.append(f"  cflags = {flags_str}\n\n")

    lines.append("build all: phony $\n")
    for obj in all_objs:
        lines.append(f"  {obj} $\n")
    lines.append("\ndefault all\n")

    return "".join(lines)

# Ensure delink binary
download_file(DELINK_URL, DELINK_EXE, DELINK_SHA1)

download_file(OBJDIFF_CLI_URL, OBJDIFF_CLI_EXE, OBJDIFF_CLI_SHA1)
download_file(OBJDIFF_URL, OBJDIFF_EXE, OBJDIFF_SHA1)

for bin_path, pdb_path in ORIG_BINARIES:
    binary_name = bin_path.name
    delink_dir = DELINK_OUTPUT_DIR / binary_name
    delink_dir.mkdir(parents=True, exist_ok=True)
    run([
        str(DELINK_EXE), "pe-split", str(bin_path),
        "--pdb", str(pdb_path),
        "-o", str(delink_dir),
    ])

with open("build.ninja", "w", encoding="utf-8") as f:
    f.write(write_ninja(config, objects))

with open("objdiff.json", "w", encoding="utf-8") as f:
    json.dump(write_objdiff(config, objects), f, indent=2)

print("Generated build.ninja and objdiff.json")
