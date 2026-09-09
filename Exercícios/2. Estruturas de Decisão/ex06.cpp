/* 

    
6) Receber 3 valores numéricos, X, Y e Z, e verificar se esses valores podem 
corresponder aos lados de um triângulo. Em caso afirmativo, informar ao usuário 
se o triângulo é equilátero, isóscelos ou escaleno.


*/

#include <iostream>
#include <cmath>

using namespace std; 

int main() {

    int X = 0, Y = 0, Z = 0; 
    
    cout << "Primeiro lado do triângulo: "; 
    cin >> X;
    cout << "Segundo lado do triângulo: "; 
    cin >> Y;
    cout << "Terceiro lado do triângulo: "; 
    cin >> Z;
    
    if ((X + Y > Z) && (Y + Z > X) && (Z + X > Y)) { 
        cout << "Pode formar um triângulo!" << endl;
        
        if (X == Y && Y == Z) {
            cout << "Equilátero!" << endl;
        } else if (X == Y || X == Z || Y == Z) {
            cout << "Isósceles!" << endl; 
        } else {
            cout << "Escaleno!" << endl;
        }
    } else {
        cout << "Não pode formar um triângulo!" << endl;
    }

    
    return 0;
}