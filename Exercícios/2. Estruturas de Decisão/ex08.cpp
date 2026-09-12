/* 08. Receber valores de base e altura de um triângulo e verificar se são valores 
válidos (positivos maiores que zero). Em caso afirmativo, 
calcular a área do triângulo..*/

#include <iostream>
#include <cmath> 

using namespace std; 

int main()
{
  
    float base = 0, altura = 0, areaTriangulo = 0; 
    
    
    cout << "Informe a base: ";
    cin >> base;
    cout << "Informe a altura: "; 
    cin >> altura; 
    
    
    if (base <= 0 || altura <= 0) { 
        
        cout << "Entrada inválida. Não tem como calcular a área de um triângulo com números negativos!";
        return 0; 
    } else { 
        
        areaTriangulo = (base * altura) / 2; 
        
        cout << "A área do triângulo é: " << areaTriangulo; 
        
    }
    
    return 0;
}