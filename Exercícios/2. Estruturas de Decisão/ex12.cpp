/* 

12. Um vendedor necessita de um algoritmo que calcule o preço total devido por 
um cliente. O algoritmo deve receber o código de um produto e a quantidade 
comprada e calcular o preço total, usando a tabela abaixo:

Código do produto | Preço unitário 

1                 | R$ 32,00 
2                 | R$ 45,00 
3                 | R$ 37,00 
4                 | R$ 33,00

*/


#include <iostream>
#include <cmath>

using namespace std; 

int main()

{
    
    int codProd = 0, quantidade = 0;
    float totalPrice = 0;
     
   
   cout << "Por favor, digite o código do produto: "; 
   cin >> codProd; 
   
   cout << "Qual a quantidade comprada?";
   cin >> quantidade; 
   
   if (codProd == 1) {
   
        totalPrice = quantidade * 32.00;
   }
   
   else if (codProd == 2) {
   
        totalPrice = quantidade * 45.00;
       
   }
   
   else if (codProd == 3) {
   
        totalPrice = quantidade * 37.00;
   }
   
   else if (codProd == 4) {
   
        totalPrice = quantidade * 33.00;
   }
   
   else {
       cout << "Código de produto inválido \n";
       return 1;
   }
    
    cout << "Valor total é de R$: " << totalPrice << endl;
    return 0;
}