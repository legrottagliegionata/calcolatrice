#include <QCoreApplication>

#include<iostream>
#include "triangolo.h"
using namespace std;



int main(int argc, char *argv[])
{
 // QCoreApplication a(argc, argv);

    Vertice v1(0,0);
    Vertice v2(1,1);
    Vertice v3(10,1);
    Vertice v4(-1,0.5);
    Vertice v5(0,0);

    vector<Vertice> P;
    P.push_back(v1);
    P.push_back(v3);
    P.push_back(v2);
    P.push_back(v4);
    P.push_back(v5);

    try{
    Shape* T= crea_poligono(P);
    cout<<*T;
    delete T;
    }
    catch(std::invalid_argument& e){
      std::cerr << e.what() << std::endl;
    }



    //return a.exec();
  }
// valgrind --vgdb=yes --leak-check=full --show-leak-kinds=all ./calcolatrice

