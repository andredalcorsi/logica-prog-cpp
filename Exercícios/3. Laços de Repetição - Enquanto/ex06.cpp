/* 6. Escreva um algoritmo que gere o números de 1000 a 1999 e 
escreva aqueles que dividido por 11 dão resto igual a 5 */


#include <iostream> 

using namespace std; 

int main () { 
    int numero = 1000; 

    cout << "Este Programa Gera Números de 1000 a 1999: \n";

    while (numero < 1999) {

        if (numero % 11 == 5) {
            cout << numero << "\n";
            
        }
        
        numero++;
    }

}