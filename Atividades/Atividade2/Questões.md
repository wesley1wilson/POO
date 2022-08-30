| Questões |
| :---: | 

1. Escreva um programa que irá ler 5 números e os insira em um array. Em seguida,
escreva uma função embaralhe(lista) que embaralhe os elementos de uma lista. Por fim,
exiba a lista da entrada e a lista embaralhada.
2. Escreva uma função que receba uma matriz como entrada e informe se a mesma é uma
matriz quadrada. Uma matriz quadrada possui o mesmo número de linhas e colunas.
3. Escreva uma função para receber uma matriz n x m e retorne a matriz inversa.
4. Escreva uma função mapeia(chaves, valores) que receba duas listas de mesmo
tamanho contendo chaves e valores e que retorne uma lista bidimensional, em que cada
par corresponda a uma chave e valor correspondentes das listas originais. Assuma que as
listas têm tamanhos iguais e que todos os valores em chaves são diferentes. Mostre (print)
as duas listas de entrada e a lista de saída.
```
    assert mapeia({1,2,3}, {1,4,9}) == {{1,1}, {2,4}, {3,9}}
```
5. Escreva uma função filtra_menores(valor) que recebe uma lista bidimensional e
elimina dela todas as entradas com chaves menores que valor. A função retorna o número
de pares eliminados da lista bidimensional.
```
// lista_bidimensional = {{chave, valor}, {chave, valor}}
```
```
lista_bidimensional = {{0,0}, {1,1}, {2,4}, {3,9}, {4,16}, {5,25}}
assert filtra_menores(lista_bidimensional, 3) == 3
assert lista_bidimensional == {3:9, 4:16, 5:25}
```
