## Copyright (c) 2008
## The cluttermm development team.

SUBDIRS = private

sublib_name = clutter-gtkmm
sublib_libname = clutter-gtkmm-$(API_VER)
sublib_libversion = $(CLUTTER_GTKMM_SO_VERSION)
sublib_namespace = Clutter
sublib_cflags = $(CLUTTER_GTKMM_CFLAGS)
sublib_topdir = clutter-gtk

files_extra_h = wrap_init.h init.h utility.h
files_extra_cc = init.cc utility.cc

include $(top_srcdir)/build_shared/Makefile_build_gensrc.am_fragment

lib_LTLIBRARIES = libclutter-gtkmm-@API_VER@.la
libclutter_gtkmm_@API_VER@_la_SOURCES = $(files_all_cc)
libclutter_gtkmm_@API_VER@_la_LDFLAGS = $(common_ldflags)
libclutter_gtkmm_@API_VER@_la_LIBADD = $(CLUTTER_GTKMM_LIBS)

