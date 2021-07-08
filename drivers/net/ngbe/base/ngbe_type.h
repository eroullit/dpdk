/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(c) 2018-2021 Beijing WangXun Technology Co., Ltd.
 * Copyright(c) 2010-2017 Intel Corporation
 */

#ifndef _NGBE_TYPE_H_
#define _NGBE_TYPE_H_

#include "ngbe_status.h"
#include "ngbe_osdep.h"
#include "ngbe_devids.h"

enum ngbe_mac_type {
	ngbe_mac_unknown = 0,
	ngbe_mac_em,
	ngbe_mac_em_vf,
	ngbe_num_macs
};

enum ngbe_phy_type {
	ngbe_phy_unknown = 0,
	ngbe_phy_none,
	ngbe_phy_rtl,
	ngbe_phy_mvl,
	ngbe_phy_mvl_sfi,
	ngbe_phy_yt8521s,
	ngbe_phy_yt8521s_sfi,
	ngbe_phy_zte,
	ngbe_phy_cu_mtd,
};

enum ngbe_media_type {
	ngbe_media_type_unknown = 0,
	ngbe_media_type_fiber,
	ngbe_media_type_fiber_qsfp,
	ngbe_media_type_copper,
	ngbe_media_type_backplane,
	ngbe_media_type_cx4,
	ngbe_media_type_virtual
};

struct ngbe_hw;

/* Bus parameters */
struct ngbe_bus_info {
	void (*set_lan_id)(struct ngbe_hw *hw);

	u16 func;
	u8 lan_id;
};

struct ngbe_mac_info {
	enum ngbe_mac_type type;
};

struct ngbe_phy_info {
	enum ngbe_media_type media_type;
	enum ngbe_phy_type type;
};

struct ngbe_hw {
	void IOMEM *hw_addr;
	void *back;
	struct ngbe_mac_info mac;
	struct ngbe_phy_info phy;
	struct ngbe_bus_info bus;
	u16 device_id;
	u16 vendor_id;
	u16 sub_device_id;
	u16 sub_system_id;

	bool is_pf;
};

#include "ngbe_regs.h"
#include "ngbe_dummy.h"

#endif /* _NGBE_TYPE_H_ */
