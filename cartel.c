#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Gagan Malvi");
MODULE_DESCRIPTION("An example kernel module, for Linux.");

static int __init cartel_initialize(void)
{
    printk(KERN_INFO "Hello world!\n");
    return 0;
}

static void __exit cartel_die(void)
{
    printk(KERN_INFO "Goodbye world!\n");
}

module_init(cartel_initialize);
module_exit(cartel_die);
