#ifndef ZONEDESSIN_H
#define ZONEDESSIN_H

#include "FigureGeometrique.hpp"
#include <vector>
#include <gtkmm.h>

class ZoneDessin :public Gtk::DrawingArea
{
private:
	std::vector<FigureGeometrique*> _figures;
public:
	ZoneDessin();
	~ZoneDessin();
	
};

#endif