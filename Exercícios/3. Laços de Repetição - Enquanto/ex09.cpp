/* 9. Solicitar um número inteiro positivo ( consistir ) e mostrar se é ou não primo */

#include <iostream> 
using namespace std; 

int main () { 
    int n = 0; 

    do {
        cout << "Digite um número: "; 
        cin >> n; 

        if (n <= 0) {
            cout << "Valor Inválido!"
        }

    } while (n <= 0); 
}