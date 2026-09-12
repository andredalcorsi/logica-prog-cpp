/* 09. Dado um número inteiro de segundos, mostrar a quantas horas, minutos e segundos ele corresponde.*/


#include <iostream>
#include <cmath> 

using namespace std; 

int main()
{
  
    int totalSegundos = 0, horas = 0, minutos = 0, segundos = 0, resto = 0; 
    

    cout << "Este programa converte segundos em horas, minutos e segundos!";
    
    cout << "Digite a quantidade de segundos que deseja converter: ";
    cin >> totalSegundos; 
    
    
    if (totalSegundos <= 0){ 
        cout << "Por favor, reinicie o programa e digite uma quantidade válida de segundos.";
    } else { 
        
        horas = totalSegundos / 3600;
        resto = totalSegundos % 3600; 
        minutos = resto / 60;
        segundos = resto % 60; 
        
        cout << totalSegundos << " segundos correspondem a " << horas << " hora(s), " << minutos << " minuto(s) e " << segundos << " segundo(s)!";
        
    }
    
    return 0;
}