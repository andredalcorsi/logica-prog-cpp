/*
10. Faça um programa que calcule a área da circunferência. Considere A = 3.14159 * r²
*/

#include <iostream> 
#include <cmath>

using namespace std;
int main (int argc, char** argv) {
    
    float raio = 0; 
    
    cout << "Este programa calcula a área de uma circunferência! \n";
    
    cout << "Por favor, informe o raio dessa circunferência: \n";
    cin >> raio; 
    
    cout << "A área total dessa circunferência é igual a " << 3.14159 * pow(raio, 2);
    
    return 0;
}