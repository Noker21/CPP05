#include "PolygoneRegulier.hpp"
#define PI 3.141592
#include <math.h>
#include <iostream>
PolygoneRegulier::PolygoneRegulier(const Couleur & couleur,const Point & centre,int rayon,int nbCotes):FigureGeometrique(couleur){
	
	_nbPoints=nbCotes;
	_points=new Point[nbCotes];
	for(int i=0;i<nbCotes;i++){
		Point p;
		float alpha=i* PI *2/nbCotes;
		p._x=rayon * cos(alpha)+ centre._x;
		p._y=rayon * sin(alpha) + centre._y;
		_points[i]=p;
	}
}
PolygoneRegulier::~PolygoneRegulier(){};

void PolygoneRegulier::afficher() const{
	std::cout<<"Polygone Regulier:   "<<_couleur._r<<"."<<_couleur._g<<"."<<_couleur._b<<"."<<" ";
	for(int i=0;i<_nbPoints;i++){
	std::cout<<" "<<_points[i]._x<<" "<<_points[i]._y;
	}
	std::cout<<std::endl;
	}
int  PolygoneRegulier::getNbPoints() const{
	return _nbPoints;
}

const 	Point & PolygoneRegulier::getPoint(int indice) const{
return _points[indice];
}
