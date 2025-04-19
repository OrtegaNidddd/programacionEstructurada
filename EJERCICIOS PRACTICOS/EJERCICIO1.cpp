#include <iostream>
using namespace std;

int main(){

  int n1;
  int n2;

  cout << "Ingrese el primer digito\n";
  cin >> n1;
  cout << "Ingrese el segundo digito\n";
  cin >> n2;

  if ( n1 < 2 || n2 < 2){
    cout << "El numero no puede ser menor que 2\n" << endl;
  }

  int mayor = n1;
  int menor = n2;


  if (mayor < n2){
    mayor = n2;
    menor = n1;
  }

  for (int i = menor ; i <= mayor; i++){
    bool esPrimo = true;
    for (int j = 1; j * j <= i; j++) {
      if (i % j == 0) {
        esPrimo = false;
      }
    }
  }


}
