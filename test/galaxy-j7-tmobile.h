struct cpuinfo_mock_file filesystem[] = {
	{
		.path = "/proc/cpuinfo",
		.size = 341,
		.content =
			"Processor\t: AArch64 Processor rev 3 (aarch64)\n"
			"processor\t: 0\n"
			"processor\t: 1\n"
			"processor\t: 2\n"
			"processor\t: 3\n"
			"Features\t: fp asimd aes pmull sha1 sha2 crc32 wp half thumb fastmult vfp edsp neon vfpv3 tlsi vfpv4 idiva idivt \n"
			"CPU implementer\t: 0x41\n"
			"CPU architecture: 8\n"
			"CPU variant\t: 0x0\n"
			"CPU part\t: 0xd03\n"
			"CPU revision\t: 3\n"
			"\n"
			"Hardware\t: SAMSUNG Exynos7580\n",
	},
	{
		.path = "/system/build.prop",
		.size = 4632,
		.content =
			"\n"
			"# begin build properties\n"
			"# autogenerated by buildinfo.sh\n"
			"ro.build.id=MMB29K\n"
			"ro.build.display.id=MMB29K.J700TUVU3AQC3\n"
			"ro.build.version.incremental=J700TUVU3AQC3\n"
			"ro.build.version.sdk=23\n"
			"ro.build.version.preview_sdk=0\n"
			"ro.build.version.codename=REL\n"
			"ro.build.version.all_codenames=REL\n"
			"ro.build.version.release=6.0.1\n"
			"ro.build.version.security_patch=2017-03-01\n"
			"ro.build.version.base_os=\n"
			"ro.build.date=Fri Mar 24 15:53:31 KST 2017\n"
			"ro.build.date.utc=1490338411\n"
			"ro.build.type=user\n"
			"ro.build.user=dpi\n"
			"ro.build.host=SWDD5718\n"
			"ro.build.tags=release-keys\n"
			"ro.build.flavor=j7eltetmo-user\n"
			"ro.product.model=SM-J700T\n"
			"ro.product.brand=samsung\n"
			"ro.product.name=j7eltetmo\n"
			"ro.product.device=j7eltetmo\n"
			"ro.product.board=universal7580\n"
			"# ro.product.cpu.abi and ro.product.cpu.abi2 are obsolete,\n"
			"# use ro.product.cpu.abilist instead.\n"
			"ro.product.cpu.abi=armeabi-v7a\n"
			"ro.product.cpu.abi2=armeabi\n"
			"ro.product.cpu.abilist=armeabi-v7a,armeabi\n"
			"ro.product.cpu.abilist32=armeabi-v7a,armeabi\n"
			"ro.product.cpu.abilist64=\n"
			"ro.product.manufacturer=samsung\n"
			"ro.product.locale=en-US\n"
			"ro.wifi.channels=\n"
			"ro.board.platform=exynos5\n"
			"# ro.build.product is obsolete; use ro.product.device\n"
			"ro.build.product=j7eltetmo\n"
			"# Do not try to parse description, fingerprint, or thumbprint\n"
			"ro.build.description=j7eltetmo-user 6.0.1 MMB29K J700TUVU3AQC3 release-keys\n"
			"ro.build.fingerprint=samsung/j7eltetmo/j7eltetmo:6.0.1/MMB29K/J700TUVU3AQC3:user/release-keys\n"
			"ro.build.characteristics=tmo\n"
			"# Samsung Specific Properties\n"
			"ro.build.PDA=J700TUVU3AQC3\n"
			"ro.build.hidden_ver=J700TUVU3AQC3\n"
			"ro.config.rm_preload_enabled=0\n"
			"ro.build.changelist=9815749\n"
			"ro.product_ship=true\n"
			"ro.build.official.release=true\n"
			"ro.chipname=exynos7580\n"
			"# end build properties\n"
			"\n"
			"#\n"
			"# HWUI_BUILD_PROPERTIES\n"
			"#\n"
			"ro.hwui.texture_cache_size=24\n"
			"ro.hwui.layer_cache_size=16\n"
			"ro.hwui.path_cache_size=4\n"
			"ro.hwui.texture_cache_flushrate=0.4\n"
			"ro.hwui.shape_cache_size=1\n"
			"ro.hwui.gradient_cache_size=0.5\n"
			"ro.hwui.drop_shadow_cache_size=2\n"
			"ro.hwui.r_buffer_cache_size=2\n"
			"ro.hwui.text_small_cache_width=1024\n"
			"ro.hwui.text_small_cache_height=512\n"
			"ro.hwui.text_large_cache_width=2048\n"
			"ro.hwui.text_large_cache_height=1024\n"
			"ro.hwui.fbo_cache_size=8\n"
			"#\n"
			"# from device/samsung/j7eltetmo/system.prop\n"
			"#\n"
			"#\n"
			"# system.prop for universal7580\n"
			"#\n"
			"\n"
			"ro.sf.lcd_density=320\n"
			"\n"
			"ro.arch=exynos7580\n"
			"ro.kernel.qemu=0\n"
			"ro.kernel.qemu.gles=1\n"
			"persist.demo.hdmirotationlock=false\n"
			"ro.zygote.disable_gl_preload=1\n"
			"\n"
			"# VQG - User Agent Header for Video-Streaming Client\n"
			"net.streaming.rtsp.uaprof=http://wap.samsungmobile.com/uaprof/\n"
			"#\n"
			"# ADDITIONAL_BUILD_PROPERTIES\n"
			"#\n"
			"ro.astcenc.astcsupport=1\n"
			"ro.mct.compressiontype=ETC1\n"
			"ro.config.tima=1\n"
			"ro.config.timaversion=3.0\n"
			"ro.config.dmverity=true\n"
			"ro.config.rkp=true\n"
			"ro.config.kap=true\n"
			"ro.telephony.default_network=9\n"
			"persist.radio.sib16_support=0\n"
			"dalvik.vm.image-dex2oat-filter=speed\n"
			"dalvik.vm.dex2oat-filter=speed\n"
			"ro.config.ringtone=CLEAN_Tmo_Jingle.ogg\n"
			"ro.config.notification_sound=Skyline.ogg\n"
			"ro.config.alarm_alert=Morning_Flower.ogg\n"
			"ro.config.media_sound=Media_preview_Touch_the_light.ogg\n"
			"ro.config.ringtone_2=Basic_Bell.ogg\n"
			"ro.config.notification_sound_2=S_Charming_Bell.ogg\n"
			"ro.opengles.version=196609\n"
			"ro.sf.lcd_density=480\n"
			"debug.hwc.otf=1\n"
			"debug.hwc.winupdate=1\n"
			"drm.service.enabled=true\n"
			"dalvik.vm.heapstartsize=8m\n"
			"dalvik.vm.heapgrowthlimit=128m\n"
			"dalvik.vm.heapsize=512m\n"
			"dalvik.vm.heaptargetutilization=0.75\n"
			"dalvik.vm.heapminfree=2m\n"
			"dalvik.vm.heapmaxfree=8m\n"
			"ro.security.vpnpp.ver=1.4\n"
			"ro.security.vpnpp.release=6.1\n"
			"ro.build.scafe.size=short\n"
			"ro.build.scafe.shot=single\n"
			"ro.build.scafe.cream=white\n"
			"ro.build.scafe.version=2016A\n"
			"ro.frp.pst=/dev/block/persistent\n"
			"security.mdpp.mass=skmm\n"
			"ro.sec.fle.encryption=true\n"
			"ro.config.dha_lmk_scale=1.341\n"
			"ro.config.dha_cached_max=6\n"
			"ro.config.dha_cached_min=4\n"
			"ro.config.dha_empty_max=12\n"
			"ro.config.dha_empty_init=12\n"
			"ro.error.receiver.default=com.samsung.receiver.error\n"
			"sys.config.samp_spcm_enable=true\n"
			"keyguard.no_require_sim=true\n"
			"ro.carrier=unknown\n"
			"ro.com.google.clientidbase=android-samsung\n"
			"ro.security.icd.flagmode=multi\n"
			"security.ASKS.policy_version=000000\n"
			"ro.ril.hsxpa=1\n"
			"ro.ril.gprsclass=10\n"
			"ro.adb.qemud=1\n"
			"ro.smps.enable=true\n"
			"ro.setupwizard.mode=OPTIONAL\n"
			"ro.com.google.gmsversion=6.0_r8\n"
			"ro.com.google.clientidbase.ms=android-hms-tmobile-us\n"
			"ro.com.google.clientidbase.am=android-tmobile-us\n"
			"ro.com.google.clientidbase.yt=android-samsung\n"
			"ro.com.google.clientidbase.gmm=android-samsung\n"
			"ro.build.selinux=1\n"
			"persist.sys.dalvik.vm.lib.2=libart.so\n"
			"dalvik.vm.isa.arm.variant=cortex-a15\n"
			"dalvik.vm.isa.arm.features=default\n"
			"ro.config.knox=v30\n"
			"ro.kernel.qemu=0\n"
			"net.bt.name=Android\n"
			"dalvik.vm.stack-trace-file=/data/anr/traces.txt\n"
			"ro.build.version.sdl=2301\n"
			"ro.expect.recovery_id=0x66db7c705f876b213d2e27b11b82cb001ec296c4000000000000000000000000\n"
			"\n",
	},
	{
		.path = "/sys/devices/system/cpu/kernel_max",
		.size = 2,
		.content = "7\n",
	},
	{
		.path = "/sys/devices/system/cpu/possible",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/present",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1500000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "400000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/thread_siblings_list",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1500000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "400000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_id",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/thread_siblings_list",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1500000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "400000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/core_id",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/thread_siblings_list",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1500000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "400000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/core_id",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/thread_siblings_list",
		.size = 2,
		.content = "3\n",
	},
	{ NULL },
};