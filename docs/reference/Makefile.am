
doxygen_configfile = Doxyfile
web_path_reference = /home/groups/g/gt/gtkmm/htdocs/gtkmm2DONTUPLOADTHIS/reference

EXTRA_DIST	= README $(doxygen_configfile)


clutter-gtkmm-reference: $(doxygen_configfile)
	doxygen $(doxygen_configfile)

clutter-gtkmm-reference-html: clutter-gtkmm-reference

clutter-gtkmm-reference-html.tar.gz: clutter-gtkmm-reference-html
	tar -cf - $< | gzip > $@


post-html: clutter-gtkmm-reference
	(cd html && tar -cf - *.html *.gif *.css | gzip -3 | \
	 ssh $$SSH_OPT $$USER@gtkmm.sourceforge.net "cd $(web_path_reference)/html ; gunzip | tar -xvf - ; chmod a+r,g+w * ; chgrp gtkmm *")


all-local: clutter-gtkmm-reference

clean-local:
	-rm -rf html
	-rm -f clutter-gtkmm-reference-html.tar.gz

