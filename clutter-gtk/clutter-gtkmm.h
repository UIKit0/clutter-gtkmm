/* clutter-gtkmm - a C++ wrapper for clutter-gtk
 *
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

#ifndef LIBCLUTTER_GTKMM_H
#define LIBCLUTTER_GTKMM_H

/** @mainpage clutter-gtkmm Reference Manual
 *
 * @section description Description
 *
 * clutter-gtkmm is a C++ wrapper for clutter-gtk.
 *
 * See also the <a href="http://www.clutter-project.org/">clutter website</a>.
 *
 * @section basics Basic Usage
 *
 * Include the clutter-gtkmm header:
 * @code
 * #include <clutter-gtkmm.h>
 * @endcode
 * (You may include individual headers, such as @c clutter-gtkmm/viewport.h
 * instead.)
 *
 * If your source file is @c program.cc, you can compile it with:
 * @code
 * g++ program.cc -o program `pkg-config --cflags --libs clutter-gtkmm-1.0`
 * @endcode
 *
 * Alternatively, if using autoconf, use the following in @c configure.ac:
 * @code
 * PKG_CHECK_MODULES([CLUTTER_GTKMM], [clutter-gtkmm-1.0])
 * @endcode
 * Then use the generated @c CLUTTER_GTKMM_CFLAGS and @c CLUTTER_GTKMM_LIBS
 * variables in the project @c Makefile.am files. For example:
 * @code
 * program_CPPFLAGS = $(CLUTTER_GTKMM_CFLAGS)
 * program_LDADD = $(CLUTTER_GTKMM_LIBS)
 * @endcode
 */

#include <cluttermm.h>
#include <clutter-gtkmmconfig.h>
#include <clutter-gtkmm/embed.h>
#include <clutter-gtkmm/init.h>
#include <clutter-gtkmm/utility.h>
#include <clutter-gtkmm/viewport.h>

#endif /* !LIBCLUTTER_GTKMM_H */
