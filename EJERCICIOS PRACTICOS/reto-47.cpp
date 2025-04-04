#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "DETECTOR DE VOCALES" << endl;

    string cadenaDeTexto;
    string separador = "------------------------------";
    // Inicializar todos los contadores en cero
    int contador_A = 0, contador_E = 0, contador_I = 0, contador_O = 0, contador_U = 0;

    cout << separador << endl;
    cout << "Ingrese una linea de texto:" << endl;

    // Usar getline para leer toda la línea incluyendo espacios
    getline(cin, cadenaDeTexto);

    cout << separador << endl;
    cout << "Vocales encontradas: ";

    // Usar un bucle for para recorrer cada carácter y mostrar las vocales
    for (int i = 0; i < cadenaDeTexto.length(); i++) {
        char caracter = tolower(cadenaDeTexto[i]); // Convertir a minúscula para facilitar la verificación

        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            cout << cadenaDeTexto[i] << " ";
        }
    }
    cout << endl;

    // Contar cada tipo de vocal
    for (int count2 = 0; count2 < cadenaDeTexto.length(); count2++) {
        char caracter = tolower(cadenaDeTexto[count2]); // También convertir a minúscula aquí

        switch (caracter) { // Usar la versión en minúscula para el switch
            case 'a':
                contador_A++;
                break;
            case 'e':
                contador_E++;
                break;
            case 'i':
                contador_I++;
                break;
            case 'o':
                contador_O++;
                break;
            case 'u':
                contador_U++;
                break;
            default:
                // No hacer nada para caracteres que no son vocales
                break;
        }
    }

    // Encontrar la vocal más frecuente
    int mayor = contador_A;

    // Actualizar el valor máximo
    if (contador_E > mayor) mayor = contador_E;
    if (contador_I > mayor) mayor = contador_I;
    if (contador_O > mayor) mayor = contador_O;
    if (contador_U > mayor) mayor = contador_U;

    cout << separador << endl;

    // Verificar si no hay vocales
    if (mayor == 0) {
        cout << "No se encontraron vocales en el texto." << endl;
    } else {
        // Variables para almacenar cuántas vocales tienen el máximo y cuáles son
        int cantidadMaximas = 0;
        bool es_max_A = false,
        es_max_E = false,
        es_max_I = false,
        es_max_O = false,
        es_max_U = false;

        // Verificar cada vocal y marcarla si tiene el conteo máximo
        if (contador_A == mayor) {
            es_max_A = true;
            cantidadMaximas++;
        }
        if (contador_E == mayor) {
            es_max_E = true;
            cantidadMaximas++;
        }
        if (contador_I == mayor) {
            es_max_I = true;
            cantidadMaximas++;
        }
        if (contador_O == mayor) {
            es_max_O = true;
            cantidadMaximas++;
        }
        if (contador_U == mayor) {
            es_max_U = true;
            cantidadMaximas++;
        }

        // Mostrar las vocales más frecuentes
        if (cantidadMaximas == 1) {
            // Una sola vocal con el máximo
            if (es_max_A) cout << "La vocal que más se repite es 'a' con " << mayor << " repeticiones." << endl;
            if (es_max_E) cout << "La vocal que más se repite es 'e' con " << mayor << " repeticiones." << endl;
            if (es_max_I) cout << "La vocal que más se repite es 'i' con " << mayor << " repeticiones." << endl;
            if (es_max_O) cout << "La vocal que más se repite es 'o' con " << mayor << " repeticiones." << endl;
            if (es_max_U) cout << "La vocal que más se repite es 'u' con " << mayor << " repeticiones." << endl;
        } else {
            // Varias vocales con el mismo máximo
            cout << "Las siguientes vocales se repiten igual con " << mayor << " repeticiones cada una: ";
            bool primero = true;

            if (es_max_A) {
                cout << "'a'";
                primero = false;
            }
            if (es_max_E) {
                if (!primero) cout << ", ";
                cout << "'e'";
                primero = false;
            }
            if (es_max_I) {
                if (!primero) cout << ", ";
                cout << "'i'";
                primero = false;
            }
            if (es_max_O) {
                if (!primero) cout << ", ";
                cout << "'o'";
                primero = false;
            }
            if (es_max_U) {
                if (!primero) cout << ", ";
                cout << "'u'";
            }
            cout << endl;
        }
    }

    // Mostrar el conteo de cada vocal
    cout << "Conteo de vocales:" << endl;
    cout << "A: " << contador_A << endl;
    cout << "E: " << contador_E << endl;
    cout << "I: " << contador_I << endl;
    cout << "O: " << contador_O << endl;
    cout << "U: " << contador_U << endl;

    return 0;
}