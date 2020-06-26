/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Driver Header File for Routing Fabrics in AXIOM Beta Main Board
 *
 * Copyright (C) 2020 Swaraj Hota <swarajhota353@gmail.com>
 */

#ifndef RFDEV_H
#define RFDEV_H

/* Each PIC operation corresponds to a dummy client */
enum i2c_client_write_opr {
	PIC_WR_BUF_DATA = 0,
	PIC_WR_DEFAULT,
	PIC_WR_TMS_OUT,
	PIC_WR_TMS_OUT_LEN,
	PIC_WR_TDI_TDO,
	PIC_WR_TDI_TDO_LEN,
	PIC_WR_TDI_OUT,
	PIC_WR_TDI_OUT_LEN,
	PIC_WR_TDI_TDO_CONT,
	PIC_WR_TDI_TDO_LEN_CONT,
	PIC_WR_TDI_OUT_CONT,
	PIC_WR_TDI_OUT_LEN_CONT,
	PIC_WR_FEAT_UPDATE = 16,
};

enum i2c_client_read_opr {
	PIC_RD_BUF_DATA = 0,
	PIC_RD_V = 5,
	PIC_RD_TDO_IN,
	PIC_RD_TDO_IN_LEN,
	PIC_RD_TDO_IN_CONT = 10,
	PIC_RD_TDO_IN_LEN_CONT,
	PIC_RD_F = 16,
};

enum rf_jtag_instr {
	RF_ISC_DATA_SHIFT          = 0x0A,
	RF_ISC_ERASE               = 0x0E,
	RF_ISC_DISCHARGE           = 0x14,
	RF_EXTEST                  = 0x15,
	RF_HIGHZ                   = 0x18,
	RF_UIDCODE_PUB             = 0x19,
	RF_PRELOAD                 = 0x1C,
	RF_SAMPLE                  = 0x1C,
	RF_ISC_ERASE_DONE          = 0x24,
	RF_ISC_DISABLE             = 0x26,
	RF_ISC_NOOP                = 0x30,
	RF_LSC_RESET_CRC           = 0x3B,
	RF_LSC_READ_STATUS         = 0x3C,
	RF_ISC_ADDRESS_SHIFT       = 0x42,
	RF_LSC_INIT_ADDRESS        = 0x46,
	RF_LSC_INIT_ADDR_UFM       = 0x47,
	RF_ISC_PROGRAM_DONE        = 0x5E,
	RF_LSC_READ_CRC            = 0x60,
	RF_ISC_PROGRAM             = 0x67,
	RF_LSC_PROG_INCR_NV        = 0x70,
	RF_LSC_READ_INCR_NV        = 0x73,
	RF_LSC_ENABLE_X            = 0x74,
	RF_CLAMP                   = 0x78,
	RF_LSC_REFRESH             = 0x79,
	RF_LSC_BITSTREAM_BURST     = 0x7A,
	RF_LSC_DEVICE_CTRL         = 0x7D,
	RF_ISC_READ                = 0x80,
	RF_LSC_PROG_INCR_RTI       = 0x82,
	RF_LSC_WRITE_ADDRESS       = 0xB4,
	RF_LSC_PROG_INCR_ENC       = 0xB6,
	RF_LSC_PROG_INCR_CMP       = 0xB8,
	RF_LSC_PROG_INCR_CNE       = 0xBA,
	RF_LSC_SHIFT_PASSWORD      = 0xBC,
	RF_USERCODE                = 0xC0,
	RF_ISC_PROGRAM_USERCODE    = 0xC2,
	RF_ISC_ENABLE              = 0xC6,
	RF_LSC_PROG_TAG            = 0xC9,
	RF_LSC_READ_TAG            = 0xCA,
	RF_LSC_ERASE_TAG           = 0xCB,
	RF_ISC_PROGRAM_SECURITY    = 0xCE,
	RF_LSC_PROGRAM_SECPLUS     = 0xCF,
	RF_IDCODE                  = 0xE0,
	RF_LSC_PROG_FEATURE        = 0xE4,
	RF_LSC_READ_FEATURE        = 0xE7,
	RF_LSC_CHECK_BUSY          = 0xF0,
	RF_LSC_PROG_PASSWORD       = 0xF1,
	RF_LSC_READ_PASSWORD       = 0xF2,
	RF_LSC_PROG_CIPHER_KEY     = 0xF3,
	RF_LSC_READ_CIPHER_KEY     = 0xF4,
	RF_LSC_PROG_FEABITS        = 0xF8,
	RF_LSC_PROG_OTP            = 0xF9,
	RF_LSC_READ_OTP            = 0xFA,
	RF_LSC_READ_FEABITS        = 0xFB,
	RF_BYPASS                  = 0xFF,
};

#endif