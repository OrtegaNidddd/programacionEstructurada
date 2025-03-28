#include <iostream>
using namespace std;


int main() {
    
    int numerosMultiplos = 0;

    for(int i = 0 ; i <= 10000; i++) {
        if (i % 13 == 0){
            numerosMultiplos++;  
        }
    }
    cout << numerosMultiplos << endl;
}
