# Build the generate_extra_defs utility executable.
# This is not used directly to build the rest of the project.

LIBS = -lglibmm_generate_extra_defs-2.4

noinst_PROGRAMS = generate_extra_defs_clutter_gtk
generate_extra_defs_clutter_gtk_SOURCES = generate_defs_clutter_gtk.cc

generate_extra_defs_clutter_gtk_CXXFLAGS = $(CLUTTER_GTKMM_CFLAGS)
generate_extra_defs_clutter_gtk_LDADD = $(CLUTTER_GTKMM_LIBS)
