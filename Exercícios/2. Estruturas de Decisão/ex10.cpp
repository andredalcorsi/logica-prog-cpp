/* 10. Credito especial em função do saldo médio.

- Ler o saldo médio do cliente;
- Calcular o valor do credito em função da tabela a seguir: SALDO MÉDIO % CREDITO 
    * 0 a 200: 0% 
    * 201 a 400: 20% 
    * 401 a 600: 30% 
    * Acima de 601: 40%. 
    
*/


#include <iostream>
#include <cmath> 

using namespace std; 

int main()

{
    
    float saldoMedio = 0, credito = 0; 
    
    
    cout << "Este Programa Calcula o Crédito Especial De Acordo com Saldo Médio Do Cliente" << endl; 
    
    cout << "Por favor, informe o saldo médio do cliente: ";
    cin >> saldoMedio; 
    
    if (saldoMedio < 0) { 
    
        cout << "Por favor, reinicie o programa. Valor inválido!";
        
    } else if (saldoMedio <= 200) {
        credito = saldoMedio * (0/100);
        cout << "Crédito Disponível. R$: " << credito; 
    } else if (saldoMedio <= 400) {
        credito = saldoMedio * (20.0/100.0);
        cout << "Crédito Disponível. R$: " << credito; 
    } else if (saldoMedio <= 600) {
        credito = saldoMedio * (30.0/100.0);
        cout << "Crédito Disponível. R$: " << credito; 
    } else { 
        credito = saldoMedio * (40.0/100.0);
        cout << "Crédito Disponível. R$: " << credito;
    }
    
    return 0;
}