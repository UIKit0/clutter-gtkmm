#include <gtkmm.h>
#include <cluttermm.h>
#include <clutter-gtkmm.h>

class Event : public Gtk::Window
{
public:
  Event();
  ~Event();

protected:
  void on_gtk_entry_changed();
  bool on_stage_capture(Clutter::Event* event);
  bool on_hand_button_press(Clutter::ButtonEvent* event);
  void on_x_changed();
  void on_y_changed();
  void on_z_changed();
  void on_opacity_changed();

  Gtk::VBox m_vbox, m_vbox2;
  Gtk::HBox m_hbox, m_hbox_x, m_hbox_y, m_hbox_z, m_hbox_opacity;
  Gtk::Entry m_gtk_entry;
  Gtk::Button m_button;
  Gtk::Label m_label_x, m_label_y, m_label_z, m_label_opacity;
  Gtk::Adjustment m_adjustment_x, m_adjustment_y, m_adjustment_z, m_adjustment_opacity;
  Gtk::SpinButton m_spin_x, m_spin_y, m_spin_z, m_spin_opacity;

  Clutter::Gtk::Embed m_embed;
  Glib::RefPtr<Clutter::Stage> m_stage;
  Glib::RefPtr<Clutter::Texture> m_hand;
  Glib::RefPtr<Clutter::Text> m_clutter_entry;
};

