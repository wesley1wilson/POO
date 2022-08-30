#include <iostream>
#include <string>
#include "Empregado.hpp"
#include "Vendedor.hpp"
#include "Gerente.hpp"
using namespace std;

int main(){
    //Variaveis
    string n, dp;
    double sal,pc;
    int dec;
  
  //Entradas
  cout<<"\nDigite o nome do empregado."<<endl;
    cin>>n;
  cout<<"\nDigite o cargo que o empregado ocupa na empresa.\n"<<endl;

  cout<<"\n--------------------------------------------\n\nCargos:\n\nDigite 1 para Gerente\nDigite 2 para Vendedor\n\n"<<endl;
     cin>>dec;

    //Instanciando os objetos
  
    Empregado emp1=Empregado(n,sal);

    switch(dec){
      case 1:{
          cout<<"\nDigite o departamento do Gerente "<<n<<". "<<endl;
              cin>>dp;
          cout<<"Digite o salário do Gerente "<<n<<": "<<endl;
              cin>>sal;
          Gerente g1= Gerente(n,sal,dp);
          cout<<"\n\n----------------------------------------------------------------\n\n";
          g1.toString();
        
            break;

        }
      case 2:{
            cout<<"Digite a comissão do empregado "<<n<<": "<<endl;
                cin>>pc;
            cout<<"\nDigite o departamento do vendedor "<<n<<". "<<endl;
                cin>>dp;
            cout<<"Digite o salário do vendedor "<<n<<": "<<endl;
                cin>>sal;
            Vendedor v1= Vendedor(n,sal,pc);
            cout<<"\n\n----------------------------------------------------------------\n\n";
            v1.toString();
          break;
      

        }
    }
    
    cout<<"\n\n----------------------------------------------------------------\n\n";
  
  return 0;
}




