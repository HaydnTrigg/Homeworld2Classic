#if 0
#ifndef __JPEGINT_H__
#define __JPEGINT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct jpeg_comp_master
{
    void (*prepare_for_pass)(jpeg_compress_struct *); // 0x0
    void (*pass_startup)(jpeg_compress_struct *); // 0x4
    void (*finish_pass)(jpeg_compress_struct *); // 0x8
    unsigned char call_pass_startup; // 0xC
    unsigned char is_last_pass; // 0xD
};
static_assert(sizeof(jpeg_comp_master) == 16, "Invalid jpeg_comp_master size");

struct jpeg_c_main_controller
{
    void (*start_pass)(jpeg_compress_struct *, J_BUF_MODE); // 0x0
    void (*process_data)(jpeg_compress_struct *, unsigned char **, unsigned __int32 *, unsigned __int32); // 0x4
};
static_assert(sizeof(jpeg_c_main_controller) == 8, "Invalid jpeg_c_main_controller size");

struct jpeg_c_prep_controller
{
    void (*start_pass)(jpeg_compress_struct *, J_BUF_MODE); // 0x0
    void (*pre_process_data)(jpeg_compress_struct *, unsigned char **, unsigned __int32 *, unsigned __int32, unsigned char ***, unsigned __int32 *, unsigned __int32); // 0x4
};
static_assert(sizeof(jpeg_c_prep_controller) == 8, "Invalid jpeg_c_prep_controller size");

struct jpeg_c_coef_controller
{
    void (*start_pass)(jpeg_compress_struct *, J_BUF_MODE); // 0x0
    unsigned char (*compress_data)(jpeg_compress_struct *, unsigned char ***); // 0x4
};
static_assert(sizeof(jpeg_c_coef_controller) == 8, "Invalid jpeg_c_coef_controller size");

struct jpeg_color_converter
{
    void (*start_pass)(jpeg_compress_struct *); // 0x0
    void (*color_convert)(jpeg_compress_struct *, unsigned char **, unsigned char ***, unsigned __int32, __int32); // 0x4
};
static_assert(sizeof(jpeg_color_converter) == 8, "Invalid jpeg_color_converter size");

struct jpeg_downsampler
{
    void (*start_pass)(jpeg_compress_struct *); // 0x0
    void (*downsample)(jpeg_compress_struct *, unsigned char ***, unsigned __int32, unsigned char ***, unsigned __int32); // 0x4
    unsigned char need_context_rows; // 0x8
};
static_assert(sizeof(jpeg_downsampler) == 12, "Invalid jpeg_downsampler size");

struct jpeg_forward_dct
{
    void (*start_pass)(jpeg_compress_struct *); // 0x0
    void (*forward_DCT)(jpeg_compress_struct *, jpeg_component_info *, unsigned char **, short *[64], unsigned __int32, unsigned __int32, unsigned __int32); // 0x4
};
static_assert(sizeof(jpeg_forward_dct) == 8, "Invalid jpeg_forward_dct size");

struct jpeg_entropy_encoder
{
    void (*start_pass)(jpeg_compress_struct *, unsigned char); // 0x0
    unsigned char (*encode_mcu)(jpeg_compress_struct *, short **[64]); // 0x4
    void (*finish_pass)(jpeg_compress_struct *); // 0x8
};
static_assert(sizeof(jpeg_entropy_encoder) == 12, "Invalid jpeg_entropy_encoder size");

struct jpeg_marker_writer
{
    void (*write_file_header)(jpeg_compress_struct *); // 0x0
    void (*write_frame_header)(jpeg_compress_struct *); // 0x4
    void (*write_scan_header)(jpeg_compress_struct *); // 0x8
    void (*write_file_trailer)(jpeg_compress_struct *); // 0xC
    void (*write_tables_only)(jpeg_compress_struct *); // 0x10
    void (*write_marker_header)(jpeg_compress_struct *, __int32, unsigned __int32); // 0x14
    void (*write_marker_byte)(jpeg_compress_struct *, __int32); // 0x18
};
static_assert(sizeof(jpeg_marker_writer) == 28, "Invalid jpeg_marker_writer size");

struct jpeg_decomp_master
{
    void (*prepare_for_output_pass)(jpeg_decompress_struct *); // 0x0
    void (*finish_output_pass)(jpeg_decompress_struct *); // 0x4
    unsigned char is_dummy_pass; // 0x8
};
static_assert(sizeof(jpeg_decomp_master) == 12, "Invalid jpeg_decomp_master size");

struct jpeg_input_controller
{
    __int32 (*consume_input)(jpeg_decompress_struct *); // 0x0
    void (*reset_input_controller)(jpeg_decompress_struct *); // 0x4
    void (*start_input_pass)(jpeg_decompress_struct *); // 0x8
    void (*finish_input_pass)(jpeg_decompress_struct *); // 0xC
    unsigned char has_multiple_scans; // 0x10
    unsigned char eoi_reached; // 0x11
};
static_assert(sizeof(jpeg_input_controller) == 20, "Invalid jpeg_input_controller size");

struct jpeg_d_main_controller
{
    void (*start_pass)(jpeg_decompress_struct *, J_BUF_MODE); // 0x0
    void (*process_data)(jpeg_decompress_struct *, unsigned char **, unsigned __int32 *, unsigned __int32); // 0x4
};
static_assert(sizeof(jpeg_d_main_controller) == 8, "Invalid jpeg_d_main_controller size");

struct jpeg_d_coef_controller
{
    void (*start_input_pass)(jpeg_decompress_struct *); // 0x0
    __int32 (*consume_data)(jpeg_decompress_struct *); // 0x4
    void (*start_output_pass)(jpeg_decompress_struct *); // 0x8
    __int32 (*decompress_data)(jpeg_decompress_struct *, unsigned char ***); // 0xC
    jvirt_barray_control **coef_arrays; // 0x10
};
static_assert(sizeof(jpeg_d_coef_controller) == 20, "Invalid jpeg_d_coef_controller size");

struct jpeg_d_post_controller
{
    void (*start_pass)(jpeg_decompress_struct *, J_BUF_MODE); // 0x0
    void (*post_process_data)(jpeg_decompress_struct *, unsigned char ***, unsigned __int32 *, unsigned __int32, unsigned char **, unsigned __int32 *, unsigned __int32); // 0x4
};
static_assert(sizeof(jpeg_d_post_controller) == 8, "Invalid jpeg_d_post_controller size");

struct jpeg_marker_reader
{
    void (*reset_marker_reader)(jpeg_decompress_struct *); // 0x0
    __int32 (*read_markers)(jpeg_decompress_struct *); // 0x4
    unsigned char (*read_restart_marker)(jpeg_decompress_struct *); // 0x8
    unsigned char saw_SOI; // 0xC
    unsigned char saw_SOF; // 0xD
    __int32 next_restart_num; // 0x10
    unsigned __int32 discarded_bytes; // 0x14
};
static_assert(sizeof(jpeg_marker_reader) == 24, "Invalid jpeg_marker_reader size");

struct jpeg_entropy_decoder
{
    void (*start_pass)(jpeg_decompress_struct *); // 0x0
    unsigned char (*decode_mcu)(jpeg_decompress_struct *, short **[64]); // 0x4
    unsigned char insufficient_data; // 0x8
};
static_assert(sizeof(jpeg_entropy_decoder) == 12, "Invalid jpeg_entropy_decoder size");

struct jpeg_inverse_dct
{
    void (*start_pass)(jpeg_decompress_struct *); // 0x0
    void (*inverse_DCT[10])(jpeg_decompress_struct *, jpeg_component_info *, short *, unsigned char **, unsigned __int32); // 0x4
};
static_assert(sizeof(jpeg_inverse_dct) == 44, "Invalid jpeg_inverse_dct size");

struct jpeg_upsampler
{
    void (*start_pass)(jpeg_decompress_struct *); // 0x0
    void (*upsample)(jpeg_decompress_struct *, unsigned char ***, unsigned __int32 *, unsigned __int32, unsigned char **, unsigned __int32 *, unsigned __int32); // 0x4
    unsigned char need_context_rows; // 0x8
};
static_assert(sizeof(jpeg_upsampler) == 12, "Invalid jpeg_upsampler size");

struct jpeg_color_deconverter
{
    void (*start_pass)(jpeg_decompress_struct *); // 0x0
    void (*color_convert)(jpeg_decompress_struct *, unsigned char ***, unsigned __int32, unsigned char **, __int32); // 0x4
};
static_assert(sizeof(jpeg_color_deconverter) == 8, "Invalid jpeg_color_deconverter size");

struct jpeg_color_quantizer
{
    void (*start_pass)(jpeg_decompress_struct *, unsigned char); // 0x0
    void (*color_quantize)(jpeg_decompress_struct *, unsigned char **, unsigned char **, __int32); // 0x4
    void (*finish_pass)(jpeg_decompress_struct *); // 0x8
    void (*new_color_map)(jpeg_decompress_struct *); // 0xC
};
static_assert(sizeof(jpeg_color_quantizer) == 16, "Invalid jpeg_color_quantizer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __JPEGINT_H__
#endif
