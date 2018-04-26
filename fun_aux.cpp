#include "fun_aux.h"

std::string to_string_nozero(double a){
  std::string s= std::to_string(a);
  int i=s.size()-1;
  bool out=false;
  while(s[i] != '.' && !out){
      if(s[i] == '0'){
        s.erase(s.size()-1,1);
        i--;
        }
      else
        out=true;
    }
  if(s[i]=='.') s.erase(s.size()-1,1);
  return s;
}
