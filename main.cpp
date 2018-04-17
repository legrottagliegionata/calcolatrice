#include <QCoreApplication>

#include "vertice.h"
#include <iostream>
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  Vertice c(1,2);

  std::cout<<c;
  return a.exec();
}
