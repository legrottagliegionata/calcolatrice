#include "poligonoconvesso.h"
PoligonoConvesso::PoligonoConvesso():Poligono(){}
PoligonoConvesso::PoligonoConvesso(const PoligonoConvesso& p):Poligono(p){}
PoligonoConvesso::PoligonoConvesso(const std::vector<Vertice>& V){
  try{
    Lista= grahamScan(const_cast<vector<Vertice>&>(V));
  }
  catch(std::invalid_argument& e){
    std::cerr << e.what() << std::endl;
  }
}
unsigned int PoligonoConvesso::size()const{return Lista.size();}




// Vertice having the least y coordinate, used for sorting other Vertices
// according to polar angle about this Vertice
Vertice pivot;
// returns -1 if a -> b -> c forms a counter-clockwise turn,
// +1 for a clockwise turn, 0 if they are collinear
int ccw(Vertice a, Vertice b, Vertice c) {
    int area = (b.get_X() - a.get_X()) * (c.get_Y() - a.get_Y()) - (b.get_Y() - a.get_Y()) * (c.get_X() - a.get_X());
    if (area > 0)
        return -1;
    else if (area < 0)
        return 1;
    return 0;
}
// returns square of Euclidean distance between two Points
int sqrDist(Vertice a, Vertice b)  {
    int dx = a.get_X() - b.get_X(), dy = a.get_Y() - b.get_Y();
    return dx * dx + dy * dy;
}
// used for sorting Points according to polar order w.r.t the pivot
bool POLAR_ORDER(Vertice a, Vertice b)  {
    int order = ccw(pivot, a, b);
    if (order == 0)
        return sqrDist(pivot, a) < sqrDist(pivot, b);
    return (order == -1);
}
bool checkVector(vector<Vertice>&Points){
   bool X=false,Y=false;
   if(Points.size()>0){
       double x = Points[0].get_X(), y=Points[0].get_Y();

       for(auto it=Points.begin();it!=Points.end();it++){
         if(x != it->get_X()) X=true;
         if(y != it->get_Y()) Y=true;
         x= it->get_X();
         y= it->get_Y();
         }
     }else return false;
   if(!X || !Y) return false;
   else return true;
}
vector<Vertice> grahamScan(vector<Vertice>& Points)    {

    vector<Vertice> hull;
    int N= Points.size();
    if (N < 3 || !checkVector(Points))
        throw  std::invalid_argument("Vertici non validi per la creazione di un Poligono.");

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

    // sort the remaining Vertice according to polar order about the pivot
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
    return hull;
}


