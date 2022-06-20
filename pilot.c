#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ali Aydin Kucukcollu");
MODULE_DESCRIPTION("An introduction to the linux kernel");
MODULE_VERSION("0.1");

static int __init pilot_init(void)
{
    printk(KERN_INFO "Hello, world!\n");
    return 0;
}

static void __exit pilot_exit(void)
{
    printk(KERN_INFO "Goodbye, world!\n");
}

module_init(pilot_init);
module_exit(pilot_exit);