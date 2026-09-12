/* Receber 3 valores numéricos em 3 variáveis, A, B e C, e trocar os valores 
entre as variáveis de forma que, ao final do algoritmo, 
a variável A possua o menor valor e a variável C o maior.*/


#include <iostream>
#include <cmath> 

using namespace std; 

int main()
{
  
  
    int A = 0, B = 0, C = 0, aux = 0;
    
    cout << "Este programa lê os números e os reordena!" << endl;
    
    cout << "Digite o valor de A: ";
    cin >> A; 
    cout << "Digite o valor de B: ";
    cin >> B;
    cout << "Digite o valor de C: ";
    cin >> C;
     
    if (A > B) { 
        
        aux = A;
        A = B;
        B = aux;
        
    } if (A > C) { 
        
        aux = A; 
        A = C;
        C = aux; 

    } if (B > C) { 
    
        aux = B;
        B = C; 
        C = aux; 
        
    }
    
    cout << "Os valores na ordem que o exercício pede ficou assim: " << A << ", " << B << ", " << C; 
    
    
    return 0;
}