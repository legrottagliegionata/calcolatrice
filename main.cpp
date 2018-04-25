#include <QCoreApplication>

#include<iostream>
#include"poligonoconvesso.h"
using namespace std;



int main(int argc, char *argv[])
{
 // QCoreApplication a(argc, argv);

    Vertice v1(0,0);
    Vertice v2(0,5);
    Vertice v3(5,5);
    Vertice v4(5,0);


    vector<Vertice> P;
    P.push_back(v1);
    P.push_back(v3);
    P.push_back(v2);

    try{
    Shape* T= crea_poligono(P);
    Shape* Q= static_cast<PoligonoConvesso*>(T)->aggiungi_vertice(v4) ;
    cout<<*T;
    delete T;
    cout<<*Q;
    }
    catch(std::invalid_argument& e){
      std::cerr << e.what() << std::endl;
    }



    //return a.exec();
  }
// valgrind --vgdb=yes --leak-check=full --show-leak-kinds=all ./calcolatrice

