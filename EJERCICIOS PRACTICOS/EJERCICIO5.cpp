#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
Ejercicio 5: Número secreto con intentos
Enunciado: Genera un número secreto entre 1 y 100. El usuario debe adivinarlo. Dale hasta 7 intentos. Indica
si el número ingresado es mayor o menor.
Requiere: bucle while o for, if/else, rand().
*/

int numeroAleatorio = 0;
int intento;

int main(){
  srand(time(0));  // Inicializar semilla aleatoria
  numeroAleatorio =  rand() % 100 + 1;

  cout << "La adivinanza cansa!\n";
  cout << "Tienes 7 intentos para adivinar el numero aleatorio que ya fue generado.\n" << "El numero aleatorio esta entre 1 - 100\n";

  for (int i = 1; i <= 7; i++) {
    cout << "Intento numero " << i << endl;
    cout << "Ingresa un digito\n";
    cin >> intento;

    if (intento < 1 || intento > 100) {
      cout << "Intento Invalido\n";
    }

    if (intento == numeroAleatorio) {
      cout << "Felicidades, has adivinado el numero aleatorio que era: " << numeroAleatorio << endl;
      return 0;
    } else {
      cout << "Sigue intentanto!\n";
      if (intento < numeroAleatorio) {
        cout << "El numero aleatorio es mayor que tu intento (" << intento << ")" << endl;
      } else {
        cout << "El numero aleatorio es menor que tu intento (" << intento << ")" << endl;
      }
    }
  }
}