#ifndef PUNTO_H
#define PUNTO_H


#include <ostream>
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

//		overraiding operatori
		virtual bool operator==(const Punto&)const;
		virtual bool operator!=(const Punto&)const;
		virtual bool operator<(const Punto&)const;

};

double distanza(const Punto&, const Punto&);
std::ostream& operator<<(std::ostream&,Punto&);

#endif // PUNTO_H
