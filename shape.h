#ifndef SHAPE_H
#define SHAPE_H

#include "vertice.h"
#include<vector>
#include <string>
#include<iostream>
#include<sstream>

using std::string;
using std::stringstream;
class Shape
{
	friend std::ostream& operator<< (std::ostream&,const Shape&);
	private:
		static unsigned int n_shape;
	protected:
		unsigned int id=0;
		virtual string toString() const =0;

	public:
		virtual ~Shape()=default;
		Shape();

		/*virtual bool operator==(const Poligono&)const ;
		virtual bool operator!=(const Poligono&)const ;
		virtual Poligono& operator+(const Poligono&);
		virtual Poligono& operator-(const Poligono&);*/
};

#endif // SHAPE_H
