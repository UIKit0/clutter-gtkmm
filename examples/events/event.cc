#include "event.h"

Event::Event()
: label_x("Rotate x-axis")
, label_y("Rotate y-axis")
, label_z("Rotate z-axis")
, label_opacity("Adjust opacity")
, adjustment_x(0.0, 0.0, 360.0)
, adjustment_y(0.0, 0.0, 360.0)
, adjustment_z(0.0, 0.0, 360.0)
, adjustment_opacity(255.0, 0.0, 255.0)
, spin_x(adjustment_x)
, spin_y(adjustment_y)
, spin_z(adjustment_z)
, spin_opacity(adjustment_opacity)
{
  set_title("Gtkmm-Cluttermm Interaction demo");
  set_default_size(800, 600);
  set_resizable(false);
  set_border_width(12);

  vbox.set_spacing(12);
  add(vbox);

  gtk_entry.set_text("Enter some text");
  vbox.pack_start(gtk_entry);
  gtk_entry.signal_changed().connect(sigc::mem_fun(*this, &Event::on_gtk_entry_changed));

  hbox.set_spacing(12);
  vbox.pack_start(hbox, true, true);

  hbox.pack_start(embed, true, true);

  stage = embed.get_stage();
  Clutter::Color stage_color;
  Clutter::Gtk::get_bg_color(*this, Gtk::STATE_NORMAL, stage_color);
  stage->set_color(stage_color);
  embed.set_size_request(640, 480);
  stage->signal_captured_event().connect(sigc::mem_fun(*this, &Event::on_stage_capture));

  hand = Clutter::Texture::create_from_file("../redhand.png");
  if(!hand)
    g_error("Unable to load pixbuf\n");

  stage->add_actor(hand);
  unsigned int width, height;
  hand->get_size(width, height);
  hand->set_position((CLUTTER_STAGE_WIDTH()/2) - (width/2), (CLUTTER_STAGE_HEIGHT()/2) - (height/2));
  hand->set_reactive();
  hand->signal_button_press_event().connect(sigc::mem_fun(*this, &Event::on_hand_button_press));

  Clutter::Color text_color;
  //Clutter::Gtk::get_text_color(*this, Gtk::STATE_NORMAL, text_color);
  clutter_entry = Clutter::Text::create("Sans 10", "", text_color);
  stage->add_actor(clutter_entry);
  clutter_entry->set_position(0, 0);
  clutter_entry->set_size(500, 20);

  vbox2.set_spacing(6);
  hbox.pack_start(vbox2);

  hbox_x.set_spacing(6);
  vbox2.pack_start(hbox_x, false, true);

  hbox_x.pack_start(label_x, true, true);
  hbox_x.pack_start(spin_x, true, true);
  spin_x.signal_value_changed().connect(sigc::mem_fun(*this, &Event::on_x_changed));
  
  hbox_y.set_spacing(6);
  vbox2.pack_start(hbox_y, false, true);

  hbox_y.pack_start(label_y, true, true);
  hbox_y.pack_start(spin_y, true, true);
  spin_y.signal_value_changed().connect(sigc::mem_fun(*this, &Event::on_y_changed));

  hbox_z.set_spacing(6);
  vbox2.pack_start(hbox_z, false, true);

  hbox_z.pack_start(label_z, true, true);
  hbox_z.pack_start(spin_z, true, true);
  spin_z.signal_value_changed().connect(sigc::mem_fun(*this, &Event::on_z_changed));

  hbox_opacity.set_spacing(6);
  vbox2.pack_start(hbox_opacity, false, true);

  hbox_opacity.pack_start(label_opacity, true, true);
  hbox_opacity.pack_start(spin_opacity, true, true);
  spin_opacity.signal_value_changed().connect(sigc::mem_fun(*this, &Event::on_opacity_changed));

  show_all();

  /* Only show/show_all the stage after parent show. widget_show will call
   * show on the stage.
  */
  stage->show_all();
}

Event::~Event()
{
}

void Event::on_gtk_entry_changed()
{
  clutter_entry->set_text(gtk_entry.get_text());
}

bool Event::on_stage_capture(Clutter::Event* event)
{
  if (event->type == CLUTTER_BUTTON_RELEASE)
    {
      int x, y;

      clutter_event_get_coords(event, &x, &y);

      g_print("Event captured at (%d, %d)\n", x, y);
    }

  return false;
}

bool Event::on_hand_button_press(Clutter::ButtonEvent* event)
{
  g_print("Button press on hand ('%s')\n", g_type_name(G_OBJECT_TYPE(hand->gobj())));

  return false;
}

void Event::on_x_changed()
{
  hand->set_rotation(Clutter::X_AXIS, spin_x.get_value(), 0, hand->get_height() / 2, 0);
}

void Event::on_y_changed()
{
  hand->set_rotation(Clutter::Y_AXIS, spin_y.get_value(), hand->get_width() / 2, 0, 0);
}

void Event::on_z_changed()
{
  hand->set_rotation(Clutter::Z_AXIS, spin_z.get_value(), hand->get_width() / 2, hand->get_height() / 2, 0);
}

void Event::on_opacity_changed()
{
  hand->set_opacity(spin_opacity.get_value());
}

