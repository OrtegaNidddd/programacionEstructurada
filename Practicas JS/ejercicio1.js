/*
 * Escribe una función que reciba dos palabras (String) y retorne
 * verdadero o falso (Bool) según sean o no anagramas.
 * - Un Anagrama consiste en formar una palabra reordenando TODAS
 *   las letras de otra palabra inicial.
 * - NO hace falta comprobar que ambas palabras existan.
 * - Dos palabras exactamente iguales no son anagrama.
 */

function anagrama(palabra1, palabra2) {
    
    if (palabra1 === palabra2) {
        return false;
    }

    let arr1 = palabra1.split("");
    let arr2 = palabra2.split("");

    arr1.sort();
    arr2.sort();

    return arr1.join("") === arr2.join("");

}
