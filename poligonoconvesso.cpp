#include "poligonoconvesso.h"
#include "triangolo.h"
#include "quadrilatero.h"
#include "pentagono.h"
#include "esagono.h"
#include"ettagono.h"
#include"ottagono.h"
#include"ennagono.h"
#include"decagono.h"
PoligonoConvesso::PoligonoConvesso(){}
PoligonoConvesso::PoligonoConvesso(const PoligonoConvesso& p):Shape(),Lista(p.Lista){}
PoligonoConvesso::PoligonoConvesso(const vector<Vertice>& V, unsigned int x, std::string name):Shape(),Lista(V){
  const_cast<vector<Vertice>&>(V) = grahamScan(const_cast<vector<Vertice>&>(V));
  if(V.size() == x){
      Lista = V;
    }else{
      reduce_n_shape();
      throw  std::invalid_argument("Impossibile creare un "+ name +" utilizzando questi vertici");
    }
}
unsigned int PoligonoConvesso::size()const{return Lista.size();}

PoligonoConvesso* PoligonoConvesso::aggiungi_vertice(const Vertice& v){
  vector<Vertice> newVector(Lista);
  newVector.push_back(v);
  return crea_poligono(newVector);
}

PoligonoConvesso* PoligonoConvesso::rimuovi_vertice(const Vertice& v){
  bool found = false;

  vector<Vertice> V(Lista);
  auto it = V.begin();
  for(; it != V.end() && !found; ){
      if(*it == v){
          found=true;}
      else ++it;
    }
  if(found){
      V.erase(it);
      return crea_poligono(V);

    }
  else{
      std::invalid_argument("Vertice non trovato");
    }
  return nullptr;
}

vector<Vertice> PoligonoConvesso::get_vertici()const{return Lista;}

// Le prossime funzioni vengono utilizzate per filtrare il vector<Vertice> che viene utilizzato per costruire
// un poligono. Vengono rimossi tutti i vertici che non possono far parte del poligono, ad esempio i punti interni.

Vertice pivot;

int ccw(Vertice a, Vertice b, Vertice c) {
    int area = (b.get_X() - a.get_X()) * (c.get_Y() - a.get_Y()) - (b.get_Y() - a.get_Y()) * (c.get_X() - a.get_X());
    if (area > 0)
        return -1;
    else if (area < 0)
        return 1;
    return 0;
}

// restituisce il quadrato della distanza euclidea tra due punti
int sqrDist(Vertice a, Vertice b)  {
    int dx = a.get_X() - b.get_X(), dy = a.get_Y() - b.get_Y();
    return dx * dx + dy * dy;
}
// ordinamento dei punti in ordine polare
bool POLAR_ORDER(Vertice a, Vertice b)  {
    int order = ccw(pivot, a, b);
    if (order == 0)
        return sqrDist(pivot, a) < sqrDist(pivot, b);
    return (order == -1);
}
// controllo che la somma di tutti gli angoli non superi il massimo consentito.
bool checkVector(vector<Vertice>&Points){
  double somma=0;
  unsigned int b=0;
  for(auto itb=Points.begin(); itb != Points.end();itb++){
      unsigned int a,c;
      if(b==0) {a=Points.size()-1; c=b+1;}
      else if(b==Points.size()-1){c=0; a=b-1;}
      else {a=b-1; c=b+1;}
      double angolo=  get_Angolo(Points[b],Points[a],Points[c]);
      if(angolo == 180) {
          Points.erase(itb);
          angolo=0;
        }else{
          b++;
        }
      if(angolo > 180) return false;
      somma+= angolo;
      if(somma > (180*(Points.size()-2)) || somma==0) return false;

    }
    return true;
}
//Rimuove eventuali vertici doppioni
void rimuovi_doppioni(vector<Vertice>& V ){
  for(auto i=V.begin();i!= V.end();i++){
      for(auto j=i+1; j!=V.end();j++){
          if(*i==*j) {V.erase(j); j--;}
        }
    }
}
vector<Vertice> grahamScan(vector<Vertice>& Points)    {

    rimuovi_doppioni(Points);
    vector<Vertice> hull;
    int N= Points.size();

    // find the Vertice having the least y coordinate (pivot),
    // ties are broken in favor of lower x coordinate
    int leastY = 0;
    for (int i = 1; i < N; i++)
        if (Points[i] < Points[leastY])
            leastY = i;

    // swap the pivot with the first vertice
    Vertice temp = Points[0];
    Points[0] = Points[leastY];
    Points[leastY] = temp;
    if (N < 3 )
        throw  std::invalid_argument("Vertici non validi per la creazione di un Poligono.");
    //ordinamento polare del vettore Points
    pivot = Points[0];
    sort(Points.begin()++, Points.end(), POLAR_ORDER);
    hull.push_back(Points[0]);
    hull.push_back(Points[1]);
    hull.push_back(Points[2]);

    for (int i = 3; i < N; i++) {
        Vertice top = hull[hull.size()-1];
        hull.pop_back();
        while (ccw(hull[hull.size()-1], top, Points[i]) != -1)   {
            top = hull[hull.size()-1];
            hull.pop_back();
        }
        hull.push_back(top);
        hull.push_back(Points[i]);
    }

    std::reverse(hull.begin(),hull.end());
    if (!checkVector(hull))
        throw  std::invalid_argument("Vertici non validi per la creazione di un Poligono.");
    return hull;
}

PoligonoConvesso* crea_poligono(const vector<Vertice>& V){
  // ricevo un vettore di vertici, elimino eventuali vertici inutili, e se 3 <= N <=X costruisco un poligono

  try{
   const_cast<vector<Vertice>&>(V) =grahamScan(const_cast<vector<Vertice>&>(V));
    if(V.size()>10) throw  std::invalid_argument("Nel modello non è incluso un poligono di queste dimensioni");
   switch (V.size()) {
     case 3:
       return new Triangolo(V);
       break;
     case 4:
       return new Quadrilatero(V);
       break;
     case 5:
       return new Pentagono(V);
       break;
     case 6:
       return new Esagono(V);
       break;
     case 7:
       return new Ettagono(V);
       break;
     case 8:
       return new Ottagono(V);
       break;
     case 9:
       return new Ennagono(V);
       break;
     case 10:
       return new Decagono(V);
       break;

     default:
       throw  std::invalid_argument("Impossibile creare un poligono di questa dimensione");
       break;
     }
  }
  catch(std::invalid_argument& e){
    std::cerr << e.what() << std::endl;
  }
  return 0;
}

PoligonoConvesso* crea_poligono(PoligonoConvesso* P){
  // ricevo un vettore di vertici, elimino eventuali vertici inutili, e se 3 <= N <=X costruisco un poligono

  try{
   vector<Vertice> V = P->get_vertici();
   V=grahamScan(V);
   switch (V.size()) {
     case 3:
       return new Triangolo(V);
       break;
     case 4:
       return new Quadrilatero(V);
       break;
     case 5:
       return new Pentagono(V);
       break;
     case 6:
       return new Esagono(V);
       break;
     case 7:
       return new Ettagono(V);
       break;
     case 8:
       return new Ottagono(V);
       break;
     case 9:
       return new Ennagono(V);
       break;
     case 10:
       return new Decagono(V);
       break;
     default:
       throw  std::invalid_argument("Impossibile creare un poligono di questa dimensione");
       break;
     }
  }
  catch(std::invalid_argument& e){
    std::cerr << e.what() << std::endl;
  }
  return 0;
}


