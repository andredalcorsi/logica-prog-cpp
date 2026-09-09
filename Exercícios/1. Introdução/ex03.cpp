/*
3. Faça um algoritmo que receba 2 números e apresente a multiplicação dos dois números
*/

#include <iostream> 

using namespace std;
int main (int argc, char** argv) {
    
    int primeiroNumero=0, segundoNumero=0; 
    
    cout << "Este Programa Multiplica Dois Números Inteiros \n";
    
    cout << "\n Digite o primeiro número: ";
    
    cin >> primeiroNumero;
    
    cout << "\n Digite o segundo número: ";
    
    cin >> segundoNumero;
    
    cout << "Os números digitados foram: " << primeiroNumero * segundoNumero;
    
    return 0;
}