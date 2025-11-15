/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 */
#ifndef _BATTERY_CHARGER_ASUS_H
#define _BATTERY_CHARGER_ASUS_H


#include <linux/device.h>
#include <linux/power_supply.h>

#define QTI_POWER_SUPPLY_CHARGED   0x0001
#define QTI_POWER_SUPPLY_UNCHARGED 0x0002
extern void qti_charge_register_notify(struct notifier_block *nb);
extern void qti_charge_unregister_notify(struct notifier_block *nb);

#endif
