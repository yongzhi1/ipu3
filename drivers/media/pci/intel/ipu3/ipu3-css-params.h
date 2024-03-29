/*
 * Copyright (c) 2017 Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __IPU3_PARAMS_H
#define __IPU3_PARAMS_H

int ipu3_css_cfg_acc(struct ipu3_css *css, struct ipu3_uapi_flags *use,
		     struct ipu3_uapi_acc_param *acc,
		     struct ipu3_uapi_acc_param *acc_old,
		     struct ipu3_uapi_acc_param *acc_user);

int ipu3_css_cfg_vmem0(struct ipu3_css *css, struct ipu3_uapi_flags *use,
		       void *vmem0, void *vmem0_old,
		       struct ipu3_uapi_params *user);

int ipu3_css_cfg_dmem0(struct ipu3_css *css, struct ipu3_uapi_flags *use,
		       void *dmem0, void *dmem0_old,
		       struct ipu3_uapi_params *user);

void ipu3_css_cfg_gdc_table(struct ipu3_uapi_gdc_warp_param *gdc,
			    int frame_in_x, int frame_in_y,
			    int frame_out_x, int frame_out_y,
			    int env_w, int env_h);

#endif /*__IPU3_PARAMS_H */
