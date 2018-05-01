#include <QCoreApplication>

#include<iostream>
#include"poligonoconvesso.h"

using namespace std;



int main(int argc, char *argv[])
{
 // QCoreApplication a(argc, argv);

    Vertice v1(1,5);
    Vertice v2(0,0);
    Vertice v3(2,0);
    Vertice v4(3,5);


    vector<Vertice> P;
    P.push_back(v1);
    P.push_back(v3);
    P.push_back(v2);

    try{
    Shape* T= crea_poligono(P);
    Shape* Q= static_cast<PoligonoConvesso*>(T)->aggiungi_vertice(v4) ;
    //cout<<"area quad: "<<static_cast<PoligonoConvesso*>(Q)->get_area()<<endl ;
    //cout<<*T<<endl;
    delete T;
    //cout<<*Q<<endl;
    }
    catch(std::invalid_argument& e){
      std::cerr << e.what() << std::endl;
    }

    //return a.exec();
  }
// valgrind --vgdb=yes --leak-check=full --show-leak-kinds=all ./calcolatrice

