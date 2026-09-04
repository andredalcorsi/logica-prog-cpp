/*
5. Ler dois valores inteiros para as variáveis A e B e efetuar a troca dos valores 
de forma que a variável A passe a possuir o valor da variável B e a variável B 
passe a possuir o valor da variável A. Apresentar os valores trocados.
*/

#include <iostream> 

using namespace std;
int main (int argc, char** argv) {
    
    int A=0, B=0, C=0; 
    
    cout << "Este Programa Troca os Valores das Variáveis \n";
    
    cout << "\n Informe o valor de A: ";
    
    cin >> A;
    
    cout << "\n Informe o valor de B: ";
    
    cin >> B;
    
    C = A; 
    A = B; 
    B = C; 
    
    cout << "Os valores trocados são iguais a " << A << " e " << B;
    
    return 0;
}
