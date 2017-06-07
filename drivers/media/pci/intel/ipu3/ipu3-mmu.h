/*
 * Copyright (c) 2017 Intel Corporation.
 * Copyright (C) 2017 Google, Inc.
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

#ifndef __IPU3_MMU_H
#define __IPU3_MMU_H

struct ipu3_mmu_info {
	dma_addr_t aperture_start; /* First address that can be mapped    */
	dma_addr_t aperture_end;   /* Last address that can be mapped     */
	unsigned long pgsize_bitmap;	/* Bitmap of page sizes in use */
};

struct device;
struct scatterlist;

struct ipu3_mmu_info *ipu3_mmu_init(struct device *parent, void __iomem *base);
void ipu3_mmu_exit(struct ipu3_mmu_info *info);
void ipu3_mmu_suspend(struct ipu3_mmu_info *info);
void ipu3_mmu_resume(struct ipu3_mmu_info *info);

int ipu3_mmu_map(struct ipu3_mmu_info *info, unsigned long iova,
		 phys_addr_t paddr, size_t size);
size_t ipu3_mmu_unmap(struct ipu3_mmu_info *info, unsigned long iova,
		      size_t size);
size_t ipu3_mmu_map_sg(struct ipu3_mmu_info *info, unsigned long iova,
		       struct scatterlist *sg, unsigned int nents);
#endif
