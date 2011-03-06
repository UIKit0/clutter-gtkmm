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

#include <clutter-gtkmm/utility.h>
#include <clutter-gtk/clutter-gtk.h>

namespace Clutter
{
namespace Gtk
{

// Glib::RefPtr<Texture> create_texture_from_pixbuf(const Glib::RefPtr<Gdk::Pixbuf>& pixbuf)
// {
//   return Glib::wrap(CLUTTER_TEXTURE(gtk_clutter_texture_new_from_pixbuf(pixbuf->gobj())));
// }

// Glib::RefPtr<Texture> create_texture_from_stock(::Gtk::Widget& widget, const Glib::ustring& stock_id, ::Gtk::IconSize size)
// {
//   return Glib::wrap(CLUTTER_TEXTURE(gtk_clutter_texture_new_from_stock(widget.gobj(), stock_id.c_str(), GtkIconSize(int(size)))));
// }

// Glib::RefPtr<Texture> create_texture_from_icon_name(::Gtk::Widget& widget, const Glib::ustring& icon_name, ::Gtk::IconSize size)
// {
//   return Glib::wrap(CLUTTER_TEXTURE(gtk_clutter_texture_new_from_icon_name(widget.gobj(), icon_name.c_str(), GtkIconSize(int(size)))));
// }

// #ifdef GLIBMM_EXCEPTIONS_ENABLED
// void set_texture_from_pixbuf(const Glib::RefPtr<Texture>& texture, const Glib::RefPtr<Gdk::Pixbuf>& pixbuf)
// #else
// void set_texture_from_pixbuf(const Glib::RefPtr<Texture>& texture, const Glib::RefPtr<Gdk::Pixbuf>& pixbuf, std::auto_ptr<Glib::Error>& error)
// #endif
// {
//   GError* gerror = 0;
//   gtk_clutter_texture_set_from_pixbuf(texture->gobj(), pixbuf->gobj(), &gerror);

// #ifdef GLIBMM_EXCEPTIONS_ENABLED
//   if(gerror)
//     ::Glib::Error::throw_exception(gerror);
// #else
//   if(gerror)
//     error = ::Glib::Error::throw_exception(gerror);
// #endif // GLIBMM_EXCEPTIONS_ENABLED
// }

// #ifdef GLIBMM_EXCEPTIONS_ENABLED
// void set_texture_from_stock(const Glib::RefPtr<Texture>& texture, ::Gtk::Widget& widget, const Glib::ustring& stock_id, ::Gtk::IconSize size)
// #else
// void set_texture_from_stock(const Glib::RefPtr<Texture>& texture, ::Gtk::Widget& widget, const Glib::ustring& stock_id, ::Gtk::IconSize size, std::auto_ptr<Glib::Error>& error)
// #endif
// {
//   GError* gerror = 0;
//   gtk_clutter_texture_set_from_stock(texture->gobj(), widget.gobj(), stock_id.c_str(), GtkIconSize(int(size)), &gerror);

// #ifdef GLIBMM_EXCEPTIONS_ENABLED
//   if(gerror)
//     ::Glib::Error::throw_exception(gerror);
// #else
//   if(gerror)
//     error = ::Glib::Error::throw_exception(gerror);
// #endif // GLIBMM_EXCEPTIONS_ENABLED
// }

// #ifdef GLIBMM_EXCEPTIONS_ENABLED
// void set_texture_from_icon_name(const Glib::RefPtr<Texture>& texture, ::Gtk::Widget& widget, const Glib::ustring& icon_name, ::Gtk::IconSize size)
// #else
// void set_texture_from_icon_name(const Glib::RefPtr<Texture>& texture, ::Gtk::Widget& widget, const Glib::ustring& icon_name, ::Gtk::IconSize size, std::auto_ptr<Glib::Error>& error)
// #endif
// {
//   GError* gerror = 0;
//   gtk_clutter_texture_set_from_icon_name(texture->gobj(), widget.gobj(), icon_name.c_str(), GtkIconSize(int(size)), &gerror);

// #ifdef GLIBMM_EXCEPTIONS_ENABLED
//   if(gerror)
//     ::Glib::Error::throw_exception(gerror);
// #else
//   if(gerror)
//     error = ::Glib::Error::throw_exception(gerror);
// #endif // GLIBMM_EXCEPTIONS_ENABLED
// }

} //namespace Gtk
} //namespace Clutter
