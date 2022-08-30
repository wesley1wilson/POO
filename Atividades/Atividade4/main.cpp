#include <iostream>
#include<iomanip>
#include <string>
#include "Cliente.hpp"
#include "Endereco.hpp"
#include "Pedido.hpp"
#include "Produto.hpp"
using namespace std;

int main() {

  //ATRIBUTOS; pedido
  string data1 = "20/05/2022";
  string hora1 = "22:00";

  //ATRIBUTOS; cliente
  string nome1 = "Wesley";
  string telefone = "81 99134 2744";

  //ATRIBUTOS; endereco
  string rua1 = "Manoel Guimaraes";
  string bairro1 = "dinamerica";
  string num1 = "N600";
  string ponto1 = "Sem Ponto de Referencia";
  
  //ATRIBUTOS; produto
  string nomeProd1 = "refrigerante 2L";
  double valorUnd1 = 8.0;
  int qtd1 = 2;
  
  string nomeProd2 = "Espetinho de gato";
  double valorUnd2 = 10.0;
  int qtd2 = 5;

    //INSTACIA; endereco
  Endereco ender;
  ender = Endereco();
  ender.setRua(rua1);
  ender.setBairro(bairro1);
  ender.setNum(num1);
  ender.setPonto(ponto1);

  //INSTANCIA; cliente
  Cliente cliente1; 
  cliente1 = Cliente();
  cliente1.setNome(nome1);
  cliente1.setEndereco(ender);
  cliente1.setTelefone(telefone);
  std::cout << "+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+ " << std::endl;
  std::cout << "Nome do cliente: " << cliente1.getNome() << std::endl;
  std::cout << "+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+ " << std::endl;
  std:: cout << "Endereço do cliente: "<< ender.getRua()<< ", "<<ender.getNum()<< ", "<<ender.getBairro()<< " ("<<ender.getPonto()<< ")"<<endl;
  //INSTANCIA; produtos
  
  std::cout << "+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+ " << std::endl;
  Produto prod1 = Produto(nomeProd1, valorUnd1, qtd1);
  Produto prod2 = Produto(nomeProd2, valorUnd2, qtd2);

  Produto listaProduto[2] = {prod1, prod2};
  
  std::cout << "Produtos: " << std::endl;
  
  std::cout << listaProduto[0].nomeProduto << std::endl;
  std::cout << listaProduto[1].nomeProduto << std::endl;

  std::cout << "+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+ " << std::endl;
  
  
  prod1.calcularTotal(valorUnd1, qtd1); //atribuir o valorProduto
  prod2.calcularTotal(valorUnd2, qtd2); //atribuir o valorProduto

  //INSTANCIA; pedidos
  Pedido pedido1 = Pedido();
  pedido1.setCliente(cliente1);
  pedido1.setData(data1);
  pedido1.setHora(hora1);
  pedido1.somadorValor(prod1.valorProduto, prod2.valorProduto);
  //atribuindo ao atributo listaProduto

  double soma = prod1.valorProduto += prod2.valorProduto ;
  
 cout << fixed << setprecision(2);
  std::cout << "Valor da Conta é : R$ " << pedido1.valorTotal << std::endl;
  std::cout << "+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+ " << std::endl;

  std::cout << pedido1.getData() << " - " << pedido1.getHora() << std::endl;
  std::cout << "+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+ " << std::endl;
  return 0;
}