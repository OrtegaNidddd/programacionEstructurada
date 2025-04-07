#include <iostream>
using namespace std;

int main() {
    //Inicializamos la variable numerosMultiplos con un valor de 0
    int numerosMultiplos = 0;

    //Ciclo For se declara i en 0 y se aumenta i en 1 hasta que sea menor o igual a 10000
    for(int i = 0 ; i <= 10000; i++) {

    //Se evalua si en la posicion de i en el momento es multiplo de 13 con operador modulo
        if (i % 13 == 0){
            // Se imprime i que es el numeor multiplo de 13
            cout << i << endl;
            // Si i es multiplo de 13 se suma 1 a la variable numerosMultiplos

            numerosMultiplos++;
        }
    }
    //Imprime la variable numerosMultiplos
    cout << numerosMultiplos << endl;

    return 0;
}
