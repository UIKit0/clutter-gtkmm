#include <gtkmm.h>
#include <cluttermm.h>
#include <clutter-gtkmm.h>

class Event : public Gtk::Window
{
public:
  Event();
  ~Event();

protected:
  virtual void on_gtk_entry_changed();
  virtual bool on_stage_capture(Clutter::Event* event);
  virtual bool on_hand_button_press(Clutter::ButtonEvent* event);
  virtual void on_x_changed();
  virtual void on_y_changed();
  virtual void on_z_changed();
  virtual void on_opacity_changed();

  Gtk::VBox vbox, vbox2;
  Gtk::HBox hbox, hbox_x, hbox_y, hbox_z, hbox_opacity;
  Gtk::Entry gtk_entry;
  Gtk::Button button;
  Gtk::Label label_x, label_y, label_z, label_opacity;
  Gtk::Adjustment adjustment_x, adjustment_y, adjustment_z, adjustment_opacity;
  Gtk::SpinButton spin_x, spin_y, spin_z, spin_opacity;

  Clutter::Gtk::Embed embed;
  Glib::RefPtr<Clutter::Stage> stage;
  Glib::RefPtr<Clutter::Texture> hand;
  Glib::RefPtr<Clutter::Text> clutter_entry;
  
};
