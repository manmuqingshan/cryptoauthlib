#include "atca_test.h"
#if !defined(DO_NOT_TEST_CERT) && ATCACERT_COMPCERT_EN

#include "atcacert/atcacert_def.h"

const uint8_t g_csr_template_15_device[] = {
    0x30, 0x82, 0x01, 0x2D, 0x30, 0x81, 0xB4, 0x02, 0x01, 0x00, 0x30, 0x35, 0x31, 0x10, 0x30, 0x0E,
    0x06, 0x03, 0x55, 0x04, 0x0A, 0x0C, 0x07, 0x45, 0x78, 0x61, 0x6D, 0x70, 0x6C, 0x65, 0x31, 0x21,
    0x30, 0x1F, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0C, 0x18, 0x45, 0x78, 0x61, 0x6D, 0x70, 0x6C, 0x65,
    0x20, 0x44, 0x65, 0x76, 0x69, 0x63, 0x65, 0x20, 0x43, 0x65, 0x72, 0x74, 0x20, 0x58, 0x58, 0x58,
    0x58, 0x30, 0x76, 0x30, 0x10, 0x06, 0x07, 0x2A, 0x86, 0x48, 0xCE, 0x3D, 0x02, 0x01, 0x06, 0x05,
    0x2B, 0x81, 0x04, 0x00, 0x22, 0x03, 0x62, 0x00, 0x04, 0xE7, 0x5E, 0x16, 0x3B, 0x6B, 0xEF, 0x6B,
    0x87, 0x8B, 0x69, 0xAD, 0x67, 0x0B, 0x48, 0x8A, 0x40, 0x69, 0x48, 0x3D, 0x9A, 0xAD, 0x19, 0xAC,
    0xD8, 0x12, 0xC9, 0x6A, 0xF8, 0x6A, 0x36, 0xD5, 0x48, 0x00, 0xE3, 0x72, 0xAE, 0xC7, 0x19, 0x6E,
    0xD0, 0x31, 0x46, 0x35, 0xA5, 0xF7, 0x39, 0x98, 0x29, 0x32, 0x60, 0x91, 0x2E, 0x7D, 0x07, 0x16,
    0xC5, 0xEC, 0x23, 0x01, 0x5C, 0xDC, 0x6B, 0x73, 0x45, 0x16, 0x11, 0x0C, 0x27, 0xD6, 0x56, 0xBC,
    0x20, 0x73, 0x6D, 0x4C, 0x8D, 0x2A, 0xD8, 0x6A, 0xAF, 0x00, 0xEB, 0xF7, 0x7C, 0x84, 0xA5, 0x67,
    0x15, 0xED, 0x34, 0x28, 0xCC, 0x48, 0x17, 0xBB, 0x2B, 0xA0, 0x00, 0x30, 0x0A, 0x06, 0x08, 0x2A,
    0x86, 0x48, 0xCE, 0x3D, 0x04, 0x03, 0x02, 0x03, 0x68, 0x00, 0x30, 0x65, 0x02, 0x30, 0x33, 0xF2,
    0x8B, 0x4E, 0x93, 0xBE, 0xAB, 0x32, 0xBD, 0x0C, 0xD1, 0x3C, 0x15, 0x5A, 0x26, 0x0A, 0x6D, 0xF6,
    0x8C, 0x91, 0xB1, 0x7D, 0x50, 0x0E, 0xAD, 0x0D, 0xA1, 0x85, 0x4B, 0x54, 0x7C, 0xBC, 0x53, 0xD2,
    0x05, 0xDD, 0x17, 0x62, 0xED, 0xBA, 0x10, 0x16, 0x3F, 0x97, 0xB6, 0x4E, 0x99, 0x2F, 0x02, 0x31,
    0x00, 0xB2, 0x22, 0xB6, 0xFD, 0x69, 0xF0, 0x88, 0x29, 0x6E, 0x93, 0xD0, 0x7C, 0x98, 0x5A, 0xBD,
    0x7B, 0xCD, 0x3A, 0x2A, 0x90, 0x7B, 0xDC, 0x81, 0x84, 0xFF, 0xCE, 0x4A, 0xBE, 0x50, 0x2F, 0xC4,
    0xA0, 0x8C, 0xC5, 0x2C, 0x68, 0x4F, 0x47, 0xEC, 0x68, 0x1A, 0x21, 0x95, 0xE0, 0x27, 0x9A, 0xFD,
    0x7B
};

const atcacert_def_t g_csr_def_15_device = {
    .type                   = CERTTYPE_X509,
    .template_id            = 3,
    .chain_id               = 0,
    .std_sig_size           = ATCA_ECCP384_SIG_SIZE,
    .private_key_slot       = 0x8200,
    .sn_source              = SNSRC_PUB_KEY_HASH,
    .cert_sn_dev_loc        = {
        .zone               = DEVZONE_NONE,
        .slot               = 0,
        .is_genkey          = 0,
        .offset             = 0,
        .count              = 0
    },
    .issue_date_format      = DATEFMT_RFC5280_UTC,
    .expire_date_format     = DATEFMT_RFC5280_UTC,
    .tbs_cert_loc           = {
        .offset             = 4,
        .count              = 183
    },
    .expire_years           = 0,
    .public_key_dev_loc     = {
        .zone               = DEVZONE_NONE,
        .slot               = 0x8200,
        .is_genkey          = 1,
        .offset             = 0,
        .count              = ATCA_ECCP384_PUBKEY_SIZE
    },
    .comp_cert_dev_loc      = {
        .zone               = DEVZONE_NONE,
        .slot               = 0,
        .is_genkey          = 0,
        .offset             = 0,
        .count              = 0
    },
    .std_cert_elements      = {
        {   // STDCERT_PUBLIC_KEY
            .offset         = 89,
            .count          = 96
        },
        {   // STDCERT_SIGNATURE
            .offset         = 199,
            .count          = 106
        },
        {   // STDCERT_ISSUE_DATE
            .offset         = 0,
            .count          = 0
        },
        {   // STDCERT_EXPIRE_DATE
            .offset         = 0,
            .count          = 0
        },
        {   // STDCERT_SIGNER_ID
            .offset         = 0,
            .count          = 0
        },
        {   // STDCERT_CERT_SN
            .offset         = 0,
            .count          = 0
        },
        {   // STDCERT_AUTH_KEY_ID
            .offset         = 0,
            .count          = 0
        },
        {   // STDCERT_SUBJ_KEY_ID
            .offset         = 0,
            .count          = 0
        }
    },
    .cert_elements          = NULL,
    .cert_elements_count    = 0,
    .cert_template          = g_csr_template_15_device,
    .cert_template_size     = sizeof(g_csr_template_15_device)
};
#endif
