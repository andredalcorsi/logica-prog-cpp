/*
6. Efetuar a leitura de um número inteiro e apresentar o resultado do quadrado desse número.
*/

#include <iostream> 
#include <cmath>

using namespace std;
int main (int argc, char** argv) {
    
    int numeroInteiro=0;
    
    cout << "Este Programa Apresenta o Quadrado De Um Valor \n";
    
    cout << "\n Informe o número: ";
    
    cin >>  numeroInteiro;
    
    cout << "Os valores trocados são iguais a " << pow(numeroInteiro, 2);
    
    return 0;
}
