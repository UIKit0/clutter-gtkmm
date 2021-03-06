// -*- c++ -*-
/*
 * Copyright 2008-2009 The cluttermm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <clutter-gtkmm/wrap_init.h>
#include <cluttermm/init.h>

namespace Clutter
{
namespace Gtk
{

void init(int* nargs, gchar **args[])
{
  Clutter::init (nargs, args);
  wrap_init (); //Tells the Glib::wrap() table about the libclutter-gtkmm classes.
}

} //namespace Gtk
} //namespace Clutter
