// SPDX-License-Identifier: GPL-2.0 OR MIT

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("corozco");

static int __init hello_init(void)
{
	pr_info("Hello, World!\n");
	return 0;
}

static void __exit hello_exit(void)
{
	pr_info("Cleaning up module\n");
}

module_init(hello_init);
module_exit(hello_exit);
