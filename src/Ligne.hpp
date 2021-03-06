#ifndef LIGNE_HPP_
#define LIGNE_HPP_
#include "FigureGeometrique.hpp"
#include "Point.hpp"
class Ligne:public FigureGeometrique {
	
		private:
	Point _p0,_p1;
		public:
	Ligne(const Couleur & couleur, Point & p0, Point & p1);
	~Ligne();
	void afficher() const override;
	const Point & getP0() const ;
	const Point & getP1() const;

};
#endif
