SUBDIRS		= src clutter-gtkmm

EXTRA_DIST	= README					\
		  clutter-gtkmm-config.h.in clutter-gtkmm.h	\
		  clutter-gtkmm.pc.in

clutter_gtkmm_includedir		= $(includedir)/clutter-gtkmm-$(API_VER)
clutter_gtkmm_include_HEADERS	= clutter-gtkmm.h

clutter_gtkmm_configdir		= $(libdir)/clutter-gtkmm-$(API_VER)/include
clutter_gtkmm_config_DATA	= clutter-gtkmm-config.h

pkgconfigdir		= $(libdir)/pkgconfig
pkgconfig_DATA		= clutter-gtkmm-$(API_VER).pc
DISTCLEANFILES = $(pkgconfig_DATA)


