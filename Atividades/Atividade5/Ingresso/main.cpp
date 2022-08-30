#include <iostream>
#include <string>
#include "Ingresso.hpp"
#include "IngressoVIP.hpp"
using namespace std;

int main(){
  cout<<"\n---------------------------------------------------------------------------\n\n\n Banca de Ingressos\n\n\n ---------------------------------------------------------------------------"<<endl;

  int dec;
  double v=15;
  double add = 4;

  cout<<"\nTipos de Ingressos:\n\n Digite 1 para ingresso simples\n\n Digite 2 para ingresso vip\n"<<endl;
    cin>>dec;
  switch(dec){
    case 1:{
        Ingresso i1= Ingresso(v);
        i1.setValor(v);
        i1.toString();
      
      break;
    }
    case 2:{
        IngressoVIP i1= IngressoVIP(v,add);
        i1.setValor(v);
        i1.setValorAdicional(add);
        i1.toString();
      
      break;
    }



    
  }
  return 0;
}