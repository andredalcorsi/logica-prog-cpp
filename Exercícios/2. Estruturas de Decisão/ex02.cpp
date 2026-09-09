/* 

2) Solicitar 3 valores inteiros para o cálculo da equação de segundo grau, 
delta = b² - 4*a*c 
Se delta < 0 -> não existem raízes reais 
Se delta = 0 -> existe uma raiz real
Se delta > 0 -> existem duas raízes reais 


Raízes -> -b +/- sqrt(delta) / 2*a 

*/

#include <iostream>
#include <cmath>
using namespace std; 

int main() {


    float a=0, b=0, c=0; 
    float delta=0, raizPositiva=0, raizNegativa=0; 
    
    cout << "Digite o valor de A: ";
    cin >> a;
    cout << "Digite o valor de B: ";
    cin >> b; 
    cout << "Digite o valor de C: ";
    cin >> c;
    
    if (a == 0) {
        cout << "O valor 'A' não pode ser 0 em uma equação de 2º grau!" << endl;
        return 0;
    }
    
    
    delta = pow(b,2) - (4*a*c);
    
    
    if (delta < 0) { 
        cout << "Não existem raízes reais";
    } else if (delta == 0) {
        raizPositiva = -b / (2*a); 
        cout << "Existe uma raíz real:" << raizPositiva << endl;
    } else {
        
        raizPositiva = (-b + sqrt(delta)) / (2*a);
        raizNegativa = (-b - sqrt(delta)) / (2*a);
        cout << "Existem duas raízes reais." << endl;
        cout << "Raíz positiva: " << raizPositiva << endl;
        cout << "Raiz negativa: " << raizNegativa << endl;
    
    }
    
    return 0;
}