/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __NT36525B_PARAM_H__
#define __NT36525B_PARAM_H__

#include <linux/types.h>
#include <linux/kernel.h>

#define LCD_TYPE_VENDOR		"CSO"

#define EXTEND_BRIGHTNESS	306
#define UI_MAX_BRIGHTNESS	255
#define UI_DEFAULT_BRIGHTNESS	128

#define LDI_REG_BRIGHTNESS	0x51
#define LDI_REG_ID		0xDA
#define LDI_LEN_BRIGHTNESS	((u16)ARRAY_SIZE(SEQ_NT36525B_BRIGHTNESS))

/* len is read length */
#define LDI_LEN_ID		3

#define TYPE_WRITE		I2C_SMBUS_WRITE
#define TYPE_DELAY		U8_MAX

static u8 LM36274_INIT[] = {
	TYPE_WRITE, 0x0C, 0x2C,
	TYPE_WRITE, 0x0D, 0x26,
	TYPE_WRITE, 0x0E, 0x26,
	TYPE_WRITE, 0x09, 0xBE,
	TYPE_WRITE, 0x02, 0x49,
	TYPE_WRITE, 0x03, 0x0D,
	TYPE_WRITE, 0x11, 0x74,
	TYPE_WRITE, 0x04, 0x05,
	TYPE_WRITE, 0x05, 0xCC,
	TYPE_WRITE, 0x10, 0x67,
	TYPE_WRITE, 0x08, 0x13,
};

static u8 LM36274_EXIT[] = {
	TYPE_WRITE, 0x09, 0x18,
	TYPE_WRITE, 0x08, 0x00,
};

struct lcd_seq_info {
	unsigned char	*cmd;
	unsigned int	len;
	unsigned int	sleep;
};

static unsigned char SEQ_NT36525B_BRIGHTNESS[] = {
	0x51,
	0x00,
};

static u8 SEQ_SLEEP_IN[] = { 0x10 };
static u8 SEQ_DISPLAY_OFF[] = { 0x28 };
static u8 SEQ_DISPLAY_ON[] = { 0x29 };
static u8 SEQ_SLEEP_OUT[] = { 0x11 };

static u8 SEQ_NT36525B_FF_0[] = {
	0xFF, 0x20,
};
static u8 SEQ_NT36525B_FB_0[] = {
	0xFB, 0x01,
};
static u8 SEQ_NT36525B_00_0[] = {
	0x00, 0x01,
};
static u8 SEQ_NT36525B_01[] = {
	0x01, 0x55,
};
static u8 SEQ_NT36525B_03[] = {
	0x03, 0x55,
};
static u8 SEQ_NT36525B_05[] = {
	0x05, 0xA9,
};
static u8 SEQ_NT36525B_07_0[] = {
	0x07, 0x73,
};
static u8 SEQ_NT36525B_08_0[] = {
	0x08, 0xC1,
};
static u8 SEQ_NT36525B_0E[] = {
	0x0E, 0x91,
};
static u8 SEQ_NT36525B_0F_0[] = {
	0x0F, 0x5F,
};
static u8 SEQ_NT36525B_1F_0[] = {
	0x1F, 0x00,
};
static u8 SEQ_NT36525B_69[] = {
	0x69, 0xA9,
};
static u8 SEQ_NT36525B_94_0[] = {
	0x94, 0x00,
};
static u8 SEQ_NT36525B_95[] = {
	0x95, 0xEB,
};
static u8 SEQ_NT36525B_96[] = {
	0x96, 0xEB,
};
static u8 SEQ_NT36525B_FF_1[] = {
	0xFF, 0x24,
};
static u8 SEQ_NT36525B_FB_1[] = {
	0xFB, 0x01,
};
static u8 SEQ_NT36525B_00_1[] = {
	0x00, 0x00,
};
static u8 SEQ_NT36525B_04[] = {
	0x04, 0x21,
};
static u8 SEQ_NT36525B_06[] = {
	0x06, 0x22,
};
static u8 SEQ_NT36525B_07_1[] = {
	0x07, 0x20,
};
static u8 SEQ_NT36525B_08_1[] = {
	0x08, 0x1D,
};
static u8 SEQ_NT36525B_0A_0[] = {
	0x0A, 0x0C,
};
static u8 SEQ_NT36525B_0B_0[] = {
	0x0B, 0x0D,
};
static u8 SEQ_NT36525B_0C_0[] = {
	0x0C, 0x0E,
};
static u8 SEQ_NT36525B_0D[] = {
	0x0D, 0x0F,
};
static u8 SEQ_NT36525B_0F_1[] = {
	0x0F, 0x04,
};
static u8 SEQ_NT36525B_10[] = {
	0x10, 0x05,
};
static u8 SEQ_NT36525B_12_0[] = {
	0x12, 0x1E,
};
static u8 SEQ_NT36525B_13_0[] = {
	0x13, 0x1E,
};
static u8 SEQ_NT36525B_14[] = {
	0x14, 0x1E,
};
static u8 SEQ_NT36525B_16_0[] = {
	0x16, 0x00,
};
static u8 SEQ_NT36525B_1A[] = {
	0x1A, 0x21,
};
static u8 SEQ_NT36525B_1C[] = {
	0x1C, 0x22,
};
static u8 SEQ_NT36525B_1D[] = {
	0x1D, 0x20,
};
static u8 SEQ_NT36525B_1E[] = {
	0x1E, 0x1D,
};
static u8 SEQ_NT36525B_20[] = {
	0x20, 0x0C,
};
static u8 SEQ_NT36525B_21[] = {
	0x21, 0x0D,
};
static u8 SEQ_NT36525B_22[] = {
	0x22, 0x0E,
};
static u8 SEQ_NT36525B_23[] = {
	0x23, 0x0F,
};
static u8 SEQ_NT36525B_25[] = {
	0x25, 0x04,
};
static u8 SEQ_NT36525B_26_0[] = {
	0x26, 0x05,
};
static u8 SEQ_NT36525B_28[] = {
	0x28, 0x1E,
};
static u8 SEQ_NT36525B_29_0[] = {
	0x29, 0x1E,
};
static u8 SEQ_NT36525B_2A[] = {
	0x2A, 0x1E,
};
static u8 SEQ_NT36525B_2F[] = {
	0x2F, 0x09,
};
static u8 SEQ_NT36525B_30[] = {
	0x30, 0x07,
};
static u8 SEQ_NT36525B_33[] = {
	0x33, 0x07,
};
static u8 SEQ_NT36525B_34[] = {
	0x34, 0x09,
};
static u8 SEQ_NT36525B_37[] = {
	0x37, 0x33,
};
static u8 SEQ_NT36525B_39[] = {
	0x39, 0x00,
};
static u8 SEQ_NT36525B_3A[] = {
	0x3A, 0x05,
};
static u8 SEQ_NT36525B_3B[] = {
	0x3B, 0x94,
};
static u8 SEQ_NT36525B_3D[] = {
	0x3D, 0x92,
};
static u8 SEQ_NT36525B_4D[] = {
	0x4D, 0x12,
};
static u8 SEQ_NT36525B_4E[] = {
	0x4E, 0x34,
};
static u8 SEQ_NT36525B_51[] = {
	0x51, 0x43,
};
static u8 SEQ_NT36525B_52[] = {
	0x52, 0x21,
};
static u8 SEQ_NT36525B_55[] = {
	0x55, 0x86,
};
static u8 SEQ_NT36525B_56[] = {
	0x56, 0x34,
};
static u8 SEQ_NT36525B_5A_0[] = {
	0x5A, 0x05,
};
static u8 SEQ_NT36525B_5B_0[] = {
	0x5B, 0x94,
};
static u8 SEQ_NT36525B_5C_0[] ={
	0x5C, 0xC0,
};
static u8 SEQ_NT36525B_5D_0[] = {
	0x5D, 0x06,
};
static u8 SEQ_NT36525B_5E_0[] = {
	0x5E, 0x0C,
};
static u8 SEQ_NT36525B_5F_0[] = {
	0x5F, 0x00,
};
static u8 SEQ_NT36525B_60_0[] = {
	0x60, 0x80,
};
static u8 SEQ_NT36525B_61_0[] = {
	0x61, 0x72,
};
static u8 SEQ_NT36525B_64[] = {
	0x64, 0x11,
};
static u8 SEQ_NT36525B_82[] = {
	0x82, 0x0A,
};
static u8 SEQ_NT36525B_83[] = {
	0x83, 0x0C,
};
static u8 SEQ_NT36525B_85[] = {
	0x85, 0x00,
};
static u8 SEQ_NT36525B_86[] = {
	0x86, 0x51,
};
static u8 SEQ_NT36525B_92[] = {
	0x92, 0xBA,
};
static u8 SEQ_NT36525B_93[] = {
	0x93, 0x12,
};
static u8 SEQ_NT36525B_94_1[] = {
	0x94, 0x0A,
};
static u8 SEQ_NT36525B_AB[] = {
	0xAB, 0x00,
};
static u8 SEQ_NT36525B_AC[] = {
	0xAC, 0x00,
};
static u8 SEQ_NT36525B_AD[] = {
	0xAD, 0x00,
};
static u8 SEQ_NT36525B_AF[] = {
	0xAF, 0x04,
};
static u8 SEQ_NT36525B_B0_0[] = {
	0xB0, 0x05,
};
static u8 SEQ_NT36525B_B1_0[] = {
	0xB1, 0xB5,
};
static u8 SEQ_NT36525B_FF_2[] = {
	0xFF, 0x25,
};
static u8 SEQ_NT36525B_FB_2[] = {
	0xFB, 0x01,
};
static u8 SEQ_NT36525B_0A_1[] = {
	0x0A, 0x82,
};
static u8 SEQ_NT36525B_0B_1[] = {
	0x0B, 0x50,
};
static u8 SEQ_NT36525B_0C_1[] = {
	0x0C, 0x01,
};
static u8 SEQ_NT36525B_17[] = {
	0x17, 0x82,
};
static u8 SEQ_NT36525B_18[] = {
	0x18, 0x06,
};
static u8 SEQ_NT36525B_19[] = {
	0x19, 0x0F,
};
static u8 SEQ_NT36525B_58[] = {
	0x58, 0x00,
};
static u8 SEQ_NT36525B_59[] = {
	0x59, 0x00,
};
static u8 SEQ_NT36525B_5A_1[] = {
	0x5A, 0x40,
};
static u8 SEQ_NT36525B_5B_1[] = {
	0x5B, 0x80,
};
static u8 SEQ_NT36525B_5C_1[] = {
	0x5C, 0x00,
};
static u8 SEQ_NT36525B_5D_1[] = {
	0x5D, 0x05,
};
static u8 SEQ_NT36525B_5E_1[] = {
	0x5E, 0x94,
};
static u8 SEQ_NT36525B_5F_1[] = {
	0x5F, 0x05,
};
static u8 SEQ_NT36525B_60_1[] = {
	0x60, 0x94,
};
static u8 SEQ_NT36525B_61_1[] = {
	0x61, 0x05,
};
static u8 SEQ_NT36525B_62[] = {
	0x62, 0x94,
};
static u8 SEQ_NT36525B_65[] = {
	0x65, 0x05,
};
static u8 SEQ_NT36525B_66[] = {
	0x66, 0xB5,
};
static u8 SEQ_NT36525B_C0_0[] = {
	0xC0, 0x03,
};
static u8 SEQ_NT36525B_CA[] = {
	0xCA, 0x1C,
};
static u8 SEQ_NT36525B_CC[] = {
	0xCC, 0x1C,
};
static u8 SEQ_NT36525B_D3[] = {
	0xD3, 0x11,
};
static u8 SEQ_NT36525B_D4[] = {
	0xD4, 0xC8,
};
static u8 SEQ_NT36525B_D5[] = {
	0xD5, 0x11,
};
static u8 SEQ_NT36525B_D6[] = {
	0xD6, 0x1C,
};
static u8 SEQ_NT36525B_D7[] = {
	0xD7, 0x11,
};
static u8 SEQ_NT36525B_FF_3[] = {
	0xFF, 0x26,
};
static u8 SEQ_NT36525B_FB_3[] = {
	0xFB, 0x01,
};
static u8 SEQ_NT36525B_00_2[] = {
	0x00, 0xA0,
};
static u8 SEQ_NT36525B_FF_4[] = {
	0xFF, 0x27,
};
static u8 SEQ_NT36525B_FB_4[] = {
	0xFB, 0x01,
};
static u8 SEQ_NT36525B_13_1[] = {
	0x13, 0x00,
};
static u8 SEQ_NT36525B_15_0[] = {
	0x15, 0xB4,
};
static u8 SEQ_NT36525B_1F_1[] = {
	0x1F, 0x55,
};
static u8 SEQ_NT36525B_26_1[] = {
	0x26, 0x0F,
};
static u8 SEQ_NT36525B_C0_1[] = {
	0xC0, 0x18,
};
static u8 SEQ_NT36525B_C1[] = {
	0xC1, 0xE0,
};
static u8 SEQ_NT36525B_C2[] = {
	0xC2, 0x00,
};
static u8 SEQ_NT36525B_C3[] = {
	0xC3, 0x00,
};
static u8 SEQ_NT36525B_C4[] = {
	0xC4, 0xE0,
};
static u8 SEQ_NT36525B_C5[] = {
	0xC5, 0x00,
};
static u8 SEQ_NT36525B_C6[] = {
	0xC6, 0x00,
};
static u8 SEQ_NT36525B_C7[] = {
	0xC7, 0x03,
};
static u8 SEQ_NT36525B_FF_5[] = {
	0xFF, 0x23,
};
static u8 SEQ_NT36525B_FB_5[] = {
	0xFB, 0x01,
};
static u8 SEQ_NT36525B_07_2[] = {
	0x07, 0x20,
};
static u8 SEQ_NT36525B_08_2[] = {
	0x08, 0x10,
};
static u8 SEQ_NT36525B_12_1[] = {
	0x12, 0xA6,
};
static u8 SEQ_NT36525B_15_1[] = {
	0x15, 0xFC,
};
static u8 SEQ_NT36525B_16_1[] = {
	0x16, 0x0B,
};
static u8 SEQ_NT36525B_FF_6[] = {
	0xFF, 0x20,
};
static u8 SEQ_NT36525B_FB_6[] = {
	0xFB, 0x01,
};
static u8 SEQ_NT36525B_B0_1[] = {
	0xB0, 0x00, 0x08, 0x00, 0x18, 0x00, 0x34, 0x00, 0x4C, 0x00, 0x61, 0x00, 0x74, 0x00, 0x86, 0x00, 0x96
};
static u8 SEQ_NT36525B_B1_1[] = {
	0xB1, 0x00, 0xA5, 0x00, 0xDB, 0x01, 0x02, 0x01, 0x43, 0x01, 0x71, 0x01, 0xBD, 0x01, 0xF7, 0x01, 0xFA,
};
static u8 SEQ_NT36525B_B2_0[] = {
	0xB2, 0x02, 0x34, 0x02, 0x6F, 0x02, 0x98, 0x02, 0xCC, 0x02, 0xF1, 0x03, 0x1D, 0x03, 0x2D, 0x03, 0x3B,
};
static u8 SEQ_NT36525B_B3_0[] = {
	0xB3, 0x03, 0x4D, 0x03, 0x60, 0x03, 0x7A, 0x03, 0x94, 0x03, 0xA6, 0x03, 0xA7,
};
static u8 SEQ_NT36525B_B4_0[] = {
	0xB4, 0x00, 0x08, 0x00, 0x18, 0x00, 0x34, 0x00, 0x4C, 0x00, 0x61, 0x00, 0x74, 0x00, 0x86, 0x00, 0x96,
};
static u8 SEQ_NT36525B_B5_0[] = {
	0xB5, 0x00, 0xA5, 0x00, 0xDB, 0x01, 0x02, 0x01, 0x43, 0x01, 0x71, 0x01, 0xBD, 0x01, 0xF7, 0x01, 0xFA,
};
static u8 SEQ_NT36525B_B6_0[] = {
	0xB6, 0x02, 0x34, 0x02, 0x6F, 0x02, 0x98, 0x02, 0xCC, 0x02, 0xF1, 0x03, 0x1D, 0x03, 0x2D, 0x03, 0x3B,
};
static u8 SEQ_NT36525B_B7_0[] = {
	0xB7, 0x03, 0x4D, 0x03, 0x60, 0x03, 0x7A, 0x03, 0x94, 0x03, 0xA6, 0x03, 0xA7,
};
static u8 SEQ_NT36525B_B8_0[] = {
	0xB8, 0x00, 0x08, 0x00, 0x18, 0x00, 0x34, 0x00, 0x4C, 0x00, 0x61, 0x00, 0x74, 0x00, 0x86, 0x00, 0x96,
};
static u8 SEQ_NT36525B_B9_0[] = {
	0xB9, 0x00, 0xA5, 0x00, 0xDB, 0x01, 0x02, 0x01, 0x43, 0x01, 0x71, 0x01, 0xBD, 0x01, 0xF7, 0x01, 0xFA,
};
static u8 SEQ_NT36525B_BA_0[] = {
	0xBA, 0x02, 0x34, 0x02, 0x6F, 0x02, 0x98, 0x02, 0xCC, 0x02, 0xF1, 0x03, 0x1D, 0x03, 0x2D, 0x03, 0x3B,
};
static u8 SEQ_NT36525B_BB_0[] = {
	0xBB, 0x03, 0x4D, 0x03, 0x60, 0x03, 0x7A, 0x03, 0x94, 0x03, 0xA6, 0x03, 0xA7,
};
static u8 SEQ_NT36525B_FF_7[] = {
	0xFF, 0x21,
};
static u8 SEQ_NT36525B_FB_7[] = {
	0xFB, 0x01,
};
static u8 SEQ_NT36525B_B0_2[] = {
	0xB0, 0x00, 0x00, 0x00, 0x10, 0x00, 0x2C, 0x00, 0x44, 0x00, 0x59, 0x00, 0x6C, 0x00, 0x7E, 0x00, 0x8E,
};
static u8 SEQ_NT36525B_B1_2[] = {
	0xB1, 0x00, 0x9D, 0x00, 0xD3, 0x00, 0xFA, 0x01, 0x3B, 0x01, 0x69, 0x01, 0xB5, 0x01, 0xEF, 0x01, 0xF2,
};
static u8 SEQ_NT36525B_B2_1[] = {
	0xB2, 0x02, 0x2C, 0x02, 0x79, 0x02, 0xAA, 0x02, 0xE6, 0x03, 0x0F, 0x03, 0x3F, 0x03, 0x4F, 0x03, 0x5F,
};
static u8 SEQ_NT36525B_B3_1[] = {
	0xB3, 0x03, 0x71, 0x03, 0x86, 0x03, 0xA0, 0x03, 0xBC, 0x03, 0xCE, 0x03, 0xD9,
};
static u8 SEQ_NT36525B_B4_1[] = {
	0xB4, 0x00, 0x00, 0x00, 0x10, 0x00, 0x2C, 0x00, 0x44, 0x00, 0x59, 0x00, 0x6C, 0x00, 0x7E, 0x00, 0x8E,
};
static u8 SEQ_NT36525B_B5_1[] = {
	0xB5, 0x00, 0x9D, 0x00, 0xD3, 0x00, 0xFA, 0x01, 0x3B, 0x01, 0x69, 0x01, 0xB5, 0x01, 0xEF, 0x01, 0xF2,
};
static u8 SEQ_NT36525B_B6_1[] = {
	0xB6, 0x02, 0x2C, 0x02, 0x79, 0x02, 0xAA, 0x02, 0xE6, 0x03, 0x0F, 0x03, 0x3F, 0x03, 0x4F, 0x03, 0x5F,
};
static u8 SEQ_NT36525B_B7_1[] = {
	0xB7, 0x03, 0x71, 0x03, 0x86, 0x03, 0xA0, 0x03, 0xBC, 0x03, 0xCE, 0x03, 0xD9,
};
static u8 SEQ_NT36525B_B8_1[] = {
	0xB8, 0x00, 0x00, 0x00, 0x10, 0x00, 0x2C, 0x00, 0x44, 0x00, 0x59, 0x00, 0x6C, 0x00, 0x7E, 0x00, 0x8E,
};
static u8 SEQ_NT36525B_B9_1[] = {
	0xB9, 0x00, 0x9D, 0x00, 0xD3, 0x00, 0xFA, 0x01, 0x3B, 0x01, 0x69, 0x01, 0xB5, 0x01, 0xEF, 0x01, 0xF2,
};
static u8 SEQ_NT36525B_BA_1[] = {
	0xBA, 0x02, 0x2C, 0x02, 0x79, 0x02, 0xAA, 0x02, 0xE6, 0x03, 0x0F, 0x03, 0x3F, 0x03, 0x4F, 0x03, 0x5F,
};
static u8 SEQ_NT36525B_BB_1[] = {
	0xBB, 0x03, 0x71, 0x03, 0x86, 0x03, 0xA0, 0x03, 0xBC, 0x03, 0xCE, 0x03, 0xD9,
};
static u8 SEQ_NT36525B_FF_8[] = {
	0xFF, 0x23,
};
static u8 SEQ_NT36525B_FB_8[] = {
	0xFB, 0x01,
};
static u8 SEQ_NT36525B_07_3[] = {
	0x07, 0x20,
};
static u8 SEQ_NT36525B_08_3[] = {
	0x08, 0x10,
};
static u8 SEQ_NT36525B_FF_9[] = {
	0xFF, 0x10,
};
static u8 SEQ_NT36525B_FB_9[] = {
	0xFB, 0x01,
};
static u8 SEQ_NT36525B_BA_2[] = {
	0xBA, 0x03,
};
static u8 SEQ_BRIGHTNESS_MODE[] = {
	0x53,
	0x24,
};
static u8 SEQ_CABC_ON[] = {
	0x55,
	0x00,
};

static struct lcd_seq_info LCD_SEQ_INIT_1[] = {
	{SEQ_NT36525B_FF_0, ARRAY_SIZE(SEQ_NT36525B_FF_0), 1*1000, },
	//msleep(1);
	{SEQ_NT36525B_FB_0, ARRAY_SIZE(SEQ_NT36525B_FB_0), 0, },
	{SEQ_NT36525B_00_0, ARRAY_SIZE(SEQ_NT36525B_00_0), 0, },
	{SEQ_NT36525B_01, ARRAY_SIZE(SEQ_NT36525B_01), 0, },
	{SEQ_NT36525B_03, ARRAY_SIZE(SEQ_NT36525B_03), 0, },
	{SEQ_NT36525B_05, ARRAY_SIZE(SEQ_NT36525B_05), 0, },
	{SEQ_NT36525B_07_0, ARRAY_SIZE(SEQ_NT36525B_07_0), 0, },
	{SEQ_NT36525B_08_0, ARRAY_SIZE(SEQ_NT36525B_08_0), 0, },
	{SEQ_NT36525B_0E, ARRAY_SIZE(SEQ_NT36525B_0E), 0, },
	{SEQ_NT36525B_0F_0, ARRAY_SIZE(SEQ_NT36525B_0F_0), 0, },
	{SEQ_NT36525B_1F_0, ARRAY_SIZE(SEQ_NT36525B_1F_0), 0, },
	{SEQ_NT36525B_69, ARRAY_SIZE(SEQ_NT36525B_69), 0, },
	{SEQ_NT36525B_94_0, ARRAY_SIZE(SEQ_NT36525B_94_0), 0, },
	{SEQ_NT36525B_95, ARRAY_SIZE(SEQ_NT36525B_95), 0, },
	{SEQ_NT36525B_96, ARRAY_SIZE(SEQ_NT36525B_96), 0, },
	{SEQ_NT36525B_FF_1, ARRAY_SIZE(SEQ_NT36525B_FF_1), 1*1000, },
	//msleep(1);
	{SEQ_NT36525B_FB_1, ARRAY_SIZE(SEQ_NT36525B_FB_1), 0, },
	{SEQ_NT36525B_00_1, ARRAY_SIZE(SEQ_NT36525B_00_1), 0, },
	{SEQ_NT36525B_04, ARRAY_SIZE(SEQ_NT36525B_04), 0, },
	{SEQ_NT36525B_06, ARRAY_SIZE(SEQ_NT36525B_06), 0, },
	{SEQ_NT36525B_07_1, ARRAY_SIZE(SEQ_NT36525B_07_1), 0, },
	{SEQ_NT36525B_08_1, ARRAY_SIZE(SEQ_NT36525B_08_1), 0, },
	{SEQ_NT36525B_0A_0, ARRAY_SIZE(SEQ_NT36525B_0A_0), 0, },
	{SEQ_NT36525B_0B_0, ARRAY_SIZE(SEQ_NT36525B_0B_0), 0, },
	{SEQ_NT36525B_0C_0, ARRAY_SIZE(SEQ_NT36525B_0C_0), 0, },
	{SEQ_NT36525B_0D, ARRAY_SIZE(SEQ_NT36525B_0D), 0, },
	{SEQ_NT36525B_0F_1, ARRAY_SIZE(SEQ_NT36525B_0F_1), 0, },
	{SEQ_NT36525B_10, ARRAY_SIZE(SEQ_NT36525B_10), 0, },
	{SEQ_NT36525B_12_0, ARRAY_SIZE(SEQ_NT36525B_12_0), 0, },
	{SEQ_NT36525B_13_0, ARRAY_SIZE(SEQ_NT36525B_13_0), 0, },
	{SEQ_NT36525B_14, ARRAY_SIZE(SEQ_NT36525B_14), 0, },
	{SEQ_NT36525B_16_0, ARRAY_SIZE(SEQ_NT36525B_16_0), 0, },
	{SEQ_NT36525B_1A, ARRAY_SIZE(SEQ_NT36525B_1A), 0, },
	{SEQ_NT36525B_1C, ARRAY_SIZE(SEQ_NT36525B_1C), 0, },
	{SEQ_NT36525B_1D, ARRAY_SIZE(SEQ_NT36525B_1D), 0, },
	{SEQ_NT36525B_1E, ARRAY_SIZE(SEQ_NT36525B_1E), 0, },
	{SEQ_NT36525B_20, ARRAY_SIZE(SEQ_NT36525B_20), 0, },
	{SEQ_NT36525B_21, ARRAY_SIZE(SEQ_NT36525B_21), 0, },
	{SEQ_NT36525B_22, ARRAY_SIZE(SEQ_NT36525B_22), 0, },
	{SEQ_NT36525B_23, ARRAY_SIZE(SEQ_NT36525B_23), 0, },
	{SEQ_NT36525B_25, ARRAY_SIZE(SEQ_NT36525B_25), 0, },
	{SEQ_NT36525B_26_0, ARRAY_SIZE(SEQ_NT36525B_26_0), 0, },
	{SEQ_NT36525B_28, ARRAY_SIZE(SEQ_NT36525B_28), 0, },
	{SEQ_NT36525B_29_0, ARRAY_SIZE(SEQ_NT36525B_29_0), 0, },
	{SEQ_NT36525B_2A, ARRAY_SIZE(SEQ_NT36525B_2A), 0, },
	{SEQ_NT36525B_2F, ARRAY_SIZE(SEQ_NT36525B_2F), 0, },
	{SEQ_NT36525B_30, ARRAY_SIZE(SEQ_NT36525B_30), 0, },
	{SEQ_NT36525B_33, ARRAY_SIZE(SEQ_NT36525B_33), 0, },
	{SEQ_NT36525B_34, ARRAY_SIZE(SEQ_NT36525B_34), 0, },
	{SEQ_NT36525B_37, ARRAY_SIZE(SEQ_NT36525B_37), 0, },
	{SEQ_NT36525B_39, ARRAY_SIZE(SEQ_NT36525B_39), 0, },
	{SEQ_NT36525B_3A, ARRAY_SIZE(SEQ_NT36525B_3A), 0, },
	{SEQ_NT36525B_3B, ARRAY_SIZE(SEQ_NT36525B_3B), 0, },
	{SEQ_NT36525B_3D, ARRAY_SIZE(SEQ_NT36525B_3D), 0, },
	{SEQ_NT36525B_4D, ARRAY_SIZE(SEQ_NT36525B_4D), 0, },
	{SEQ_NT36525B_4E, ARRAY_SIZE(SEQ_NT36525B_4E), 0, },
	{SEQ_NT36525B_51, ARRAY_SIZE(SEQ_NT36525B_51), 0, },
	{SEQ_NT36525B_52, ARRAY_SIZE(SEQ_NT36525B_52), 0, },
	{SEQ_NT36525B_55, ARRAY_SIZE(SEQ_NT36525B_55), 0, },
	{SEQ_NT36525B_56, ARRAY_SIZE(SEQ_NT36525B_56), 0, },
	{SEQ_NT36525B_5A_0, ARRAY_SIZE(SEQ_NT36525B_5A_0), 0, },
	{SEQ_NT36525B_5B_0, ARRAY_SIZE(SEQ_NT36525B_5B_0), 0, },
	{SEQ_NT36525B_5C_0, ARRAY_SIZE(SEQ_NT36525B_5C_0), 0, },
	{SEQ_NT36525B_5D_0, ARRAY_SIZE(SEQ_NT36525B_5D_0), 0, },
	{SEQ_NT36525B_5E_0, ARRAY_SIZE(SEQ_NT36525B_5E_0), 0, },
	{SEQ_NT36525B_5F_0, ARRAY_SIZE(SEQ_NT36525B_5F_0), 0, },
	{SEQ_NT36525B_60_0, ARRAY_SIZE(SEQ_NT36525B_60_0), 0, },
	{SEQ_NT36525B_61_0, ARRAY_SIZE(SEQ_NT36525B_61_0), 0, },
	{SEQ_NT36525B_64, ARRAY_SIZE(SEQ_NT36525B_64), 0, },
	{SEQ_NT36525B_82, ARRAY_SIZE(SEQ_NT36525B_82), 0, },
	{SEQ_NT36525B_83, ARRAY_SIZE(SEQ_NT36525B_83), 0, },
	{SEQ_NT36525B_85, ARRAY_SIZE(SEQ_NT36525B_85), 0, },
	{SEQ_NT36525B_86, ARRAY_SIZE(SEQ_NT36525B_86), 0, },
	{SEQ_NT36525B_92, ARRAY_SIZE(SEQ_NT36525B_92), 0, },
	{SEQ_NT36525B_93, ARRAY_SIZE(SEQ_NT36525B_93), 0, },
	{SEQ_NT36525B_94_1, ARRAY_SIZE(SEQ_NT36525B_94_1), 0, },
	{SEQ_NT36525B_AB, ARRAY_SIZE(SEQ_NT36525B_AB), 0, },
	{SEQ_NT36525B_AC, ARRAY_SIZE(SEQ_NT36525B_AC), 0, },
	{SEQ_NT36525B_AD, ARRAY_SIZE(SEQ_NT36525B_AD), 0, },
	{SEQ_NT36525B_AF, ARRAY_SIZE(SEQ_NT36525B_AF), 0, },
	{SEQ_NT36525B_B0_0, ARRAY_SIZE(SEQ_NT36525B_B0_0), 0, },
	{SEQ_NT36525B_B1_0, ARRAY_SIZE(SEQ_NT36525B_B1_0), 0, },
	{SEQ_NT36525B_FF_2, ARRAY_SIZE(SEQ_NT36525B_FF_2), 1*1000, },
	//msleep(1);
	{SEQ_NT36525B_FB_2, ARRAY_SIZE(SEQ_NT36525B_FB_2), 0, },
	{SEQ_NT36525B_0A_1, ARRAY_SIZE(SEQ_NT36525B_0A_1), 0, },
	{SEQ_NT36525B_0B_1, ARRAY_SIZE(SEQ_NT36525B_0B_1), 0, },
	{SEQ_NT36525B_0C_1, ARRAY_SIZE(SEQ_NT36525B_0C_1), 0, },
	{SEQ_NT36525B_17, ARRAY_SIZE(SEQ_NT36525B_17), 0, },
	{SEQ_NT36525B_18, ARRAY_SIZE(SEQ_NT36525B_18), 0, },
	{SEQ_NT36525B_19, ARRAY_SIZE(SEQ_NT36525B_19), 0, },
	{SEQ_NT36525B_58, ARRAY_SIZE(SEQ_NT36525B_58), 0, },
	{SEQ_NT36525B_59, ARRAY_SIZE(SEQ_NT36525B_59), 0, },
	{SEQ_NT36525B_5A_1, ARRAY_SIZE(SEQ_NT36525B_5A_1), 0, },
	{SEQ_NT36525B_5B_1, ARRAY_SIZE(SEQ_NT36525B_5B_1), 0, },
	{SEQ_NT36525B_5C_1, ARRAY_SIZE(SEQ_NT36525B_5C_1), 0, },
	{SEQ_NT36525B_5D_1, ARRAY_SIZE(SEQ_NT36525B_5D_1), 0, },
	{SEQ_NT36525B_5E_1, ARRAY_SIZE(SEQ_NT36525B_5E_1), 0, },
	{SEQ_NT36525B_5F_1, ARRAY_SIZE(SEQ_NT36525B_5F_1), 0, },
	{SEQ_NT36525B_60_1, ARRAY_SIZE(SEQ_NT36525B_60_1), 0, },
	{SEQ_NT36525B_61_1, ARRAY_SIZE(SEQ_NT36525B_61_1), 0, },
	{SEQ_NT36525B_62, ARRAY_SIZE(SEQ_NT36525B_62), 0, },
	{SEQ_NT36525B_65, ARRAY_SIZE(SEQ_NT36525B_65), 0, },
	{SEQ_NT36525B_66, ARRAY_SIZE(SEQ_NT36525B_66), 0, },
	{SEQ_NT36525B_C0_0, ARRAY_SIZE(SEQ_NT36525B_C0_0), 0, },
	{SEQ_NT36525B_CA, ARRAY_SIZE(SEQ_NT36525B_CA), 0, },
	{SEQ_NT36525B_CC, ARRAY_SIZE(SEQ_NT36525B_CC), 0, },
	{SEQ_NT36525B_D3, ARRAY_SIZE(SEQ_NT36525B_D3), 0, },
	{SEQ_NT36525B_D4, ARRAY_SIZE(SEQ_NT36525B_D4), 0, },
	{SEQ_NT36525B_D5, ARRAY_SIZE(SEQ_NT36525B_D5), 0, },
	{SEQ_NT36525B_D6, ARRAY_SIZE(SEQ_NT36525B_D6), 0, },
	{SEQ_NT36525B_D7, ARRAY_SIZE(SEQ_NT36525B_D7), 0, },
	{SEQ_NT36525B_FF_3, ARRAY_SIZE(SEQ_NT36525B_FF_3), 1*1000, },
	//msleep(1);
	{SEQ_NT36525B_FB_3, ARRAY_SIZE(SEQ_NT36525B_FB_3), 0, },
	{SEQ_NT36525B_00_2, ARRAY_SIZE(SEQ_NT36525B_00_2), 0, },
	{SEQ_NT36525B_FF_4, ARRAY_SIZE(SEQ_NT36525B_FF_4), 1*1000, },
	//msleep(1);
	{SEQ_NT36525B_FB_4, ARRAY_SIZE(SEQ_NT36525B_FB_4), 0, },
	{SEQ_NT36525B_13_1, ARRAY_SIZE(SEQ_NT36525B_13_1), 0, },
	{SEQ_NT36525B_15_0, ARRAY_SIZE(SEQ_NT36525B_15_0), 0, },
	{SEQ_NT36525B_1F_1, ARRAY_SIZE(SEQ_NT36525B_1F_1), 0, },
	{SEQ_NT36525B_26_1, ARRAY_SIZE(SEQ_NT36525B_26_1), 0, },
	{SEQ_NT36525B_C0_1, ARRAY_SIZE(SEQ_NT36525B_C0_1), 0, },
	{SEQ_NT36525B_C1, ARRAY_SIZE(SEQ_NT36525B_C1), 0, },
	{SEQ_NT36525B_C2, ARRAY_SIZE(SEQ_NT36525B_C2), 0, },
	{SEQ_NT36525B_C3, ARRAY_SIZE(SEQ_NT36525B_C3), 0, },
	{SEQ_NT36525B_C4, ARRAY_SIZE(SEQ_NT36525B_C4), 0, },
	{SEQ_NT36525B_C5, ARRAY_SIZE(SEQ_NT36525B_C5), 0, },
	{SEQ_NT36525B_C6, ARRAY_SIZE(SEQ_NT36525B_C6), 0, },
	{SEQ_NT36525B_C7, ARRAY_SIZE(SEQ_NT36525B_C7), 0, },
	{SEQ_NT36525B_FF_5, ARRAY_SIZE(SEQ_NT36525B_FF_5), 1*1000, },
	//msleep(1);
	{SEQ_NT36525B_FB_5, ARRAY_SIZE(SEQ_NT36525B_FB_5), 0, },
	{SEQ_NT36525B_07_2, ARRAY_SIZE(SEQ_NT36525B_07_2), 0, },
	{SEQ_NT36525B_08_2, ARRAY_SIZE(SEQ_NT36525B_08_2), 0, },
	{SEQ_NT36525B_12_1, ARRAY_SIZE(SEQ_NT36525B_12_1), 0, },
	{SEQ_NT36525B_15_1, ARRAY_SIZE(SEQ_NT36525B_15_1), 0, },
	{SEQ_NT36525B_16_1, ARRAY_SIZE(SEQ_NT36525B_16_1), 0, },
	{SEQ_NT36525B_FF_6, ARRAY_SIZE(SEQ_NT36525B_FF_6), 1*1000, },
	//msleep(1);
	{SEQ_NT36525B_FB_6, ARRAY_SIZE(SEQ_NT36525B_FB_6), 0, },
	{SEQ_NT36525B_B0_1, ARRAY_SIZE(SEQ_NT36525B_B0_1), 0, },
	{SEQ_NT36525B_B1_1, ARRAY_SIZE(SEQ_NT36525B_B1_1), 0, },
	{SEQ_NT36525B_B2_0, ARRAY_SIZE(SEQ_NT36525B_B2_0), 0, },
	{SEQ_NT36525B_B3_0, ARRAY_SIZE(SEQ_NT36525B_B3_0), 0, },
	{SEQ_NT36525B_B4_0, ARRAY_SIZE(SEQ_NT36525B_B4_0), 0, },
	{SEQ_NT36525B_B5_0, ARRAY_SIZE(SEQ_NT36525B_B5_0), 0, },
	{SEQ_NT36525B_B6_0, ARRAY_SIZE(SEQ_NT36525B_B6_0), 0, },
	{SEQ_NT36525B_B7_0, ARRAY_SIZE(SEQ_NT36525B_B7_0), 0, },
	{SEQ_NT36525B_B8_0, ARRAY_SIZE(SEQ_NT36525B_B8_0), 0, },
	{SEQ_NT36525B_B9_0, ARRAY_SIZE(SEQ_NT36525B_B9_0), 0, },
	{SEQ_NT36525B_BA_0, ARRAY_SIZE(SEQ_NT36525B_BA_0), 0, },
	{SEQ_NT36525B_BB_0, ARRAY_SIZE(SEQ_NT36525B_BB_0), 0, },
	{SEQ_NT36525B_FF_7, ARRAY_SIZE(SEQ_NT36525B_FF_7), 1*1000, },
	//msleep(1);
	{SEQ_NT36525B_FB_7, ARRAY_SIZE(SEQ_NT36525B_FB_7), 0, },
	{SEQ_NT36525B_B0_2, ARRAY_SIZE(SEQ_NT36525B_B0_2), 0, },
	{SEQ_NT36525B_B1_2, ARRAY_SIZE(SEQ_NT36525B_B1_2), 0, },
	{SEQ_NT36525B_B2_1, ARRAY_SIZE(SEQ_NT36525B_B2_1), 0, },
	{SEQ_NT36525B_B3_1, ARRAY_SIZE(SEQ_NT36525B_B3_1), 0, },
	{SEQ_NT36525B_B4_1, ARRAY_SIZE(SEQ_NT36525B_B4_1), 0, },
	{SEQ_NT36525B_B5_1, ARRAY_SIZE(SEQ_NT36525B_B5_1), 0, },
	{SEQ_NT36525B_B6_1, ARRAY_SIZE(SEQ_NT36525B_B6_1), 0, },
	{SEQ_NT36525B_B7_1, ARRAY_SIZE(SEQ_NT36525B_B7_1), 0, },
	{SEQ_NT36525B_B8_1, ARRAY_SIZE(SEQ_NT36525B_B8_1), 0, },
	{SEQ_NT36525B_B9_1, ARRAY_SIZE(SEQ_NT36525B_B9_1), 0, },
	{SEQ_NT36525B_BA_1, ARRAY_SIZE(SEQ_NT36525B_BA_1), 0, },
	{SEQ_NT36525B_BB_1, ARRAY_SIZE(SEQ_NT36525B_BB_1), 0, },
	{SEQ_NT36525B_FF_8, ARRAY_SIZE(SEQ_NT36525B_FF_8), 0, },
	{SEQ_NT36525B_FB_8, ARRAY_SIZE(SEQ_NT36525B_FB_8), 0, },
	{SEQ_NT36525B_07_3, ARRAY_SIZE(SEQ_NT36525B_07_3), 0, },
	{SEQ_NT36525B_08_3, ARRAY_SIZE(SEQ_NT36525B_08_3), 0, },
	{SEQ_NT36525B_FF_9, ARRAY_SIZE(SEQ_NT36525B_FF_9), 1*1000, },
	//msleep(1);
	{SEQ_NT36525B_FB_9, ARRAY_SIZE(SEQ_NT36525B_FB_9), 0, },
	{SEQ_NT36525B_BA_2, ARRAY_SIZE(SEQ_NT36525B_BA_2), 0, },
	{SEQ_DISPLAY_ON, ARRAY_SIZE(SEQ_DISPLAY_ON), 10*1000, },
	//msleep(10);
	{SEQ_SLEEP_OUT, ARRAY_SIZE(SEQ_SLEEP_OUT), 120*1000, },
	//msleep(120);
	{SEQ_BRIGHTNESS_MODE, ARRAY_SIZE(SEQ_BRIGHTNESS_MODE), 0, },

	{SEQ_CABC_ON, ARRAY_SIZE(SEQ_CABC_ON), 0, },
};

static unsigned int brightness_table[EXTEND_BRIGHTNESS + 1] = {
	0,
	1, 1, 2, 3, 3, 4, 5, 5, 6, 7, /* 1: 1 */
	7, 8, 9, 9, 10, 11, 11, 12, 13, 14,
	14, 15, 16, 16, 17, 18, 18, 19, 20, 20,
	21, 22, 22, 23, 24, 24, 25, 26, 27, 27,
	28, 29, 29, 30, 31, 31, 32, 33, 33, 34,
	35, 35, 36, 37, 37, 38, 39, 40, 40, 41,
	42, 42, 43, 44, 44, 45, 46, 46, 47, 48,
	48, 49, 50, 51, 51, 52, 53, 53, 54, 55,
	55, 56, 57, 57, 58, 59, 59, 60, 61, 61,
	62, 63, 64, 64, 65, 66, 66, 67, 68, 68,
	69, 70, 70, 71, 72, 72, 73, 74, 74, 75,
	76, 77, 77, 78, 79, 79, 80, 81, 81, 82,
	83, 83, 84, 85, 85, 86, 87, 88, 88, 89, /* 128: 88 */
	90, 91, 92, 93, 94, 95, 96, 97, 98, 99,
	100, 101, 102, 103, 104, 105, 106, 107, 108, 109,
	110, 111, 112, 113, 114, 115, 116, 117, 118, 118,
	119, 120, 121, 122, 123, 124, 125, 126, 127, 128,
	129, 130, 131, 132, 133, 134, 135, 136, 137, 138,
	139, 140, 141, 142, 143, 144, 145, 146, 147, 148,
	149, 149, 150, 151, 152, 153, 154, 155, 156, 157,
	158, 159, 160, 161, 162, 163, 164, 165, 166, 167,
	168, 169, 170, 171, 172, 173, 174, 175, 176, 177,
	178, 179, 180, 180, 181, 182, 183, 184, 185, 186,
	187, 188, 189, 190, 191, 192, 193, 194, 195, 196,
	197, 198, 199, 200, 201, 202, 203, 204, 205, 206,
	207, 208, 209, 210, 211, 211, 211, 211, 211, 211, /* 255: 211 */
	211, 211, 211, 211, 211, 211, 211, 211, 211, 211,
	211, 211, 211, 211, 211, 211, 211, 211, 211, 211,
	211, 211, 211, 211, 211, 211, 211, 211, 211, 211,
	211, 211, 211, 211, 211, 211, 211, 211, 211, 211,
	211, 211, 211, 211, 211, 255,
};

#endif /* __NT36525B_PARAM_H__ */
