#ifndef VERTICE_H
#define VERTICE_H

#define _USE_MATH_DEFINES
#include <cmath>
#include "punto.h"
class Vertice: public Punto
{
	public:
		Vertice()=default;
		Vertice(double,double);
		Vertice(const Vertice&);
		std::string toString() const;
		static double get_Angolo(const Vertice&, const Punto&, const Punto &);


};
#endif // VERTICE_H
