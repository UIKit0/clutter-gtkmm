#include "event.h"
#include <iostream>

Event::Event()
: m_label_x("Rotate x-axis"),
  m_label_y("Rotate y-axis"),
  m_label_z("Rotate z-axis"),
  m_label_opacity("Adjust opacity"),
  m_adjustment_x(Gtk::Adjustment::create(0.0, 0.0, 360.0)),
  m_adjustment_y(Gtk::Adjustment::create(0.0, 0.0, 360.0)),
  m_adjustment_z(Gtk::Adjustment::create(0.0, 0.0, 360.0)),
  m_adjustment_opacity(Gtk::Adjustment::create(255.0, 0.0, 255.0)),
  m_spin_x(m_adjustment_x),
  m_spin_y(m_adjustment_y),
  m_spin_z(m_adjustment_z),
  m_spin_opacity(m_adjustment_opacity)
{
  set_title("clutter-gtkmm Interaction demo");
  set_default_size(800, 600);
  set_resizable(false);
  set_border_width(12);

  m_vbox.set_spacing(12);
  add(m_vbox);

  m_gtk_entry.set_text("Enter some text");
  m_vbox.pack_start(m_gtk_entry);
  m_gtk_entry.signal_changed().connect(sigc::mem_fun(*this, &Event::on_gtk_entry_changed));

  m_hbox.set_spacing(12);
  m_vbox.pack_start(m_hbox);

  m_hbox.pack_start(m_embed);

  m_stage = m_embed.get_stage();
  // Clutter::Color stage_color;
  // Clutter::Gtk::get_bg_color(*this, Gtk::STATE_NORMAL, stage_color);
  // m_stage->set_color(stage_color);
  m_embed.set_size_request(640, 480);
  m_stage->signal_captured_event().connect(sigc::mem_fun(*this, &Event::on_stage_capture));

  m_hand = Clutter::Texture::create_from_file("../redhand.png");
  if(!m_hand)
    g_error("Unable to load pixbuf\n");

  m_stage->add_actor(m_hand);
  gfloat width = 0;
  gfloat height = 0;
  m_hand->get_size(width, height);
  m_hand->set_position((CLUTTER_STAGE_WIDTH()/2) - (width/2), (CLUTTER_STAGE_HEIGHT()/2) - (height/2));
  m_hand->set_reactive();
  m_hand->signal_button_press_event().connect(sigc::mem_fun(*this, &Event::on_hand_button_press));

  // Clutter::Color text_color;
  // Clutter::Gtk::get_text_color(*this, Gtk::STATE_NORMAL, text_color);
  // m_clutter_entry = Clutter::Text::create("Sans 10", "", text_color);
  m_stage->add_actor(m_clutter_entry);
  m_clutter_entry->set_position(0, 0);
  m_clutter_entry->set_size(500, 20);

  m_vbox2.set_spacing(6);
  m_hbox.pack_start(m_vbox2);

  m_hbox_x.set_spacing(6);
  m_vbox2.pack_start(m_hbox_x, Gtk::PACK_SHRINK);

  m_hbox_x.pack_start(m_label_x);
  m_hbox_x.pack_start(m_spin_x);
  m_spin_x.signal_value_changed().connect(sigc::mem_fun(*this, &Event::on_x_changed));
  
  m_hbox_y.set_spacing(6);
  m_vbox2.pack_start(m_hbox_y, Gtk::PACK_SHRINK);

  m_hbox_y.pack_start(m_label_y);
  m_hbox_y.pack_start(m_spin_y);
  m_spin_y.signal_value_changed().connect(sigc::mem_fun(*this, &Event::on_y_changed));

  m_hbox_z.set_spacing(6);
  m_vbox2.pack_start(m_hbox_z, Gtk::PACK_SHRINK);

  m_hbox_z.pack_start(m_label_z);
  m_hbox_z.pack_start(m_spin_z);
  m_spin_z.signal_value_changed().connect(sigc::mem_fun(*this, &Event::on_z_changed));

  m_hbox_opacity.set_spacing(6);
  m_vbox2.pack_start(m_hbox_opacity, Gtk::PACK_SHRINK);

  m_hbox_opacity.pack_start(m_label_opacity);
  m_hbox_opacity.pack_start(m_spin_opacity);
  m_spin_opacity.signal_value_changed().connect(sigc::mem_fun(*this, &Event::on_opacity_changed));

  show_all_children();
}

Event::~Event()
{
}

void Event::on_gtk_entry_changed()
{
  m_clutter_entry->set_text(m_gtk_entry.get_text());
}

bool Event::on_stage_capture(Clutter::Event* event)
{
  if(event->type == CLUTTER_BUTTON_RELEASE)
  {
    gfloat x = 0;
    gfloat y = 0;
    clutter_event_get_coords(event, &x, &y);

    std::cout << "Event captured at (" << x << ", " << y << ")" << std::endl;
  }

  return false;
}

bool Event::on_hand_button_press(Clutter::ButtonEvent*)
{
  g_print("Button press on hand ('%s')\n", g_type_name(G_OBJECT_TYPE(m_hand->gobj())));

  return false;
}

void Event::on_x_changed()
{
  m_hand->set_rotation(Clutter::X_AXIS, m_spin_x.get_value(), 0, m_hand->get_height() / 2, 0);
}

void Event::on_y_changed()
{
  m_hand->set_rotation(Clutter::Y_AXIS, m_spin_y.get_value(), m_hand->get_width() / 2, 0, 0);
}

void Event::on_z_changed()
{
  m_hand->set_rotation(Clutter::Z_AXIS, m_spin_z.get_value(), m_hand->get_width() / 2, m_hand->get_height() / 2, 0);
}

void Event::on_opacity_changed()
{
  m_hand->set_opacity(m_spin_opacity.get_value());
}

