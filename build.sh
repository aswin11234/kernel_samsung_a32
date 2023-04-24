#!/bin/bash

export PATH="$HOME/toolchains/bin:$PATH"
export CROSS_COMPILE=aarch64-linux-gnu-
export ANDROID_MAJOR_VERSION=r
export ARCH=arm64
export SUBARCH=ARM64
export KCFLAGS=-w
export CONFIG_SECTION_MISMATCH_WARN_ONLY=y

#make -C $(pwd) O=$(pwd)/out KCFLAGS=-w CONFIG_SECTION_MISMATCH_WARN_ONLY=y a32_defconfig
#make -C $(pwd) O=$(pwd)/out KCFLAGS=-w CONFIG_SECTION_MISMATCH_WARN_ONLY=y -j12

make \
	O=out \
	clean \
	mrproper \
	CC=clang \
        AR=llvm-ar \
	NM=llvm-nm \
	OBJCOPY=llvm-objcopy \
	OBJDUMP=llvm-objdump \
	STRIP=llvm-strip \
	dotA_a32_defconfig

#make \
#	O=out \
#	CC=clang \
#        AR=llvm-ar \
#	NM=llvm-nm \
#	OBJCOPY=llvm-objcopy \
#	OBJDUMP=llvm-objdump \
#	STRIP=llvm-strip \
#	-j$(nproc --all) 2>&1 | tee build.log

