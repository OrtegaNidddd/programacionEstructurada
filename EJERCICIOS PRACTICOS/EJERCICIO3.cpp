#include <iostream>
using namespace std;

/*
Ejercicio 3: Menú interactivo simple
Enunciado: Crea un menú en consola que se repita hasta que el usuario elija salir:
plaintext
CopiarEditar
1. Mostrar saludo
2. Mostrar fecha ficticia
3. Salir
Según la opción, muestra un mensaje. Usa switch y do-while.
Requiere: bucle do-while, switch, validación de entrada.
*/

string fecha = "3 de octubre de 2025";
string nombre;

int main(){
    cout << "Menu Interactivo simple\n";
    cout << endl;
    int opcion;

    do {
      cout << "1. Mostrar Saludo\n";
      cout << "2. Mostrar Fecha Ficticia\n";
      cout << "3. Salir\n";
      cout << "Ingresa una opcion:\n";
      cin >> opcion;

      switch (opcion) {
        case 1:
          cout << "Ingresa tu nombre:\n";
          cin >> nombre;
          cout << "Hola "+ nombre + ", como estas?" << endl;
        break;
        case 2:
          cout << fecha << endl;
        break;
        case 3:
          cout << "Gracias por usar el menu. \n";
        break;
        default:
          cout << "Opcion no valida\n";
      }
    } while (opcion != 3);
  return 0;
}