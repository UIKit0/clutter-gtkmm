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

AUTOMAKE_OPTIONS = subdir-objects

check_PROGRAMS = events/events
dist_noinst_DATA = redhand.png

local_includes = -I$(top_builddir)/clutter-gtk $(if $(srcdir:.=),-I$(top_srcdir)/clutter-gtk)
local_libs = $(top_builddir)/clutter-gtk/clutter-gtkmm/libclutter-gtkmm-$(CLUTTER_GTKMM_API_VERSION).la

AM_CPPFLAGS = -I$(top_builddir) $(local_includes) $(CLUTTER_GTKMM_CFLAGS)
AM_CXXFLAGS = $(CLUTTER_GTKMM_WXXFLAGS)
LDADD = $(CLUTTER_GTKMM_LIBS) $(local_libs)

events_events_SOURCES = events/event.cc events/event.h events/main.cc
