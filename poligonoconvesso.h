#ifndef POLIGONOCONVESSO_H
#define POLIGONOCONVESSO_H

#include "poligono.h"
#include <stdexcept>
#include <algorithm>


using std::vector;

class PoligonoConvesso : public Poligono
{
public:
  PoligonoConvesso();
  PoligonoConvesso(const PoligonoConvesso&);
  PoligonoConvesso(const std::vector<Vertice>&,unsigned int,string);
  vector<Vertice> get_vertici()const;
  static PoligonoConvesso* crea_poligono(PoligonoConvesso*);
  static PoligonoConvesso* crea_poligono(vector<Vertice>&);
  static vector<Vertice> grahamScan(vector<Vertice>&);

  virtual unsigned int size() const;
  virtual double get_perimetro() const =0;
  virtual double get_area() const =0;
  PoligonoConvesso* aggiungi_vertice(Vertice)const;
  PoligonoConvesso* rimuovi_vertice(Vertice)const;

  virtual bool operator ==(const PoligonoConvesso&);
  virtual bool operator !=(const PoligonoConvesso&);

protected:
  virtual void set_lati(const vector<Vertice>&) =0;
  std::vector<Vertice> Lista;
  PoligonoConvesso(const std::vector<Vertice>&,unsigned int,string,bool);
private:
  static void rimuovi_doppioni(vector<Vertice>&);
  static bool POLAR_ORDER(Vertice, Vertice);
  static double sqrDist(Vertice, Vertice);
  static double ccw(Vertice, Vertice, Vertice);
  static bool checkVector(vector<Vertice>&);

};
PoligonoConvesso* operator+(const PoligonoConvesso&,const PoligonoConvesso&);
PoligonoConvesso* operator-(const PoligonoConvesso&,const PoligonoConvesso&);



#endif // POLIGONOCONVESSO_H
