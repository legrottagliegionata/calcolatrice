#include <QCoreApplication>

#include<iostream>
#include"poligonoconvesso.h"
#include"triangolo.h"
#include"quadrilatero.h"
using namespace std;



int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

    Vertice v1(1,5);
    Vertice v2(0,0);
    Vertice v3(2,0);
    Vertice v4(3,5);


    vector<Vertice> P;
    P.push_back(v1);
    P.push_back(v3);
    P.push_back(v2);
    try{
      Shape *p = crea_poligono(P);
      cout<<p->get_id()<<std::endl;

      Shape* x = crea_poligono(static_cast<PoligonoConvesso*>(p));
      cout<<"Id: "<<x->get_id()<<std::endl;

    }
    catch(std::invalid_argument& e){
      std::cerr << e.what() << std::endl;
    }



    try{
      Shape* q = new Triangolo(P);
      cout<<"Id: "<<q->get_id()<<std::endl;
    }
    catch(std::invalid_argument& e){
      std::cerr << e.what() << std::endl;
    }

    return a.exec();
  }
// valgrind --vgdb=yes --leak-check=full --show-leak-kinds=all ./calcolatrice

