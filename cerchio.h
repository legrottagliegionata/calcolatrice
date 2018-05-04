#ifndef CERCHIO_H
#define CERCHIO_H
#include "shape.h"
#include <cmath>
class Cerchio : public Shape
{
	private:
		Vertice origine;
		double raggio;
	public:
		Cerchio(const Vertice&, double);
		Cerchio(const Cerchio&);
		double get_raggio() const;
		Vertice get_origine()const;
		void set_origine(const Vertice&);
		double get_perimetro()const;
		double get_area()const;
		string toString() const;
		//Cerchio operator+ ()
};
std::ostream& operator<<(std::ostream&,const Cerchio&);

#endif // CERCHIO_H
