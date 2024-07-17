
Debian
====================
This directory contains files used to package evo_nodesd/evo_nodes-qt
for Debian-based Linux systems. If you compile evo_nodesd/evo_nodes-qt yourself, there are some useful files here.

## evo_nodes: URI support ##


evo_nodes-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install evo_nodes-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your evo_nodes-qt binary to `/usr/bin`
and the `../../share/pixmaps/evo_nodes128.png` to `/usr/share/pixmaps`

evo_nodes-qt.protocol (KDE)

