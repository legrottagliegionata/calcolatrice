#include <QCoreApplication>

#include<iostream>

using namespace std;
#include "triangolo.h"


int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

    Vertice v1(0,0);
    Vertice v2(0,1);
    Vertice v3(0,2);
    Vertice v4(0,-1);
    Vertice v5(0,4);
    vector<Vertice> P;
    P.push_back(v1);
    P.push_back(v2);
    P.push_back(v3);
    P.push_back(v4);
    P.push_back(v5);
    Triangolo T( grahamScan(P));
    cout<<T;

    return a.exec();
  }
