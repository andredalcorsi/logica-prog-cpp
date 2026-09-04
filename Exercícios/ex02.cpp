/*
2. Faça um algoritmo que receba 2 números inteiros e mostre os dois números.
*/

#include <iostream> 

using namespace std;
int main (int argc, char** argv) {
    
    int primeiroNumero=0, segundoNumero=0; 
    
    cout << "Este Programa Mostra Dois Números inteiros \n";
    
    cout << "\n Digite o primeiro número: ";
    
    cin >> primeiroNumero;
    
    cout << "\n Digite o segundo número: ";
    
    cin >> segundoNumero;
    
    cout << "Os números digitados foram: " << primeiroNumero << " e " << segundoNumero;
    
    return 0;
}
