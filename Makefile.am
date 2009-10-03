## Copyright (c) 2009  Openismus GmbH <http://www.openismus.com/>
##
## This file is part of clutter-gtkmm.
##
## clutter-gtkmm is free software: you can redistribute it and/or modify it
## under the terms of the GNU Lesser General Public License as published
## by the Free Software Foundation, either version 2.1 of the License,
## or (at your option) any later version.
##
## clutter-gtkmm is distributed in the hope that it will be useful, but
## WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
## See the GNU Lesser General Public License for more details.
##
## You should have received a copy of the GNU Lesser General Public License
## along with this program.  If not, see <http://www.gnu.org/licenses/>.

ACLOCAL_AMFLAGS = -I build ${ACLOCAL_FLAGS}
DISTCHECK_CONFIGURE_FLAGS = --enable-warnings=fatal

if MAINTAINER_MODE
src_subdirs = codegen clutter-gtk/src
else
src_subdirs =
endif
if ENABLE_DOCUMENTATION
doc_subdirs = doc
else
doc_subdirs =
endif
SUBDIRS = $(src_subdirs) clutter-gtk/clutter-gtkmm examples $(doc_subdirs)

clutter_gtkmm_includedir = $(includedir)/$(CLUTTER_GTKMM_MODULE_NAME)
clutter_gtkmm_include_HEADERS = clutter-gtk/clutter-gtkmm.h

clutter_gtkmm_libincludedir = $(libdir)/$(CLUTTER_GTKMM_MODULE_NAME)/include
nodist_clutter_gtkmm_libinclude_HEADERS = clutter-gtk/clutter-gtkmmconfig.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = clutter-gtk/$(CLUTTER_GTKMM_MODULE_NAME).pc

dist_noinst_SCRIPTS = autogen.sh

# Optional: auto-generate the ChangeLog file from the git log on make dist
#include $(top_srcdir)/build/dist-changelog.am
