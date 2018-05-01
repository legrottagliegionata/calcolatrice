#include <QCoreApplication>

#include<iostream>
#include"poligonoconvesso.h"
#include"triangolo.h"
#include"quadrilatero.h"
using namespace std;

using std::cout;

int main(int argc, char *argv[])
{
  //QCoreApplication a(argc, argv);


  vector<Vertice> P= {Vertice(0,0) , Vertice(0,2) , Vertice(1,4) , Vertice(3,4), Vertice(3,2) , Vertice(2,0)};

    try{
      PoligonoConvesso *p = crea_poligono(P);
      cout<<*p<<endl;
    }
    catch(std::invalid_argument& e){
      std::cerr << e.what() << std::endl;
    }

   // return a.exec();
  }
// valgrind --vgdb=yes --leak-check=full --show-leak-kinds=all ./calcolatrice

