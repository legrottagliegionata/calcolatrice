#include <QCoreApplication>

#include<iostream>

#include <cstdio>
#include <stack>
#include <algorithm>
using namespace std;
#include "poligonoconvesso.h"



int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

    Vertice v1(0,0);
    Vertice v2(1,1);
    Vertice v3(2,2);
    Vertice v4(3,-1);
    Vertice v5(4,1);
    Vertice v6(0,1);
    Vertice v7(2,0);
    vector<Vertice> P;
    P.push_back(v1);
    P.push_back(v2);
    P.push_back(v3);
    P.push_back(v4);
    P.push_back(v5);
    P.push_back(v6);
    P.push_back(v7);
cout<<"ciaoooo";
    vector<Vertice> hull = grahamScan(P);
cout<<"ciaoooo";
    while (!hull.empty())   {
        Vertice p = hull[hull.size()-1];
        hull.pop_back();
        std::cout<<"("<<p.get_X()<<","<<p.get_Y()<<")"<<endl;
    }

    return a.exec();
  }
