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

<<<<<<< HEAD

  vector<Vertice> P= { Vertice(-2,3) , Vertice(-2,4),Vertice(3,4),Vertice(3,1),Vertice(2,0),Vertice(-1,0),Vertice(0,-1),Vertice(0.8,6),Vertice(1.1,8) };

=======
    Vertice v1(1,5);
    Vertice v2(0,0);
    Vertice v3(2,0);
    Vertice v4(3,5);
    Vertice v5(-2,3);

    vector<Vertice> P;
    P.push_back(v1);
    P.push_back(v3);
    P.push_back(v2);
    P.push_back(v4);
>>>>>>> parent of 7c06b29... esagono
    try{
      PoligonoConvesso *p = crea_poligono(P);
      PoligonoConvesso *q = p;
      p = p->aggiungi_vertice(v5);
      delete q;
      cout<<*p<<"ciaoc"<<endl;
      delete p;



    }
    catch(std::invalid_argument& e){
      std::cerr << e.what() << std::endl;
    }

   // return a.exec();
  }
// valgrind --vgdb=yes --leak-check=full --show-leak-kinds=all ./calcolatrice

