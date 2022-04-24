#include <linux/module.h>
#include <linux/init.h>

/* Meta Information */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Roberto Cannella");
MODULE_DESCRIPTION("A Hello, world Linux Kernal Module");

/**
 * @brief This function is called when the module is loaded into the kernal
 */

static int __init ModuleInit(void) {
	printk("Hello, world!\n");
	return 0;
}
/**
* @breff This function is called when the module is removed from the kernal
*/

static void __exit ModuleExit(void){
	printk("Goodbye, world\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);


