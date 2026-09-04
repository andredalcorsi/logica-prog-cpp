/*
7. Ler um número inteiro positivo e calcular e mostrar a tabuada
*/

#include <iostream> 
#include <cmath>

using namespace std;
int main (int argc, char** argv) {
    
    int numeroInteiro=0, tabuada=0;
    
    cout << "Este Programa Apresenta Uma Tabuada! \n";
    
    cout << "\n Informe o número que você quer multiplicar: ";
    
    cin >>  numeroInteiro;
    
    cout << "\n Você quer a tabuada se repita até qual número? [Ex: 20 vezes = 2x1 .. 2x20]: ";
    
    cin >> tabuada;
    
    for (int contador = 1; contador <= tabuada; contador++ ) {
        
        cout << numeroInteiro << " x " << contador << " = " << numeroInteiro*contador << "\n";
    }
    
    return 0;
}