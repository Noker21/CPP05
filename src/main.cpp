//#include "Ligne.hpp"
//#include "PolygoneRegulier.hpp"
#include <iostream>
#include <vector>
#include "ViwerFigures.h"


int main(int argc, char ** argv){
	/*Couleur rouge {0,1,0};
	Point p0{100,200};
	Point p1{100,200};
	
	//PolygoneRegulier P(rouge,p0,50,5);
	//P.afficher();
	//l.afficher();
	
	std::vector<FigureGeometrique*> figure;
	figure.push_back(new PolygoneRegulier (rouge,p0,50,5));
	figure.push_back(new Ligne (rouge,p0,p1));
		
		for(FigureGeometrique *f :figure){
			f->afficher();
			}
		for(FigureGeometrique *f :figure){
		delete f;
			}
	*/
	ViewerFigures VF(argc,argv);

	Gtk::Label label(" Hello world ! ");
	VF._window.set_title("AAAA SMITEEK !!!!");
	VF._window.add(label);
	VF._window.set_default_size(640,480);
	VF._window.show_all();

	VF.run();


	/*Gtk::Main kit(argc, argv); // application gtkmm
    Gtk::Window window; // fenetre principale
    Gtk::Label label(" Hello world ! "); // message
    window.add(label);
    window.show_all();
    kit.run(window); // lance la boucle evenementielle
    */
    return 0;
}
