#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

//Se declara un separador para tener una mejor visualizacion del programa al momento de ejecutarlo
std::string separador = "*************************";

//Se declara la variable saldo con un valor inicial de 1000
int saldo = 1000;

//Funcion verSaldo()
void verSaldo(){
    cout << separador << endl;
    //Imprime el saldo actual que se tiene registrado
    cout << "Procesando su solicitud...\n";
    Sleep(300); // 1 segundo (en Windows)
    cout << "Saldo Actual: " << saldo << endl;
    cout << separador << endl;
}

//Funcion depositar()
void depositar() {

    //Se declara la variable cantidad, correspondiente al monto a depositar
    int cantidad;

    //Se llama a la funcion verSaldo() para darle al usuario el conocimiento de cuanto saldo tiene
    verSaldo();
    cout << "Ingrese la cantidad de saldo que desea agregar a su cuenta: " << endl;
    //Se lee/pide/obtiene el monto a depositar
    cin >> cantidad;

    //Verifica si la cantidad a depositar es mayor que cero. De lo contrario es una cantidad negativa (-), que sera invalido
    if(cantidad > 0) {
        //Se le suma la cantidad a depositar al saldo actual
        saldo+=cantidad;
        //Se imprime el nuevo saldo
        cout << "Procesando su solicitud...\n";
        Sleep(1000); // 1 segundo (en Windows)
        cout << "Deposito exitoso. Nuevo saldo: " << saldo << endl;
    } else {
        cout << "Cantidad invalida." << endl;
    }
    cout << separador << endl;
}

//Funcion retirar()
void retirar() {

    //Se declara la variable cantidad, correspondiente al monto a depositar
    int cantidad;

    //Se llama a la funcion verSaldo() para darle al usuario el conocimiento de cuanto saldo tiene
    verSaldo();
    cout << "Ingrese la cantidad de saldo que desea retirar de su cuenta: " << endl;
    //Se lee/pide/obtiene el monto a retirar
    cin >> cantidad;

    //Verifica si la cantidad a retirar es mayor que cero. De lo contrario es una cantidad negativa (-), que sera invalido y se verifica si el saldo es mayor o igual a la cantidad que se desea retirar. De lo contrario no se podra retirar dicha suma por lo que sera invalido
    if(cantidad > 0 && saldo >= cantidad) {
        //Se resta la cantidad a retirar del saldo actual
        saldo-=cantidad;
        //Se imprime el nuevo saldo
        cout << "Procesando su solicitud...\n";
        Sleep(1000); // 1 segundo (en Windows)
        cout << "Retiro exitoso. Nuevo saldo: " << saldo << endl;
    } else {
        cout << "Cantidad invalida." << endl;
    }
}


int main() {
    system("Color 1f");
    //Se declara la variable opcion para el menu
    int opcion;
    std::string nombre = "";

    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Hola " << nombre << ", que deseas realizar?\n";
    Sleep(1000); // 1 segundo (en Windows)

    //Ciclo do-while para ejecutar el programa de manera continua sin interrupciones, siempre y cuando la opcion que marque el usuario sea la opcion de salida (4)
    do {
        system("pause");
        system("cls");
        //Se imprime el menu, mostrando cada opcion con su respectivo indicativo
        cout << "=========================\n=== CAJERO AUTOMATICO ===\n==== MENU  PRINCIPAL ====\n=========================" << endl;
        cout << "[1]    Ver Saldo" << endl;
        cout << "[2]    Depositar" << endl;
        cout << "[3]    Retirar" << endl;
        cout << "[4]    Salir" << endl;
        cout << "Digite una opcion." << endl;
        //Se lee la opcion para indicar que se desea realizar
        cin >> opcion;
        cout << "=========================" << endl;

        //Se verifica cual es la opcion que se solicito
        switch (opcion) {
            case 1: verSaldo(); break;
            case 2: depositar(); break;
            case 3:
                if (saldo == 0) {
                    cout << "No tiene saldo disponible en su cuenta." << endl;
                } else {
                    retirar();
                }
            break;
            case 4:
                cout << "Gracias por usar el cajero." << endl;
                system("pause");
            break;
            //Si se usa cualquier otro numero o caracter sera invalido e imprime que la opcion no es valida
            default:
                cout << "Opcion invalida." << endl;
            break;
        }
    } while (opcion != 4);

    //Programa finaliza con exito
    return 0;
}
