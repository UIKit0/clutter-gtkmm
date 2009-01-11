#include <gtkmm.h>
#include <clutter-gtkmm.h>

#include "event.h"

int main(int argc, char** argv)
{
	// init cluttermm-gtk
	Clutter::Gtk::init(&argc, &argv);

	// init gtkmm
	Gtk::Main kit(argc, argv);

	Event event;

  kit.run(event);

  return 0;
}
