### An example kernel module for Linux

* Check kernel code before compiling so you know how this stuff works

##### Compilation
```
$ sudo apt install linux-headers-$(uname -r)
$ make -C /lib/modules/$(uname -r)/build M=$(PWD) modules
```

##### Installation and removal and checking kernel buffer
```
$ sudo dmesg -w # See kernel buffer
$ sudo insmod cartel.ko # Insert kernel module
$ sudo rmmod cartel.ko # Remove kernel module
```

* This article assumes you're not root.
