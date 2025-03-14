#include <iostream>
using namespace std;

int main() {

    char operador;
    std::string separador = "------------------------------";
    double resultado, number1, number2;

    cout << "Calculadora simple" << endl;

    //Separar el texto
    cout << separador << endl;

    cout << "SUMA (+)" << endl;
    cout << "RESTA (-)" << endl;
    cout << "MULTIPLICACION (*)" << endl;
    cout << "DIVISION (/)" << endl;
    cout << "PORCENTAJE (%)" << endl;

    //Separar el texto
    cout << separador << endl;

    cout << "Ingrese la operacion que desea realizar: " << endl;

    cin >> operador;

    //Verificar si el operador es valido
    if (operador != '+' && operador != '-' && operador != '*' && operador != '/' && operador != '%') {

        cout << "Operador no valido" << endl;

        return 1;
    }

    if (operador == '%') {
        cout << "El primer numero es el numero inicial" << endl;
        cout << "El segundo numero es el porcentaje que se desea" << endl;
    }

    //Separar el texto
    cout << separador << endl;

    //Leer los numeros
    cout << "Ingrese el numero 1: " << endl;
    cin >> number1;

    cout << "Ingrese el numero 2: " << endl;
    cin >> number2;

    //Realizar operacion segun el operador
    switch (operador) {

        case '+': // SUMA
            resultado = number1 + number2;
        break;
        case '-': // RESTA
            resultado = number1 - number2;
        break;
        case '*': // MULTIPLICACION
            resultado = number1 * number2;
        break;
        case '/': //DIVISION
            if (number2 == 0) {
                cout << "No se puede dividir entre 0" << endl;
                return 1;
            } else {
                resultado = number1 / number2;
            }
        break;
        case '%': // PORCENTAJE
            resultado = (number1 * number2) / 100;
        break;
        default: //Por si acaso
            cout << "Operador no valido" << endl;
        return 1;
    }

    cout << separador << endl;

    //Resultado
    if (operador == '%') {
        cout << "El resultado es: " << resultado << "%" << endl;
    } else {
        cout << "El resultado es: " << resultado << endl;
    }

    return 0;
}