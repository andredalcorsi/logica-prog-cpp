/*
4. Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula:

VOLUME <-- 3.14159 * RAIO2 * ALTURA.
*/

#include <iostream> 

using namespace std;
int main (int argc, char** argv) {
    
    float raio=0, altura=0; 
    
    cout << "Este Programa Calcular e Apresenta o valor do volume de uma lata de óleo! \n";
    
    cout << "\n Informe o raio: ";
    
    cin >> raio;
    
    cout << "\n Informe a altura: ";
    
    cin >> altura;
    
    cout << "O volume da lata de óleo é igual a: " << (3.14159 * (raio*raio)) * altura;
    
    return 0;
}