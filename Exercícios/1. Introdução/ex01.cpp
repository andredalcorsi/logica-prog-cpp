/* 
1. Faça um algoritmo que receba 2 números inteiros e apresente a soma desses números.
*/

#include <iostream> 

using namespace std;
int main (int argc, char** argv) {
    
    int primeiroNumero=0, segundoNumero=0;

    cout << "Calculando 02 números inteiros: \n";
    
    cout << "\n Digite o primeiro número: ";
    
    cin >> primeiroNumero;
    
    cout << "\n Digite o segundo número: ";
    
    cin >> segundoNumero;
    
    cout << "\n A soma dos 02 números inteiros é igual a: " << primeiroNumero+segundoNumero;

    return 0;
}