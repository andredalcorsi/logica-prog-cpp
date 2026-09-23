#include <iostream>

using namespace std; 

int main()

{ 
    int numero = 0, resto = 0; 

    cout << "Este programa converte binário";
    cin >> numero;

    while (numero <= 0) {
        cout << "Por favor, digite o número novamente: ";
        cin >> numero; 
    }

    while (numero > 0) { 
        resto = numero %2;
        resto++;
        cout << resto;

    }

    return 0;
}