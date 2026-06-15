#if 0
/* ---------- headers */

#include "decomp.h"
#include <WebMVideoInterface.h>
#include <vp8dx.h>
#include <VideoInterface.h>
#include <vp8.h>
#include <vpx_codec_impl_top.h>
#include <pch.h>
#include <crtdefs.h>
#include <vpx_codec_impl_bottom.h>
#include <vpx_image.h>
#include <WebMVideo.h>
#include <video.h>
#include <mkvreader.hpp>
#include <mkvparser.hpp>
#include <vpx_decoder.h>
#include <vpx_codec.h>
#include <vpx_integer.h>
#include <stdint.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

Video *WebMVideoInterface::CreateVideo(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, void *, unsigned __int32 const) // 0x6FC19F
{
    mangled_assert("?CreateVideo@WebMVideoInterface@@UAEPAVVideo@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAXI@Z");
    todo("implement");
}

/* ---------- private code */
#endif
