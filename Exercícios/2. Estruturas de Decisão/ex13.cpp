/* 13) Escrever um algoritmo que lê um valor em Reais (R$) e calcule qual o menor 
número possível de notas de 100, 50, 10, 5 e 1 em que o valor lido pode ser 
decomposto. Escrever o valor lido e a relação de notas necessárias. */

#include <iostream>
#include <cmath>

using namespace std; 

int main()

{

    int valor = 0, resto = 0;
    int cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, um = 0; 

    cout << "Este Programa Decompõe Dinheiro";
    cout << "Quanto de dinheiro você tem? \n"; 
    cin >> valor;

    cem = valor / 100; 
    resto = valor % 100; 

    cinquenta = resto / 50; 
    resto = resto % 50; 

    vinte = resto / 20; 
    resto = resto % 20; 

    dez = resto / 10; 
    resto = resto % 10;

    cinco = resto / 5; 
    resto = resto % 5; 

    um = resto; 

    cout << "--- RELATÓRIO DE NOTAS ---";
    cout << "Valor lido: R$ " << valor << "\n";
    
    if (cem > 0) {
        cout << "Notas de R$100: " << cem << "\n" << endl;
    } 

    if (cinquenta > 0) {
        cout << "Notas de R$50: " << cinquenta << "\n" << endl;
    }
    
    if (vinte > 0) { 
       cout << "Notas de R$20: " << vinte << "\n" << endl; 
    }

    if (dez > 0) { 
        cout << "Notas de R$10: " << dez << "\n" << endl;
    }

    if (cinco > 0) { 
        cout << "Notas de R$5: " << cinco << "\n" << endl;
    }

    if (um > 0) { 
        cout << "Notas de R$1: " << um << "\n" << endl;
    } 
}

