#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8e6402a9, "module_layout" },
	{ 0x41136265, "device_destroy" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe5cf5ad, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x64b60eb0, "class_destroy" },
	{ 0x928792f4, "sysfs_remove_file_ns" },
	{ 0x35ecf72f, "kobject_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf8415cf7, "sysfs_create_file_ns" },
	{ 0xd62a601c, "kobject_create_and_add" },
	{ 0xc7612a63, "kernel_kobj" },
	{ 0xe8129999, "device_create" },
	{ 0xa946dcde, "__class_create" },
	{ 0xc0fdf3d5, "cdev_add" },
	{ 0xf4161c9f, "cdev_init" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe78dfe6d, "kmem_cache_alloc_trace" },
	{ 0x595451f1, "kmalloc_caches" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F2B8389B72401782E5C0D98");
