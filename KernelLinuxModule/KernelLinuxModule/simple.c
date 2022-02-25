//
//  KernelLinuxModule.c
//  KernelLinuxModule
//
//  Created by Jose Saldivar on 10/25/19.
//  Copyright © 2019 Jose Javier Saldivar. All rights reserved.
//

//#include <mach/mach_types.h>

#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>


// This function is called when the module is loaded. //
static int _init simple_init(void)
{
    printk(KERN_INFO "Loading Module\n");
    return 0;
}

// This function is called when the module is removed.  //
static void _exit simple_exit(void)
{
    printk(KERN_INFO "Removing Module\n");
}

// Macros for registering module entry and exit points. //
module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("SGG");


/*
kern_return_t KernelLinuxModule_start(kmod_info_t * ki, void *d);
kern_return_t KernelLinuxModule_stop(kmod_info_t *ki, void *d);

kern_return_t KernelLinuxModule_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t KernelLinuxModule_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
*/
