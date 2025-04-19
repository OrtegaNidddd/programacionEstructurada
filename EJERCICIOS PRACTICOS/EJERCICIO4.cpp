#include <iostream>
using namespace std;

/*
Ejercicio 4: Suma de pares e impares
Enunciado: Pide al usuario 10 números. Al final, muestra:
• La suma de los pares
• La suma de los impares
Requiere: bucle for, condición if (n % 2 == 0).
 */

int pares = 0;
int impares = 0;
int numero;

int main(){

  cout << "Digita 10 numeros por favor.\n";

  for (int i = 1;i<=10;i++){
      cout << "Ingresa un digito\n";
      cin >> numero;

      if (numero % 2 == 0){
          pares += numero;
      } else {
          impares += numero;
      }
  }

  cout << "Suma de numeros pares es: " << pares << endl;
  cout << "Suma de impares es: " << impares << endl;
}