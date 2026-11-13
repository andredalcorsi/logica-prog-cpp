/* 8. Solicitar um número inteiro na base decimal positivo (consistir) calcular o binário e mostrá-lo na tela */

#include <iostream> 
using namespace std; 

int main () {
    
    int dec = 0; 
    long long bin = 0, multiplicador = 1; 
    
    do {

        cout << "Digite um número maior que zero";
        cin >> dec;
        
        if (dec <= 0) { 
            cout << "Valor inválido!"; 
        }

    } while (dec <= 0);

    int temp = dec; 

    while (temp > 0) { 
        int resto = temp % 2;

        bin = bin + (resto * multiplicador);

        temp = temp / 2; 
        multiplicador = multiplicador * 10;
    }
    cout << "O número " << dec << " em binário é: " << bin << endl; 
    return 0;
}