all: freecupholder

freecupholder:
	gcc freecupholder.c -o freecupholder

clean:
	rm freecupholder

distclean: clean
	rm freecupholder

install:
	cp freecupholder /usr/bin/freecupholder

uninstall:
	rm /usr/bin/freecupholder
