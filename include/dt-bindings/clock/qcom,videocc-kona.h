/* SPDX-License-Identifier: GPL-2.0-only */
/* Copyright (c) 2018-2019, The Linux Foundation. All rights reserved. */

#ifndef _DT_BINDINGS_CLK_QCOM_VIDEO_CC_KONA_H
#define _DT_BINDINGS_CLK_QCOM_VIDEO_CC_KONA_H

/* VIDEO_CC clocks */
#define VIDEO_CC_AHB_CLK					0
#define VIDEO_CC_AHB_CLK_SRC					1
#define VIDEO_CC_MVS0_CLK					2
#define VIDEO_CC_MVS0_CLK_SRC					3
#define VIDEO_CC_MVS0_DIV_CLK_SRC				4
#define VIDEO_CC_MVS0C_CLK					5
#define VIDEO_CC_MVS0C_DIV2_DIV_CLK_SRC				6
#define VIDEO_CC_MVS1_CLK					7
#define VIDEO_CC_MVS1_CLK_SRC					8
#define VIDEO_CC_MVS1_DIV2_CLK					9
#define VIDEO_CC_MVS1_DIV_CLK_SRC				10
#define VIDEO_CC_MVS1C_CLK					11
#define VIDEO_CC_MVS1C_DIV2_DIV_CLK_SRC				12
#define VIDEO_CC_SLEEP_CLK					13
#define VIDEO_CC_SLEEP_CLK_SRC					14
#define VIDEO_CC_XO_CLK						15
#define VIDEO_CC_XO_CLK_SRC					16
#define VIDEO_PLL0						17
#define VIDEO_PLL1						18

/* VIDEO_CC resets */
#define CVP_VIDEO_CC_INTERFACE_BCR				0
#define CVP_VIDEO_CC_MVS0_BCR					1
#define VIDEO_CC_MVS0C_CLK_ARES					2
#define CVP_VIDEO_CC_MVS0C_BCR					3
#define CVP_VIDEO_CC_MVS1_BCR					4
#define VIDEO_CC_MVS1C_CLK_ARES					5
#define CVP_VIDEO_CC_MVS1C_BCR					6

#endif
