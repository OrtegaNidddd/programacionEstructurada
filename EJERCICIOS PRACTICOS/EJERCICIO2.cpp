#include <iostream>
using namespace std;

/*
Ejercicio 2: Tabla de multiplicar personalizada
Enunciado: Pide al usuario un número entre 1 y 10, y muestra su tabla de multiplicar del 1 al 12. Valida que
esté dentro del rango con un while.
Requiere: bucle while o do-while, validaciones if
*/

int n1;
int i = 1;
int resultado;

void tablaDeMultiplicar() {
    do {
        resultado = n1 * i;
        i++;
        cout << resultado << endl;

    } while (i <= 12);
}

int main(){

    cout << "Ingrese el primer digito\n";
    cin >> n1;
    if (n1 <= 10 && n1 > 1){
        tablaDeMultiplicar();
    } else {
        cout << "Numero Invalido" << endl;
    }

    return 0;
}