/* 7. Solicitar um número inteiro positivo (consistir), calcular o fatorial e mostrar */

#include <iostream> 

using namespace std; 

int main () {

    int n = 0; 
    long fat = 1; 

    do { 
        cout << "Digite um número inteiro positivo: "; 
        cin >> n; 

        if (n < 0) {
            cout << "Valor inválido! O número deve ser maior ou igual a zero.";
        }
    } while (n < 0);

    for (int contador = 1; contador <= n; contador++) { 
        fat *= contador; // Equivale a: fat = fat * contador; 
    }

    cout << "O fatorial de " << n << " é: " << fat << endl; 

    return 0; 
}