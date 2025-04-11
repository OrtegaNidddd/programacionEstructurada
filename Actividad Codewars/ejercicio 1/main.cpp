#include <iostream>
using namespace std;

int main() {

    int suma = 0;

    for (int i = 1; i < 10; i++){

        if (i % 3 == 0 || i % 5 == 0) {
            cout << i << endl;
            suma += i;
        }
    }

    cout << suma << endl;

    if (suma < 0) {
        return 0;
    }

}