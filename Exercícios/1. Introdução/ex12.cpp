/*
12. Efetuar o cálculo e a apresentação do valor de uma prestação em atraso, utilizando a fórmula: 
PRESTAÇÃO <-- VALOR + (VALOR * (TAXA/100) * TEMPO)
*/

#include <iostream> 
#include <cmath>

using namespace std;
int main (int argc, char** argv) {
    
    float valor = 0, taxa = 0, tempo = 0, prestacao = 0; 
    
    cout << "Este Programa Calcula o Valor de Uma Prestação Em Atraso \n";
    
    cout << "Digite o valor da prestação: \n";
    cin >> valor; 
    cout << "Digite a taxa de juros pelo atraso: \n";
    cin >> taxa; 
    cout << "Por quanto tempo esta taxa está em atraso? \n";
    cin >> tempo;
    
    prestacao = valor + (valor * (taxa/100) * tempo);
    
    cout << "O valor da prestação em atraso é de R$" << prestacao;
}