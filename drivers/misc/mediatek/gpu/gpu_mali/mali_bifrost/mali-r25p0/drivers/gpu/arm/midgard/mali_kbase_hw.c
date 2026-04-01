// SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note
/*
 *
 * (C) COPYRIGHT 2012-2024 ARM Limited. All rights reserved.
 *
 * This program is free software and is provided to you under the terms of the
 * GNU General Public License version 2 as published by the Free Software
 * Foundation, and any use by you of this program is subject to the terms
 * of such GNU license.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you can access it online at
 * http://www.gnu.org/licenses/gpl-2.0.html.
 *
 */

/*
 * Run-time work-arounds helpers
 */

#include <mali_base_hwconfig_features.h>
#include <mali_base_hwconfig_issues.h>
#include <hw_access/mali_kbase_hw_access_regmap.h>
#include "mali_kbase.h"
#include "mali_kbase_hw.h"

void kbase_hw_set_features_mask(struct kbase_device *kbdev)
{
	const enum base_hw_feature *features;

	if (true) {
		features = base_hw_features_tGOx;
	}

	for (; *features != BASE_HW_FEATURE_END; features++)
		set_bit(*features, &kbdev->hw_features_mask[0]);
}

/**
 * kbase_hw_get_issues_for_new_id - Get the hardware issues for a new GPU ID
 * @kbdev: Device pointer
 *
 * Return: pointer to an array of hardware issues, terminated by
 * BASE_HW_ISSUE_END.
 *
 * In debugging versions of the driver, unknown versions of a known GPU will
 * be treated as the most recent known version not later than the actual
 * version. In such circumstances, the GPU ID in @kbdev will also be replaced
 * with the most recent known version.
 *
 * Note: The GPU configuration must have been read by kbase_gpuprops_get_props()
 * before calling this function.
 */
static inline const enum base_hw_issue *kbase_hw_get_issues_for_new_id(struct kbase_device *kbdev)
{
	return base_hw_issues_tGOx_r1p0;
}

int kbase_hw_set_issues_mask(struct kbase_device *kbdev)
{
	const enum base_hw_issue *issues;

	if (true) {
		/* Software model */
		if (true) {
			issues = base_hw_issues_model_tGOx;
		}
	}

	dev_info(kbdev->dev, "GPU identified as 0x%x arch %d.%d.%d r%dp%d status %d",
		 2, 7, TGOX_arch_minor, TGOX_arch_rev,
		 TGOX_version_major, TGOX_version_minor, TGOX_version_status);

	for (; *issues != BASE_HW_ISSUE_END; issues++)
		set_bit(*issues, &kbdev->hw_issues_mask[0]);

	return 0;
}
