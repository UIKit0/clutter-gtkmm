// -*- c++ -*-
#ifndef _LIBCLUTTERMM_GTK_INIT_H
#define _LIBCLUTTERMM_GTK_INIT_H
/*
 * Copyright 2008 Jonathon Jongsma
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <glibmm.h>

namespace Clutter
{
namespace Gtk
{

void init(int* nargs, gchar** args[]);

} //namespace Gtk
} //namespace Clutter

#endif //_LIBCLUTTERMM_GTK_INIT_H

