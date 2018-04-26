#ifndef PUNTO_H
#define PUNTO_H


#include <ostream>
#include<string>
using std::string;
#include"fun_aux.h"
#include <cmath>
class Punto
{
	private:
		double x,y;
	public:
		Punto() =default;
		Punto(double,double);
		Punto(const Punto&);
		virtual ~Punto()=default;
		double get_X()const;
		double get_Y()const;
		virtual std::string toString() const;

//		overraiding operatori
		virtual bool operator==(const Punto&)const;
		virtual bool operator!=(const Punto&)const;
		virtual bool operator<(const Punto&)const;

};
string remove_zeros(double);
double distanza(const Punto&, const Punto&);
std::ostream& operator<<(std::ostream&,Punto&);

#endif // PUNTO_H
