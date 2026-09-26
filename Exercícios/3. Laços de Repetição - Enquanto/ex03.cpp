/*
    3. Mostrar os pares entre 10 e 100 e a somatória dos pares; 
*/

#include <iostream> 

using namespace std; 

int main () { 
    int num = 10; 

    while (num <= 100) { 
        cout << num << endl; 
        num = num + 2;
    }

    return 0;
}