/* 4. Ler 10 valores inteiros, um de cada vez, e contar quantos deles estão
no intervalo [10, 20] e quantos deles estão fora do intervalo. Ao final, mostrar estas informações */

#include <iostream> 

using namespace std; 
int main () { 
    
    int valores = 0, contador = 0; 

    while (valores <= 10) {
        cout << "Indique um valor: "; 
        cin >> valores; 

        if (contador <= 10 || contador <= 20) {
            contador = contador + valores; 
        }
    }

    return 0;
}