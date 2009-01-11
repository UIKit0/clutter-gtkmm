// -*- c++ -*-
/*
 * Copyright 2008-2009 The cluttermm Development Team
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

#include <clutter-gtkmm/utility.h>
#include <clutter-gtk/clutter-gtk.h>

namespace Clutter
{
namespace Gtk
{

void get_fg_color(::Gtk::Widget& widget, ::Gtk::StateType state, Color& color)
{
  gtk_clutter_get_fg_color(widget.gobj(), GtkStateType(state), color.gobj());
}

void get_bg_color(::Gtk::Widget& widget, ::Gtk::StateType state, Color& color)
{
  gtk_clutter_get_bg_color(widget.gobj(), GtkStateType(state), color.gobj());
}

void get_text_color(::Gtk::Widget& widget, ::Gtk::StateType state, Color& color)
{
  gtk_clutter_get_text_color(widget.gobj(), GtkStateType(state), color.gobj());
}

void get_base_color(::Gtk::Widget& widget, ::Gtk::StateType state, Color& color)
{
  gtk_clutter_get_base_color(widget.gobj(), GtkStateType(state), color.gobj());
}

void get_text_aa_color(::Gtk::Widget& widget, ::Gtk::StateType state, Color& color)
{
  gtk_clutter_get_text_aa_color(widget.gobj(), GtkStateType(state), color.gobj());
}

void get_light_color(::Gtk::Widget& widget, ::Gtk::StateType state, Color& color)
{
  gtk_clutter_get_light_color(widget.gobj(), GtkStateType(state), color.gobj());
}

void get_mid_color(::Gtk::Widget& widget, ::Gtk::StateType state, Color& color)
{
  gtk_clutter_get_mid_color(widget.gobj(), GtkStateType(state), color.gobj());
}

void get_dark_color(::Gtk::Widget& widget, ::Gtk::StateType state, Color& color)
{
  gtk_clutter_get_dark_color(widget.gobj(), GtkStateType(state), color.gobj());
}

Glib::RefPtr<Texture> create_texture_from_pixbuf(const Glib::RefPtr<Gdk::Pixbuf>& pixbuf)
{
  return Glib::wrap(CLUTTER_TEXTURE(gtk_clutter_texture_new_from_pixbuf(pixbuf->gobj())));
}

Glib::RefPtr<Texture> create_texture_from_stock(::Gtk::Widget& widget, const Glib::ustring& stock_id, ::Gtk::IconSize size)
{
  return Glib::wrap(CLUTTER_TEXTURE(gtk_clutter_texture_new_from_stock(widget.gobj(), stock_id.c_str(), GtkIconSize(int(size)))));
}

Glib::RefPtr<Texture> create_texture_from_icon_name(::Gtk::Widget& widget, const Glib::ustring& icon_name, ::Gtk::IconSize size)
{
  return Glib::wrap(CLUTTER_TEXTURE(gtk_clutter_texture_new_from_icon_name(widget.gobj(), icon_name.c_str(), GtkIconSize(int(size)))));
}

void set_texture_from_pixbuf(const Glib::RefPtr<Texture>& texture, const Glib::RefPtr<Gdk::Pixbuf>& pixbuf)
{
  gtk_clutter_texture_set_from_pixbuf(texture->gobj(), pixbuf->gobj());
}

void set_texture_from_stock(const Glib::RefPtr<Texture>& texture, ::Gtk::Widget& widget, const Glib::ustring& stock_id, ::Gtk::IconSize size)
{
  gtk_clutter_texture_set_from_stock(texture->gobj(), widget.gobj(), stock_id.c_str(), GtkIconSize(int(size)));
}

void set_texture_from_icon_name(const Glib::RefPtr<Texture>& texture, ::Gtk::Widget& widget, const Glib::ustring& icon_name, ::Gtk::IconSize size)
{
  gtk_clutter_texture_set_from_icon_name(texture->gobj(), widget.gobj(), icon_name.c_str(), GtkIconSize(int(size)));
}

} //namespace Gtk
} //namespace Clutter
