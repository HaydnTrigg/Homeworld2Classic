#if 0
#ifndef __JPEGLIB_H__
#define __JPEGLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum J_COLOR_SPACE
{
    JCS_UNKNOWN = 0,
    JCS_GRAYSCALE,
    JCS_RGB,
    JCS_YCbCr,
    JCS_CMYK,
    JCS_YCCK,
};

enum J_DCT_METHOD
{
    JDCT_ISLOW = 0,
    JDCT_IFAST,
    JDCT_FLOAT,
};

enum J_DITHER_MODE
{
    JDITHER_NONE = 0,
    JDITHER_ORDERED,
    JDITHER_FS,
};

/* ---------- definitions */

struct JQUANT_TBL
{
    unsigned short quantval[64]; // 0x0
    unsigned char sent_table; // 0x80
};
static_assert(sizeof(JQUANT_TBL) == 130, "Invalid JQUANT_TBL size");

struct JHUFF_TBL
{
    unsigned char bits[17]; // 0x0
    unsigned char huffval[256]; // 0x11
    unsigned char sent_table; // 0x111
};
static_assert(sizeof(JHUFF_TBL) == 274, "Invalid JHUFF_TBL size");

struct jpeg_component_info
{
    __int32 component_id; // 0x0
    __int32 component_index; // 0x4
    __int32 h_samp_factor; // 0x8
    __int32 v_samp_factor; // 0xC
    __int32 quant_tbl_no; // 0x10
    __int32 dc_tbl_no; // 0x14
    __int32 ac_tbl_no; // 0x18
    unsigned __int32 width_in_blocks; // 0x1C
    unsigned __int32 height_in_blocks; // 0x20
    __int32 DCT_scaled_size; // 0x24
    unsigned __int32 downsampled_width; // 0x28
    unsigned __int32 downsampled_height; // 0x2C
    unsigned char component_needed; // 0x30
    __int32 MCU_width; // 0x34
    __int32 MCU_height; // 0x38
    __int32 MCU_blocks; // 0x3C
    __int32 MCU_sample_width; // 0x40
    __int32 last_col_width; // 0x44
    __int32 last_row_height; // 0x48
    JQUANT_TBL *quant_table; // 0x4C
    void *dct_table; // 0x50
};
static_assert(sizeof(jpeg_component_info) == 84, "Invalid jpeg_component_info size");

struct jpeg_scan_info
{
    __int32 comps_in_scan; // 0x0
    __int32 component_index[4]; // 0x4
    __int32 Ss; // 0x14
    __int32 Se; // 0x18
    __int32 Ah; // 0x1C
    __int32 Al; // 0x20
};
static_assert(sizeof(jpeg_scan_info) == 36, "Invalid jpeg_scan_info size");

struct jpeg_marker_struct
{
    jpeg_marker_struct *next; // 0x0
    unsigned char marker; // 0x4
    unsigned __int32 original_length; // 0x8
    unsigned __int32 data_length; // 0xC
    unsigned char *data; // 0x10
};
static_assert(sizeof(jpeg_marker_struct) == 20, "Invalid jpeg_marker_struct size");

struct jpeg_common_struct
{
    jpeg_error_mgr *err; // 0x0
    jpeg_memory_mgr *mem; // 0x4
    jpeg_progress_mgr *progress; // 0x8
    void *client_data; // 0xC
    unsigned char is_decompressor; // 0x10
    __int32 global_state; // 0x14
};
static_assert(sizeof(jpeg_common_struct) == 24, "Invalid jpeg_common_struct size");

struct jpeg_compress_struct
{
    jpeg_error_mgr *err; // 0x0
    jpeg_memory_mgr *mem; // 0x4
    jpeg_progress_mgr *progress; // 0x8
    void *client_data; // 0xC
    unsigned char is_decompressor; // 0x10
    __int32 global_state; // 0x14
    jpeg_destination_mgr *dest; // 0x18
    unsigned __int32 image_width; // 0x1C
    unsigned __int32 image_height; // 0x20
    __int32 input_components; // 0x24
    J_COLOR_SPACE in_color_space; // 0x28
    double input_gamma; // 0x30
    __int32 data_precision; // 0x38
    __int32 num_components; // 0x3C
    J_COLOR_SPACE jpeg_color_space; // 0x40
    jpeg_component_info *comp_info; // 0x44
    JQUANT_TBL *quant_tbl_ptrs[4]; // 0x48
    JHUFF_TBL *dc_huff_tbl_ptrs[4]; // 0x58
    JHUFF_TBL *ac_huff_tbl_ptrs[4]; // 0x68
    unsigned char arith_dc_L[16]; // 0x78
    unsigned char arith_dc_U[16]; // 0x88
    unsigned char arith_ac_K[16]; // 0x98
    __int32 num_scans; // 0xA8
    jpeg_scan_info const *scan_info; // 0xAC
    unsigned char raw_data_in; // 0xB0
    unsigned char arith_code; // 0xB1
    unsigned char optimize_coding; // 0xB2
    unsigned char CCIR601_sampling; // 0xB3
    __int32 smoothing_factor; // 0xB4
    J_DCT_METHOD dct_method; // 0xB8
    unsigned __int32 restart_interval; // 0xBC
    __int32 restart_in_rows; // 0xC0
    unsigned char write_JFIF_header; // 0xC4
    unsigned char JFIF_major_version; // 0xC5
    unsigned char JFIF_minor_version; // 0xC6
    unsigned char density_unit; // 0xC7
    unsigned short X_density; // 0xC8
    unsigned short Y_density; // 0xCA
    unsigned char write_Adobe_marker; // 0xCC
    unsigned __int32 next_scanline; // 0xD0
    unsigned char progressive_mode; // 0xD4
    __int32 max_h_samp_factor; // 0xD8
    __int32 max_v_samp_factor; // 0xDC
    unsigned __int32 total_iMCU_rows; // 0xE0
    __int32 comps_in_scan; // 0xE4
    jpeg_component_info *cur_comp_info[4]; // 0xE8
    unsigned __int32 MCUs_per_row; // 0xF8
    unsigned __int32 MCU_rows_in_scan; // 0xFC
    __int32 blocks_in_MCU; // 0x100
    __int32 MCU_membership[10]; // 0x104
    __int32 Ss; // 0x12C
    __int32 Se; // 0x130
    __int32 Ah; // 0x134
    __int32 Al; // 0x138
    jpeg_comp_master *master; // 0x13C
    jpeg_c_main_controller *main; // 0x140
    jpeg_c_prep_controller *prep; // 0x144
    jpeg_c_coef_controller *coef; // 0x148
    jpeg_marker_writer *marker; // 0x14C
    jpeg_color_converter *cconvert; // 0x150
    jpeg_downsampler *downsample; // 0x154
    jpeg_forward_dct *fdct; // 0x158
    jpeg_entropy_encoder *entropy; // 0x15C
    jpeg_scan_info *script_space; // 0x160
    __int32 script_space_size; // 0x164
};
static_assert(sizeof(jpeg_compress_struct) == 360, "Invalid jpeg_compress_struct size");

struct jpeg_decompress_struct
{
    jpeg_error_mgr *err; // 0x0
    jpeg_memory_mgr *mem; // 0x4
    jpeg_progress_mgr *progress; // 0x8
    void *client_data; // 0xC
    unsigned char is_decompressor; // 0x10
    __int32 global_state; // 0x14
    jpeg_source_mgr *src; // 0x18
    unsigned __int32 image_width; // 0x1C
    unsigned __int32 image_height; // 0x20
    __int32 num_components; // 0x24
    J_COLOR_SPACE jpeg_color_space; // 0x28
    J_COLOR_SPACE out_color_space; // 0x2C
    unsigned __int32 scale_num; // 0x30
    unsigned __int32 scale_denom; // 0x34
    double output_gamma; // 0x38
    unsigned char buffered_image; // 0x40
    unsigned char raw_data_out; // 0x41
    J_DCT_METHOD dct_method; // 0x44
    unsigned char do_fancy_upsampling; // 0x48
    unsigned char do_block_smoothing; // 0x49
    unsigned char quantize_colors; // 0x4A
    J_DITHER_MODE dither_mode; // 0x4C
    unsigned char two_pass_quantize; // 0x50
    __int32 desired_number_of_colors; // 0x54
    unsigned char enable_1pass_quant; // 0x58
    unsigned char enable_external_quant; // 0x59
    unsigned char enable_2pass_quant; // 0x5A
    unsigned __int32 output_width; // 0x5C
    unsigned __int32 output_height; // 0x60
    __int32 out_color_components; // 0x64
    __int32 output_components; // 0x68
    __int32 rec_outbuf_height; // 0x6C
    __int32 actual_number_of_colors; // 0x70
    unsigned char **colormap; // 0x74
    unsigned __int32 output_scanline; // 0x78
    __int32 input_scan_number; // 0x7C
    unsigned __int32 input_iMCU_row; // 0x80
    __int32 output_scan_number; // 0x84
    unsigned __int32 output_iMCU_row; // 0x88
    __int32 *coef_bits[64]; // 0x8C
    JQUANT_TBL *quant_tbl_ptrs[4]; // 0x90
    JHUFF_TBL *dc_huff_tbl_ptrs[4]; // 0xA0
    JHUFF_TBL *ac_huff_tbl_ptrs[4]; // 0xB0
    __int32 data_precision; // 0xC0
    jpeg_component_info *comp_info; // 0xC4
    unsigned char progressive_mode; // 0xC8
    unsigned char arith_code; // 0xC9
    unsigned char arith_dc_L[16]; // 0xCA
    unsigned char arith_dc_U[16]; // 0xDA
    unsigned char arith_ac_K[16]; // 0xEA
    unsigned __int32 restart_interval; // 0xFC
    unsigned char saw_JFIF_marker; // 0x100
    unsigned char JFIF_major_version; // 0x101
    unsigned char JFIF_minor_version; // 0x102
    unsigned char density_unit; // 0x103
    unsigned short X_density; // 0x104
    unsigned short Y_density; // 0x106
    unsigned char saw_Adobe_marker; // 0x108
    unsigned char Adobe_transform; // 0x109
    unsigned char CCIR601_sampling; // 0x10A
    jpeg_marker_struct *marker_list; // 0x10C
    __int32 max_h_samp_factor; // 0x110
    __int32 max_v_samp_factor; // 0x114
    __int32 min_DCT_scaled_size; // 0x118
    unsigned __int32 total_iMCU_rows; // 0x11C
    unsigned char *sample_range_limit; // 0x120
    __int32 comps_in_scan; // 0x124
    jpeg_component_info *cur_comp_info[4]; // 0x128
    unsigned __int32 MCUs_per_row; // 0x138
    unsigned __int32 MCU_rows_in_scan; // 0x13C
    __int32 blocks_in_MCU; // 0x140
    __int32 MCU_membership[10]; // 0x144
    __int32 Ss; // 0x16C
    __int32 Se; // 0x170
    __int32 Ah; // 0x174
    __int32 Al; // 0x178
    __int32 unread_marker; // 0x17C
    jpeg_decomp_master *master; // 0x180
    jpeg_d_main_controller *main; // 0x184
    jpeg_d_coef_controller *coef; // 0x188
    jpeg_d_post_controller *post; // 0x18C
    jpeg_input_controller *inputctl; // 0x190
    jpeg_marker_reader *marker; // 0x194
    jpeg_entropy_decoder *entropy; // 0x198
    jpeg_inverse_dct *idct; // 0x19C
    jpeg_upsampler *upsample; // 0x1A0
    jpeg_color_deconverter *cconvert; // 0x1A4
    jpeg_color_quantizer *cquantize; // 0x1A8
};
static_assert(sizeof(jpeg_decompress_struct) == 432, "Invalid jpeg_decompress_struct size");

struct jpeg_error_mgr
{
    void (*error_exit)(jpeg_common_struct *); // 0x0
    void (*emit_message)(jpeg_common_struct *, __int32); // 0x4
    void (*output_message)(jpeg_common_struct *); // 0x8
    void (*format_message)(jpeg_common_struct *, char *); // 0xC
    void (*reset_error_mgr)(jpeg_common_struct *); // 0x10
    __int32 msg_code; // 0x14
    union
    {
        __int32 i[8]; // 0x0
        char s[80]; // 0x0
    } msg_parm; // 0x18
    __int32 trace_level; // 0x68
    long num_warnings; // 0x6C
    char const *const *jpeg_message_table; // 0x70
    __int32 last_jpeg_message; // 0x74
    char const *const *addon_message_table; // 0x78
    __int32 first_addon_message; // 0x7C
    __int32 last_addon_message; // 0x80
    union <unnamed-type-msg_parm>
    {
        __int32 i[8]; // 0x0
        char s[80]; // 0x0
    };
    static_assert(sizeof(<unnamed-type-msg_parm>) == 80, "Invalid <unnamed-type-msg_parm> size");
};
static_assert(sizeof(jpeg_error_mgr) == 132, "Invalid jpeg_error_mgr size");

struct jpeg_error_mgr
{
    void (*error_exit)(jpeg_common_struct *); // 0x0
    void (*emit_message)(jpeg_common_struct *, __int32); // 0x4
    void (*output_message)(jpeg_common_struct *); // 0x8
    void (*format_message)(jpeg_common_struct *, char *); // 0xC
    void (*reset_error_mgr)(jpeg_common_struct *); // 0x10
    __int32 msg_code; // 0x14
    <unnamed-tag> msg_parm; // 0x18
    __int32 trace_level; // 0x68
    long num_warnings; // 0x6C
    char const *const *jpeg_message_table; // 0x70
    __int32 last_jpeg_message; // 0x74
    char const *const *addon_message_table; // 0x78
    __int32 first_addon_message; // 0x7C
    __int32 last_addon_message; // 0x80
};
static_assert(sizeof(jpeg_error_mgr) == 132, "Invalid jpeg_error_mgr size");

struct jpeg_progress_mgr
{
    void (*progress_monitor)(jpeg_common_struct *); // 0x0
    long pass_counter; // 0x4
    long pass_limit; // 0x8
    __int32 completed_passes; // 0xC
    __int32 total_passes; // 0x10
};
static_assert(sizeof(jpeg_progress_mgr) == 20, "Invalid jpeg_progress_mgr size");

struct jpeg_destination_mgr
{
    unsigned char *next_output_byte; // 0x0
    unsigned __int32 free_in_buffer; // 0x4
    void (*init_destination)(jpeg_compress_struct *); // 0x8
    unsigned char (*empty_output_buffer)(jpeg_compress_struct *); // 0xC
    void (*term_destination)(jpeg_compress_struct *); // 0x10
};
static_assert(sizeof(jpeg_destination_mgr) == 20, "Invalid jpeg_destination_mgr size");

struct jpeg_source_mgr
{
    unsigned char const *next_input_byte; // 0x0
    unsigned __int32 bytes_in_buffer; // 0x4
    void (*init_source)(jpeg_decompress_struct *); // 0x8
    unsigned char (*fill_input_buffer)(jpeg_decompress_struct *); // 0xC
    void (*skip_input_data)(jpeg_decompress_struct *, long); // 0x10
    unsigned char (*resync_to_restart)(jpeg_decompress_struct *, __int32); // 0x14
    void (*term_source)(jpeg_decompress_struct *); // 0x18
};
static_assert(sizeof(jpeg_source_mgr) == 28, "Invalid jpeg_source_mgr size");

struct jpeg_memory_mgr
{
    void *(*alloc_small)(jpeg_common_struct *, __int32, unsigned __int32); // 0x0
    void *(*alloc_large)(jpeg_common_struct *, __int32, unsigned __int32); // 0x4
    unsigned char **(*alloc_sarray)(jpeg_common_struct *, __int32, unsigned __int32, unsigned __int32); // 0x8
    short **(*alloc_barray)(jpeg_common_struct *, __int32, unsigned __int32, unsigned __int32)[64]; // 0xC
    jvirt_sarray_control *(*request_virt_sarray)(jpeg_common_struct *, __int32, unsigned char, unsigned __int32, unsigned __int32, unsigned __int32); // 0x10
    jvirt_barray_control *(*request_virt_barray)(jpeg_common_struct *, __int32, unsigned char, unsigned __int32, unsigned __int32, unsigned __int32); // 0x14
    void (*realize_virt_arrays)(jpeg_common_struct *); // 0x18
    unsigned char **(*access_virt_sarray)(jpeg_common_struct *, jvirt_sarray_control *, unsigned __int32, unsigned __int32, unsigned char); // 0x1C
    short **(*access_virt_barray)(jpeg_common_struct *, jvirt_barray_control *, unsigned __int32, unsigned __int32, unsigned char)[64]; // 0x20
    void (*free_pool)(jpeg_common_struct *, __int32); // 0x24
    void (*self_destruct)(jpeg_common_struct *); // 0x28
    long max_memory_to_use; // 0x2C
    long max_alloc_chunk; // 0x30
};
static_assert(sizeof(jpeg_memory_mgr) == 52, "Invalid jpeg_memory_mgr size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __JPEGLIB_H__
#endif
