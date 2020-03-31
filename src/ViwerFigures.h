#ifndef VIWERGIGURES_H
#define VIWERGIGURES_H
#include "FigureGeometrique.hpp"
#include "Point.hpp"

#include <gtkmm.h>

class ViewerFigures {
	
	public:
		Gtk::Main* 	_kit;
		Gtk::Window _window;
		ViewerFigures(int argc, char ** argv);
		void run();
};
#endif
