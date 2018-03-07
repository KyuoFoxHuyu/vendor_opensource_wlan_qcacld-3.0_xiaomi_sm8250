/*
 * Copyright (c) 2018 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */
/**
 * DOC: public API related to the wlan ipa called by north bound HDD/OSIF
 */

#include "wlan_ipa_ucfg_api.h"
#include "wlan_ipa_main.h"

bool ucfg_ipa_is_present(void)
{
	return ipa_is_hw_support();
}

void ucfg_ipa_set_txrx_handle(struct wlan_objmgr_psoc *psoc,
				    void *txrx_handle)
{
	return ipa_set_txrx_handle(psoc, txrx_handle);
}

void ucfg_ipa_set_dp_handle(struct wlan_objmgr_psoc *psoc,
				     void *dp_soc)
{
	return ipa_set_dp_handle(psoc, dp_soc);
}

void ucfg_ipa_update_config(struct wlan_ipa_config *config)
{
	ipa_config_update(config);
}

QDF_STATUS ucfg_ipa_set_perf_level(struct wlan_objmgr_pdev *pdev,
				   uint64_t tx_packets, uint64_t rx_packets)
{
	return ipa_rm_set_perf_level(pdev, tx_packets, rx_packets);
}

void ucfg_ipa_uc_info(struct wlan_objmgr_pdev *pdev)
{
	return ipa_uc_info(pdev);
}

void ucfg_ipa_uc_stat(struct wlan_objmgr_pdev *pdev)
{
	return ipa_uc_stat(pdev);
}

void ucfg_ipa_uc_rt_debug_host_dump(struct wlan_objmgr_pdev *pdev)
{
	return ipa_uc_rt_debug_host_dump(pdev);
}

void ucfg_ipa_dump_info(struct wlan_objmgr_pdev *pdev)
{
	return ipa_dump_info(pdev);
}

void ucfg_ipa_uc_stat_request(struct wlan_objmgr_pdev *pdev,
			      uint8_t reason)
{
	return ipa_uc_stat_request(pdev, reason);
}

void ucfg_ipa_uc_stat_query(struct wlan_objmgr_pdev *pdev,
			    uint32_t *ipa_tx_diff, uint32_t *ipa_rx_diff)
{
	return ipa_uc_stat_query(pdev, ipa_tx_diff, ipa_rx_diff);
}
