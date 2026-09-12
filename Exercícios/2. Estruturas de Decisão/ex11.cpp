/* 

11. Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, onde i 
é um valor inteiro e positivo e a, b, c, são quaisquer valores reais e os escreva. 

A seguir: 

- Se i=1 escrever os três valores a, b, c em ordem crescente.
- Se i=2 escrever os três valores a, b, c em ordem decrescente.
- Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique dentre os dois.

*/


#include <iostream>
#include <cmath> 

using namespace std; 

int main()

{
    
    int i = 0; 
    float a = 0, b = 0, c = 0, aux = 0;
    float maior = 0, medio = 0, menor = 0;
    
    cout << "=== PROGRAMA PARA ORDENAR NÚMEROS ===\n";
    
    cout << "Primeiro, escolha os valores\n";
    
    cout << "Digite o valor de A: ";
    cin >> a;
    
    cout << "Digite o valor de B: ";
    cin >> b;
    
    cout << "Digite o valor de C: ";
    cin >> c;
    
    cout <<"\n";
    
    cout << "=== ESCOLHA O QUE VOCÊ DESEJA FAZER ===\n\n";
    
    cout << "[1] -> ORDEM CRESCENTE \n"; 
    cout << "[2] -> ORDEM DECRESCENTE \n";
    cout << "[3] -> MAIOR NÚMERO NO MEIO \n"; 
    
    cout << "Por favor, escolha uma opção: ";
    
    cin >> i; 
    
    if (i < 1 || i > 3) {
        cout << "Erro no Programa. Digite uma opção entre 1 e 3!";
    
    } else {
        if (a <= b && a <=c) {
            
            menor = a;
            
            if (b <= c) {
            
                medio = b;
                maior = c; 
                
            } else {
                
                medio = c;
                maior = b;
                
            } } else if (b <= a && b <= c) {
                
                menor = b; 
                
                if (a <= c) {
                    medio = a;
                    maior = c;
                
                    
                } else {
                    
                    medio = c;
                    maior = a; 
                }
                
            } else {
                
                menor = c;
                
                if (a <= b) {
                    maior = b;
                    medio = a;
                    
                } else {
                    
                    maior = a;
                    medio = b;
                }
            }
            
        
        if (i == 1) {
            cout << "Ordem Crescente: " << menor << ", " << medio << ", " << maior; 
             
        }
        
        if (i == 2) {
            cout << "Ordem Decrescente: " << maior << ", " << medio << ", " << menor; 
        }
        
        if (i == 3) {
            cout << "Número maior no meio: " << medio << ", " << maior << ", " << menor;
        }
        
    }
    
    return 0;
}