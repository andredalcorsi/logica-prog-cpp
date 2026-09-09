/*
13. Elaborar um programa que efetue a apresentação do valor da conversão em real de 
um valor lido em dólar. O programa deve solicitar o valor da cotação do dólar e 
também a quantidade de dólares disponível com o usuário, para que seja apresentado 
o valor em moeda brasileira.
*/

#include <iostream> 
#include <cmath>

using namespace std;
int main (int argc, char** argv) {
    
    float cotacaoDolar = 0, dolaresDisponiveis = 0, valorReal = 0; 
    
    cout << "Este Programa Converte Dolar em Real\n";
    
    cout << "\nQual é o valor da cotação do dólar hoje? RS$:";
    cin >> cotacaoDolar;
    cout << "\nQuantos dólares você tem com você? US$:";
    cin >> dolaresDisponiveis;
    
    valorReal = cotacaoDolar * dolaresDisponiveis;
    
    cout << "O valor disponibilizado em real é de R$" << valorReal;
    
    return 0;
}