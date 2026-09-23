/* 14) Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, 
onde i é um valor inteiro e positivo e a, b, c, são quaisquer valores reais e os escreva. 

A seguir:

- Se i=1 escrever os três valores a, b, c em ordem crescente;
- Se i=2 escrever os três valores a, b, c em ordem decrescente;
- Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique dentre os dois. */


#include <iostream>
#include <cmath>

using namespace std; 

int main()

{ 
  int i = 0; 
  float a = 0, b = 0, c = 0, aux = 0; 
  
  cout << "Este Programa lê um conjunto de 4 números em ordens distintas \n";
  
  cout << "Digite o primeiro valor: "; 
  cin >> a;
  
  cout << "Digite o segundo valor: "; 
  cin >> b;

  cout << "Digite o terceiro valor: "; 
  cin >> c;

  cout << "Escolha uma ordem: \n";
  cout << "[1] CRESCENTE \n";
  cout << "[2] DECRESCENTE \n";
  cout << "[3] NO MEIO DOS NÚMEROS \n";
  cin >> i;

  if (a > b) {
    aux = a; a = b; b = aux;
  }

  if (a > c) { 
    aux = a; a = c; c = aux;
  }

  if (b > c) {
    aux = b; b = c; c = aux; 
  }
  
  
  if (i == 1) {
        cout << "Ordem dos valores: " << a << ", " << b << ", " << c;
  }

  if (i == 2) {
    cout << "Ordem dos valores: " << c << ", " << b << ", " << a;
  }

  if (i == 3) {
    cout << "Ordem dos valores: " << a << ", " << c << ", " << b;
  }
}