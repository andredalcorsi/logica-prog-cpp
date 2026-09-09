/*
8. Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias.
*/

#include <iostream> 
#include <cmath>

using namespace std;
int main (int argc, char** argv) {
    
    int diasVivo=0, diasAnos=0, diasMeses = 0, resto = 0, dias = 0;
    
    cout << "Este Programa Converte a Idade de uma Pessoa de dias para anos, meses e dias! \n";
    
    cout << "\n A pessoa está viva a quantos dias? \n"; 
    
    cin >>  diasVivo;
    
    diasAnos = diasVivo / 365;
    resto = diasVivo % 365;
    diasMeses = resto / 30;
    dias = resto % 30;
    
    
    cout << "Isso equivale a: " << diasAnos << " anos, " << diasMeses << " meses e " << dias << " dias.";
    
    
    return 0;
}
