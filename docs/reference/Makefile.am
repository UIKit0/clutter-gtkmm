
doxygen_configfile = Doxyfile

EXTRA_DIST	= README $(doxygen_configfile)

include $(top_srcdir)/docs/Makefile_web.am_fragment
web_path_reference = $(web_path_docs)reference

clutter-gtkmm-reference: $(doxygen_configfile)
	doxygen $(doxygen_configfile)

clutter-gtkmm-reference-html: clutter-gtkmm-reference

clutter-gtkmm-reference-html.tar.gz: clutter-gtkmm-reference-html
	tar -cf - $< | gzip > $@

post-html: html/index.html
	rsync $(rsync_args) -r html/ $$USER@$(web_host):$(web_path_reference)/html/

all-local: clutter-gtkmm-reference

clean-local:
	-rm -rf html
	-rm -f clutter-gtkmm-reference-html.tar.gz

