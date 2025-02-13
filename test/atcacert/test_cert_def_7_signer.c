#include "atca_test.h"
#if !defined(DO_NOT_TEST_CERT) && ATCACERT_COMPCERT_EN

#include "atcacert/atcacert_def.h"

const uint8_t g_test_cert_template_7_signer[528] = {
0x30, 0x82, 0x02, 0x0C, 0x30, 0x82, 0x01, 0xB1, 0xA0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x04, 0x00,
0xBC, 0x61, 0x4E, 0x30, 0x0A, 0x06, 0x08, 0x2A, 0x86, 0x48, 0xCE, 0x3D, 0x04, 0x03, 0x02, 0x30,
0x61, 0x31, 0x0B, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x49, 0x4E, 0x31, 0x0B,
0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x08, 0x0C, 0x02, 0x54, 0x4E, 0x31, 0x0C, 0x30, 0x0A, 0x06,
0x03, 0x55, 0x04, 0x07, 0x0C, 0x03, 0x43, 0x48, 0x4E, 0x31, 0x0D, 0x30, 0x0B, 0x06, 0x03, 0x55,
0x04, 0x0A, 0x0C, 0x04, 0x4D, 0x43, 0x48, 0x50, 0x31, 0x0C, 0x30, 0x0A, 0x06, 0x03, 0x55, 0x04,
0x0B, 0x0C, 0x03, 0x53, 0x43, 0x47, 0x31, 0x1A, 0x30, 0x18, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0C,
0x11, 0x45, 0x78, 0x61, 0x6D, 0x70, 0x6C, 0x65, 0x20, 0x52, 0x6F, 0x6F, 0x74, 0x20, 0x46, 0x46,
0x46, 0x46, 0x30, 0x20, 0x17, 0x0D, 0x32, 0x34, 0x30, 0x34, 0x32, 0x35, 0x31, 0x30, 0x30, 0x37,
0x30, 0x39, 0x5A, 0x18, 0x0F, 0x32, 0x30, 0x37, 0x34, 0x30, 0x34, 0x31, 0x33, 0x31, 0x30, 0x30,
0x37, 0x30, 0x39, 0x5A, 0x30, 0x63, 0x31, 0x0B, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13,
0x02, 0x49, 0x4E, 0x31, 0x0B, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x08, 0x0C, 0x02, 0x54, 0x4E,
0x31, 0x0C, 0x30, 0x0A, 0x06, 0x03, 0x55, 0x04, 0x07, 0x0C, 0x03, 0x43, 0x48, 0x4E, 0x31, 0x0D,
0x30, 0x0B, 0x06, 0x03, 0x55, 0x04, 0x0A, 0x0C, 0x04, 0x4D, 0x43, 0x48, 0x50, 0x31, 0x0C, 0x30,
0x0A, 0x06, 0x03, 0x55, 0x04, 0x0B, 0x0C, 0x03, 0x53, 0x43, 0x47, 0x31, 0x1C, 0x30, 0x1A, 0x06,
0x03, 0x55, 0x04, 0x03, 0x0C, 0x13, 0x45, 0x78, 0x61, 0x6D, 0x70, 0x6C, 0x65, 0x20, 0x53, 0x69,
0x67, 0x6E, 0x65, 0x72, 0x20, 0x41, 0x44, 0x30, 0x34, 0x30, 0x59, 0x30, 0x13, 0x06, 0x07, 0x2A,
0x86, 0x48, 0xCE, 0x3D, 0x02, 0x01, 0x06, 0x08, 0x2A, 0x86, 0x48, 0xCE, 0x3D, 0x03, 0x01, 0x07,
0x03, 0x42, 0x00, 0x04, 0x44, 0xA2, 0x47, 0xFB, 0x1A, 0x3D, 0x5A, 0xA4, 0x0E, 0xC7, 0x10, 0x0C,
0x82, 0x6A, 0x4C, 0xA8, 0xC5, 0x99, 0xED, 0xB9, 0xC1, 0x69, 0x25, 0xE1, 0x21, 0xD0, 0xA7, 0x96,
0x42, 0x2C, 0x2E, 0x75, 0xF5, 0xE0, 0x96, 0xE3, 0x81, 0x36, 0x69, 0xF6, 0xB2, 0xCC, 0xD0, 0x73,
0x03, 0x1E, 0x5C, 0x0C, 0xFC, 0x2E, 0xDC, 0x31, 0x3D, 0xAA, 0x77, 0x8F, 0xEE, 0xEE, 0x97, 0x54,
0xE6, 0xAC, 0x48, 0x0A, 0xA3, 0x53, 0x30, 0x51, 0x30, 0x1D, 0x06, 0x03, 0x55, 0x1D, 0x0E, 0x04,
0x16, 0x04, 0x14, 0xF5, 0x78, 0x56, 0x6F, 0x58, 0xDE, 0x04, 0xF4, 0xF8, 0x06, 0xE6, 0x2E, 0x1F,
0xD0, 0xC9, 0xC0, 0xBC, 0xFB, 0x65, 0xAA, 0x30, 0x1F, 0x06, 0x03, 0x55, 0x1D, 0x23, 0x04, 0x18,
0x30, 0x16, 0x80, 0x14, 0x7F, 0x51, 0xE5, 0x29, 0xEA, 0x34, 0x74, 0x00, 0x20, 0x1E, 0x2C, 0x10,
0xB3, 0x80, 0xFC, 0xC7, 0x5C, 0x4E, 0xE4, 0xD2, 0x30, 0x0F, 0x06, 0x03, 0x55, 0x1D, 0x13, 0x01,
0x01, 0xFF, 0x04, 0x05, 0x30, 0x03, 0x01, 0x01, 0xFF, 0x30, 0x0A, 0x06, 0x08, 0x2A, 0x86, 0x48,
0xCE, 0x3D, 0x04, 0x03, 0x02, 0x03, 0x49, 0x00, 0x30, 0x46, 0x02, 0x21, 0x00, 0x8A, 0x76, 0x8E,
0x21, 0x4F, 0x85, 0xB1, 0x7C, 0x30, 0x72, 0x17, 0x04, 0x10, 0x84, 0x80, 0xB8, 0xA2, 0x77, 0x7E,
0x88, 0x7C, 0xBE, 0x21, 0xC4, 0xDE, 0x92, 0x37, 0x3F, 0x47, 0x1F, 0xE4, 0x3D, 0x02, 0x21, 0x00,
0xD4, 0x02, 0x89, 0xA0, 0xB0, 0xDC, 0x18, 0x01, 0x3E, 0x26, 0x82, 0xA5, 0x7E, 0x03, 0x42, 0xC0,
0xAE, 0x74, 0x08, 0x9D, 0x7A, 0x30, 0x46, 0x2D, 0x91, 0x9D, 0xC3, 0xB1, 0xCB, 0x64, 0x27, 0x62};


const atcacert_def_t g_test_cert_def_7_signer = {
    .type                = CERTTYPE_X509,
    .template_id         = 0,
    .chain_id            = 1,
    .private_key_slot    = 0,
    .sn_source           = SNSRC_PUB_KEY_HASH,
    .cert_sn_dev_loc     = {
        .zone            = DEVZONE_NONE,
        .slot            = 0,
        .is_genkey       = 0,
        .offset          = 0,
        .count           = 0
    },
    .issue_date_format   = DATEFMT_RFC5280_UTC,
    .expire_date_format  = DATEFMT_RFC5280_GEN,
    .tbs_cert_loc        = {
        .offset          = 4,
        .count           = 437
    },
    .expire_years        = 50,
    .public_key_dev_loc  = {
        .zone            = DEVZONE_DATA,
        .slot            = 14,
        .is_genkey       = 1,
        .offset          = 0,
        .count           = 64
    },
    .comp_cert_dev_loc   = {
        .zone            = DEVZONE_DATA,
        .slot            = 13,
        .is_genkey       = 0,
        .offset          = 0,
        .count           = 72
    },
    .std_cert_elements   = {
        {   // STDCERT_PUBLIC_KEY
            .offset      = 292,
            .count       = 64
        },
        {   // STDCERT_SIGNATURE
            .offset      = 453,
            .count       = 75
        },
        {   // STDCERT_ISSUE_DATE
            .offset      = 134,
            .count       = 13
        },
        {   // STDCERT_EXPIRE_DATE
            .offset      = 149,
            .count       = 15
        },
        {   // STDCERT_SIGNER_ID
            .offset      = 261,
            .count       = 4
        },
        {   // STDCERT_CERT_SN
            .offset      = 15,
            .count       = 4
        },
        {   // STDCERT_AUTH_KEY_ID
            .offset      = 404,
            .count       = 20
        },
        {   // STDCERT_SUBJ_KEY_ID
            .offset      = 371,
            .count       = 20
        },
    },
    .cert_elements       = NULL,
    .cert_elements_count = 0,
    .cert_template       = g_test_cert_template_7_signer,
    .cert_template_size  = sizeof(g_test_cert_template_7_signer),
    .ca_cert_def         = NULL
};

#endif
