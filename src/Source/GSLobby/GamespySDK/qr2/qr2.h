#if 0
#ifndef __QR2_H__
#define __QR2_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum qr2_error_t
{
    e_qrnoerror = 0,
    e_qrwsockerror,
    e_qrbinderror,
    e_qrdnserror,
    e_qrconnerror,
    e_qrnochallengeerror,
};

enum qr2_key_type
{
    key_server = 0,
    key_player,
    key_team,
};

/* ---------- definitions */

struct qr2_implementation_s
{
    unsigned __int32 hbsock; // 0x0
    char gamename[64]; // 0x4
    char secret_key[64]; // 0x44
    char instance_key[4]; // 0x84
    void (*server_key_callback)(__int32, qr2_buffer_s *, void *); // 0x88
    void (*player_key_callback)(__int32, __int32, qr2_buffer_s *, void *); // 0x8C
    void (*team_key_callback)(__int32, __int32, qr2_buffer_s *, void *); // 0x90
    void (*key_list_callback)(qr2_key_type, qr2_keybuffer_s *, void *); // 0x94
    __int32 (*playerteam_count_callback)(qr2_key_type, void *); // 0x98
    void (*adderror_callback)(qr2_error_t, char *, void *); // 0x9C
    void (*nn_callback)(__int32, void *); // 0xA0
    void (*cm_callback)(char *, __int32, void *); // 0xA4
    unsigned long lastheartbeat; // 0xA8
    unsigned long lastka; // 0xAC
    __int32 listed_state; // 0xB0
    __int32 ispublic; // 0xB4
    __int32 qport; // 0xB8
    __int32 read_socket; // 0xBC
    __int32 nat_negotiate; // 0xC0
    sockaddr_in hbaddr; // 0xC4
    void (*cdkeyprocess)(char *, __int32, sockaddr *); // 0xD4
    __int32 client_message_keys[10]; // 0xD8
    __int32 cur_message_key; // 0x100
    void *udata; // 0x104
};
static_assert(sizeof(qr2_implementation_s) == 264, "Invalid qr2_implementation_s size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __QR2_H__
#endif
