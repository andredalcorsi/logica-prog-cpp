/* 

    
4) Solicitar um valor inteiro positivo ( consistir ) e mostrar se esse número é par ou não par 


*/

#include <iostream>
#include <cmath>

using namespace std; 

int main() {

    int valor = 0, par = 0, impar = 0; 
    
    cout << "Digite o valor: ";
    cin >> valor; 
    
    if (valor % 2 == 0) {
        cout << "Este número é par!";
    } else {
        cout << "Este número é ímpar!";
    }
    return 0;
}