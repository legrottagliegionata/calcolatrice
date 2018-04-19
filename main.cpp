#include <QCoreApplication>

#include<iostream>

using namespace std;
#include "poligonoconvesso.h"



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
    vector<Vertice> hull = grahamScan(P);
    cout<<hull.size();
    while (!hull.empty())   {
        Vertice p = hull[hull.size()-1];
        hull.pop_back();
        std::cout<<"("<<p.get_X()<<","<<p.get_Y()<<")"<<endl;
    }

    return a.exec();
  }
