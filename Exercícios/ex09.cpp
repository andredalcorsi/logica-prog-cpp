/*
9. Faça um algoritmo que leia a idade de uma pessoa expressa em ano, mês e dia e mostre-as em dias.
*/

#include <iostream> 
#include <cmath>

using namespace std;
int main (int argc, char** argv) {
    
    int anosViva = 0, mesesViva = 0, diasViva = 0, anosDias = 0, mesesDias = 0; 
    
    cout << "Este Programa Converte a Idade de uma Pessoa em Anos, Meses e Dias para Dias! \n";
    
    cout << "A pessoa está viva a quantos anos? \n";
    cin >> anosViva;
    cout << "A pessoa está viva a quantos meses? \n";
    cin >> mesesViva;
    cout << "A pessoa está viva a quantos dias? \n";
    cin >> diasViva;
    
    anosDias = anosViva * 365; 
    mesesDias = mesesViva * 30;
    
    cout << "A pessoa em questão está viva a " << anosDias+mesesDias+diasViva << " dias!";
    
    return 0;
}