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

binding_name    = clutter-gtkmm
wrap_init_flags = --namespace=Clutter --namespace=Gtk --parent_dir=clutter-gtkmm
gmmproc_flags   = -I $(top_srcdir)/codegen/m4 -I "$(CLUTTERMM_GMMPROC_DIR)/m4" --defs $(srcdir)

include $(srcdir)/filelist.am
include $(top_srcdir)/codegen/m4/filelist.am
include $(top_srcdir)/build/generate-binding.am
