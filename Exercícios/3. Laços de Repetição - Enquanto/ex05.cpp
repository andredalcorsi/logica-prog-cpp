/* 

5.	Ler três notas de 50 alunos de uma turma. Para cada aluno, 
calcule a média ponderada, como segue:

- MP = ( n1*2 + n2*4 + n3*3 ) / 9;
- Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma 
mensagem "Aprovado", caso a média seja maior ou igual a sete, e uma mensagem 
"Reprovado", caso contrário. Ao final, mostre a média geral;

*/


#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    float n1 = 0, n2 = 0, n3 = 0, mp = 0, geral = 0, contador = 0, acumulador = 0;

    

    cout << "Cálculo de Média de Alunos" << endl;

    while (contador < 3) {

    cout << "Por favor, digite a primeira nota: ";
    cin >> n1; 

    cout << "Por favor, digite a segunda nota: ";
    cin >> n2; 
    
    cout << "Por favor, digite a terceira nota: ";
    cin >> n3; 

    mp = (((n1 * 2.0) + (n2 * 4.0) + (n3 * 3.0)) / 9.0);
    
    if (mp >= 7.0) {
        cout << "Média aluno nº" << contador + 1 << ":";
        cout << fixed << setprecision(2);
        cout << mp << "\n";
        cout << "Situação: APROVADO!" << endl;

    } else {
        cout << "Média aluno nº" << contador + 1 << ":";
        cout << fixed << setprecision(2);
        cout << mp << "\n";
        cout << "Situação: REPROVADO!" << endl;
    }

    contador++;
    acumulador = acumulador + mp; 

    }

    geral = acumulador / contador;


    cout << "Média Geral da Turma: " << geral << endl; 

}