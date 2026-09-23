/* 15) As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e 
R$ 1,00 se forem compradas pelo menos 12. Escreva um programa que leia o número 
de maçãs compradas, calcule e escreva o custo total da compra. */


#include <iostream>
#include <cmath>

using namespace std; 

int main() {
    float numberApples = 0, totalCost = 0, applePrice = 0;

    cout << "Este programa lê o número de maçãs  compradas!" << endl; 
    cout << "Digite o número de maçãs que deseja: " << endl; 
    cin >> numberApples;

    if (numberApples < 12) { 
        applePrice = numberApples * 1.30;
        cout << "Custo total da compra: R$" << applePrice << "!";
    } else { 
        applePrice = numberApples * 1.00; 
        cout << "Custo total da compra: R$" << applePrice << "!";
    }

    return 0;
}