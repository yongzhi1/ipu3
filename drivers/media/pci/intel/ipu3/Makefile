#
# Makefile for IPU3 driver
#

obj-$(CONFIG_INTEL_IPU3_MMU) += ipu3-mmu.o
obj-$(CONFIG_INTEL_IPU3_DMAMAP) += ipu3-dmamap.o

ipu3-imgu-objs += \
		ipu3.o ipu3-css.o ipu3-tables.o ipu3-css-pool.o \
		ipu3-css-fw.o ipu3-css-params.o ipu3-v4l2.o

obj-$(CONFIG_VIDEO_IPU3_IMGU) += ipu3-imgu.o