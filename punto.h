#ifndef PUNTO_H
#define PUNTO_H


#include <ostream>
#include<string>
using std::string;
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
		std::string get_X_string() const;
		std::string get_Y_string() const;

//		overraiding operatori
		virtual bool operator==(const Punto&)const;
		virtual bool operator!=(const Punto&)const;
		virtual bool operator<(const Punto&)const;

};
string remove_zeros(double);
double distanza(const Punto&, const Punto&);
std::ostream& operator<<(std::ostream&,Punto&);

#endif // PUNTO_H
