
Debian
====================
This directory contains files used to package bitcrexcoind/bitcrexcoin-qt
for Debian-based Linux systems. If you compile bitcrexcoind/bitcrexcoin-qt yourself, there are some useful files here.

## bitcrexcoin: URI support ##


bitcrexcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install bitcrexcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your bitcrexcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/bitcrexcoin128.png` to `/usr/share/pixmaps`

bitcrexcoin-qt.protocol (KDE)

