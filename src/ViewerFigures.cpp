#include "ViwerFigures.h"

ViewerFigures::ViewerFigures(int argc, char ** argv){
	_kit = new Gtk::Main(argc,argv);
}
void ViewerFigures::run(){
    _kit->run(_window);
}