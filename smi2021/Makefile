
smi2021-objs := smi2021_main.o		\
	     smi2021_bootloader.o	\
	     smi2021_v4l2.o		\
	     smi2021_audio.o		\


obj-m += smi2021.o

ccflags-y = -I../i2c

all:
	make $(ccflags-y) -C  /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make $(ccflags-y) -C  /lib/modules/$(shell uname -r)/build M=$(PWD) clean


