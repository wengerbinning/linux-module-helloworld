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

/* https://litux.nl/mirror/kerneldevel      opment/0672327201/ch16lev1sec6.html */

static int disabled = 0;
module_param(disabled, bool, 0644); //  byte, short, ushort, int, uint, long, ulong, charp, bool, or invbool
MODULE_PARM_DESC(size, "The size in inches of the fishing pole " \
                 "connected to this computer.");
static unsigned int debug = DEFAULT_MAX_LINE_TEST;
module_param_named(kmod-debug, debug, int, 0);

module_param_array(fish, int, &nr_fish, 0444);

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
