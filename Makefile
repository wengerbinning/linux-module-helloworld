obj-m += helloworld.o
#obj-$(CONFIG_DEMO_HELLOWORLD) = helloworld.o

all:
	make -C $(KERNEL_SOURCE) M=$(PWD) modules

