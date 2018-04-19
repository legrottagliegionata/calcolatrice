#ifndef POLIGONO_H
#define POLIGONO_H

#include "vertice.h"
#include<vector>
#include<iostream>
class Poligono
{
	private:
		static unsigned int n_poligoni;
	protected:
		unsigned int id=0;
		std::vector<Vertice> Lista;
	public:
		virtual ~Poligono()=default;
		Poligono();
		Poligono(const std::vector<Vertice>&);
		Poligono(const Poligono&);

		virtual unsigned int size() const; // restituisce il numero di vertici
		virtual double get_perimetro()const =0;
		virtual double get_area()const =0;

		/*virtual bool operator==(const Poligono&)const ;
		virtual bool operator!=(const Poligono&)const ;
		virtual Poligono& operator+(const Poligono&);
		virtual Poligono& operator-(const Poligono&);*/
};
#endif // POLIGONO_H
