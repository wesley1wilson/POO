| Questões |
| :---: | 

1. Crie classes de forma a representar o diagrama a abaixo:
![image](https://user-images.githubusercontent.com/97174573/187508939-e3c667fe-6d3a-4989-a0e1-1f6f1a63f581.png)

A classe Empregado deve possuir dois atributos, nome e salario. Salario deve ser
do tipo protected. Crie os métodos get e set para classes e o método toString.

As classes Gerente deve herdar da classe Empregado. Crie os métodos get e set
para a classe e o método toString. O método toString da classe Gerente deve incluir a
informação do departamento, além dos dados da superclasse. O construtor da classe deve
receber por parâmetro, além as informações da superclasse, a informação do
departamento.

A classe Vendedor deve herdar também da classe Empregado. Deve possuir ainda
um método denominado calcularSalario. Esse método deve retornar um valor do tipo
double, correspondente ao valor do salário acrescido do respectivo percentual de
comissão. O construtor da classe deve receber por parâmetro, além as informações da
superclasse, a informação do percentual de comissão do vendedor. O método toString da
classe deve apresentar as informações de nome do empregado, salário sem comissão,
salario com comissão e percentual de comissão.

Crie uma classe para testar objetos das classes implementadas.

2. Crie uma classe chamada Ingresso que possua um atributo valor e um método toString
que retorne à informação do valor do ingresso.

Crie uma classe IngressoVIP, que herda de Ingresso e possui um atributo valor Adicional.
O método toString da classe IngressoVIP deve considerar que o valor do ingresso é o
valor da superclasse somado ao valor Adicional do IngressoVIP.

Crie uma classe para testar os objetos das classes Ingresso e IngressoVIP.

![image](https://user-images.githubusercontent.com/97174573/187509627-65607833-e554-4f0b-97de-ad402732352c.png)
