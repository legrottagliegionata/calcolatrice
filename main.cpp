#include <QCoreApplication>

#include<iostream>
#include"poligonoconvesso.h"
#include"cerchio.h"

using namespace std;

using std::cout;


int main(int argc, char *argv[])
{
  //QCoreApplication a(argc, argv);

  vector<Vertice> P= {Vertice(3,4),Vertice(3,1),Vertice(2.8,0),Vertice(-1,0),Vertice(0,-1),Vertice(0.5,9),Vertice(1,9),Vertice(2.8,8),Vertice(1,-1) };

  vector<Vertice> Q={Vertice(3,4),Vertice(3,1),Vertice(2.8,0)};
    try{
      PoligonoConvesso *p = PoligonoConvesso::crea_poligono(P);
      PoligonoConvesso *t = PoligonoConvesso::crea_poligono(Q);
      PoligonoConvesso *q=*static_cast<PoligonoConvesso*>(p) - *static_cast<PoligonoConvesso*>(t);


      cout<<endl;
      Shape *c = new Cerchio(Vertice(1,4),9);
      vector<Shape*> S = {p , t , q , c};
      for(unsigned int i=0;i<S.size();i++){
          cout<<S[i]->toString()<<endl;
        }
      cout<<endl<<endl;
      Cerchio a(Vertice(0,0),5);
      Cerchio b = a - 4 ;
      cout<<"B: "<<b<<endl<<"A: "<<a<<endl;
    }
    catch(std::invalid_argument& e){
      std::cerr << e.what() << std::endl;
    }

   // return a.exec();
  }
// valgrind --vgdb=yes --leak-check=full --show-leak-kinds=all ./calcolatrice

