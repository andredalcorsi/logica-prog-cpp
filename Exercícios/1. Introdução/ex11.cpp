/*
11. Faça um programa que receba um número e mostre o resto da divisão por 6.
*/

#include <iostream> 
#include <cmath>

using namespace std;
int main (int argc, char** argv) {
    
    int numero = 0, resto = 0; 
    
    cout << "Este programa calcula o resto da divisão por 6! \n";
    
    cout << "Por favor, informe o número que quer calcular: \n";
    cin >> numero; 
    
    resto = numero % 6;
    
    cout << "O resto da divisão do número " << numero << " é igual a: " << resto;
    
    return 0;
}