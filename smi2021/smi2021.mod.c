#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc6c01fa, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xc880201c, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x92a94ad2, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x19a791b9, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3c94d974, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x16abfc10, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x15100eec, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x463e0266, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x312d3b97, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xaf615bf3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x888a620, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xa8d887bb, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xc3a55c7b, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x13fd91a1, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x7d9cc03b, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xb242ee53, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock) },
	{ 0xb1a74b28, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0x68ff7740, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x5bead24f, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xd4fbf9fd, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x83ae2127, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x7ecbadf6, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0xf15e6c6b, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x24ff5f6c, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x91eb4310, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x56adb695, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xaf69df35, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd48cf070, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x7105c678, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x19b104ff, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xf3863d9b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xf4841dde, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x8d6d2de5, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xe7dcc05, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_pow2) },
	{ 0xce9a8441, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xbf97e500, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc511acf5, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0xe9b19de0, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0xf7315fa1, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0xb4f5ee1, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x42f77138, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x2de22b9b, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xfd75cb0, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2538b89c, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xb01f4263, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xf413809d, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x441ec2ad, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x3f61240b, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock) },
	{ 0x69af87a5, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xc0cd3b13, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x81fcd7c8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x63f8971d, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37991672, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x784ecf58, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x148229db, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xa06f0ac, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x614f83b3, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x23a0728d, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev_board) },
	{ 0x39a63d15, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9e65ce7d, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xff1637e2, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0xa1711d91, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x83b5d137, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xa1123b74, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0x63584672, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0xea3e75f5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xf9997802, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x66d65da8, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xa02368ae, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x368aa43e, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,snd-pcm,videobuf2-vmalloc,videobuf2-core,snd,v4l2-common";

MODULE_ALIAS("usb:v1C88p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1C88p003Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1C88p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1C88p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1C88p003Fd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "17A55B61E4A3695CF4DB2F5");
