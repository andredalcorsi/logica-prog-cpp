/* 

    
3) Solicitar dois valores inteiros, e mostrá-los na ordem crescente e decrescente.


*/

#include <iostream>
#include <cmath>

using namespace std; 

int main() {

    int primeiroValor = 0, ultimoValor = 0, crescente = 0, decrescente = 0;     
    
    cout << "Este Programa Mostra Números Crescentes e Decrescentes: " << endl;
    
    cout << "Digite o 1º Valor: ";
    cin >> primeiroValor; 
    cout << "Digite o 2º Valor: "; 
    cin >> ultimoValor;
    
    cout << endl;
    cout << "---------------------------------";
    cout << endl;
    
   if (primeiroValor > ultimoValor) { 
       
       cout << "Ordem Crescente: " << ultimoValor << ", " << primeiroValor << "!" << endl;
       cout << "Ordem Decrescente: " << primeiroValor << ", " << ultimoValor << "!" << endl; 
       
   } else {
        cout << "Ordem Crescente: " << primeiroValor << ", " << ultimoValor << "!"<< endl;
        cout << "Ordem Decrescente: " << ultimoValor << ", " << primeiroValor << "!" << endl; 
   }
    
    return 0;
}