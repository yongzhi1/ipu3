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

#ifndef __IPU3_DMAMAP_H
#define __IPU3_DMAMAP_H

struct imgu_device;
struct scatterlist;

void *ipu3_dmamap_alloc(struct device *dev, struct ipu3_css_map *map,
			size_t len);
void ipu3_dmamap_free(struct device *dev, struct ipu3_css_map *map);

int ipu3_dmamap_map_sg(struct device *dev, struct scatterlist *sglist,
		       int nents, struct ipu3_css_map *map);
void ipu3_dmamap_unmap(struct device *dev, struct ipu3_css_map *map);

int ipu3_dmamap_init(struct device *dev);
void ipu3_dmamap_exit(struct device *dev);

#endif
