#ifndef __LOADFUNCS_LEASH_H__
#define __LOADFUNCS_LEASH_H__

#include "loadfuncs.h"
#include <leashwin.h>

#if defined(_WIN64)
#define LEASH_DLL      "leashw64.dll"
#else
#define LEASH_DLL      "leashw32.dll"
#endif

#define CALLCONV_C

TYPEDEF_FUNC(
    int,
    CALLCONV_C,
    Leash_kinit_dlg,
    (HWND, LPLSH_DLGINFO)
    );
TYPEDEF_FUNC(
    int,
    CALLCONV_C,
    Leash_kinit_dlg_ex,
    (HWND, LPLSH_DLGINFO_EX)
    );
TYPEDEF_FUNC(
    int,
    CALLCONV_C,
    Leash_changepwd_dlg,
    (HWND, LPLSH_DLGINFO)
    );
TYPEDEF_FUNC(
    int,
    CALLCONV_C,
    Leash_changepwd_dlg_ex,
    (HWND, LPLSH_DLGINFO_EX)
    );
TYPEDEF_FUNC(
    long,
    CALLCONV_C,
    Leash_checkpwd,
    (char *, char *)
    );
TYPEDEF_FUNC(
    long,
    CALLCONV_C,
    Leash_changepwd,
    (char *, char *, char*, char*)
    );
TYPEDEF_FUNC(
    long,
    CALLCONV_C,
    Leash_kinit,
    (char *, char *, int)
    );
TYPEDEF_FUNC(
    long,
    CALLCONV_C,
    Leash_kinit_ex,
    (char *, char *, int,int, int, int, int, unsigned long)
    );
TYPEDEF_FUNC(
    long,
    CALLCONV_C,
    Leash_klist,
    (HWND, TICKETINFO*)
    );
TYPEDEF_FUNC(
    long,
    CALLCONV_C,
    Leash_kdestroy,
    (void)
    );
TYPEDEF_FUNC(
    long,
    CALLCONV_C,
    Leash_get_lsh_errno,
    (LONG *)
    );
TYPEDEF_FUNC(
    BOOL,
    CALLCONV_C,
    Leash_set_help_file,
    (char *)
    );
TYPEDEF_FUNC(
    char *,
    CALLCONV_C,
    Leash_get_help_file,
    (void)
    );
TYPEDEF_FUNC(
    long,
    CALLCONV_C,
    Leash_timesync,
    (int)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_get_default_lifetime,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_set_default_lifetime,
    (DWORD)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_reset_default_lifetime,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_get_default_renew_till,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_set_default_renew_till,
    (DWORD)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_reset_default_renew_till,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_get_default_forwardable,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_set_default_forwardable,
    (DWORD)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_reset_default_forwardable,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_get_default_noaddresses,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_set_default_noaddresses,
    (DWORD)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_reset_default_noaddresses,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_get_default_proxiable,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_set_default_proxiable,
    (DWORD)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_reset_default_proxiable,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_get_default_publicip,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_set_default_publicip,
    (DWORD)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_reset_default_publicip,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_get_default_use_krb4,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_set_default_use_krb4,
    (DWORD)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_reset_default_use_krb4,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_get_default_life_min,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_set_default_life_min,
    (DWORD)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_reset_default_life_min,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_get_default_life_max,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_set_default_life_max,
    (DWORD)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_reset_default_life_max,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_get_default_renew_min,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_set_default_renew_min,
    (DWORD)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_reset_default_renew_min,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_get_default_renew_max,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_set_default_renew_max,
    (DWORD)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_reset_default_renew_max,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_get_default_renewable,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_set_default_renewable,
    (DWORD)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_reset_default_renewable,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_get_lock_file_locations,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_set_lock_file_locations,
    (DWORD)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_reset_lock_file_locations,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_get_default_uppercaserealm,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_set_default_uppercaserealm,
    (DWORD)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_reset_default_uppercaserealm,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_get_default_mslsa_import,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_set_default_mslsa_import,
    (DWORD)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_reset_default_mslsa_import,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_get_default_preserve_kinit_settings,
    (void)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_set_default_preserve_kinit_settings,
    (DWORD)
    );
TYPEDEF_FUNC(
    DWORD,
    CALLCONV_C,
    Leash_reset_default_preserve_kinit_settings,
    (void)
    );
TYPEDEF_FUNC(
    BOOL,
    CALLCONV_C,
    Leash_import,
    (void)
    );
TYPEDEF_FUNC(
    long,
    CALLCONV_C,
    Leash_importable,
    (void)
    );
TYPEDEF_FUNC(
    int,
    CALLCONV_C,
    Leash_renew,
    (void)
    );
TYPEDEF_FUNC(
    void,
    CALLCONV_C,
    Leash_reset_defaults,
    (void)
    );
/* They are not yet all here... */

#endif /* __LOADFUNCS_LEASH_H__ */
