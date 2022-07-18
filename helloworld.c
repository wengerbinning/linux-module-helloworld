#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

#define DEBUG

#define DEBUG_LEVEL_A 1

#if defined(DEBUG)
#define debug(level, format, ...) printk("[ DEBUG ] "format"\n", ##__VA_ARGS__)
#elif
#define debug(level, format, ...)
#endif

static int helloworld_init(void) {
    debug(DEBUG_LEVEL_A, "run in %s", __func__);

    // TODO: Do something for initialize.

    debug(DEBUG_LEBEL_A, "return from %s", __func__);
    return 0;
}

static void helloworld_exit(void) {
    debug(DEBUG_LEVEL_A, "run in %s", __func__);

    // TODO: Do something for release.
    
    debug(DEBUG_LEVEL_A, "return from %s", __func__);
}


module_init(helloworld_init);
module_exit(helloworld_exit);

MODULE_DESCRIPTION("This is a hellowore kernel module");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Wenger Binning");
