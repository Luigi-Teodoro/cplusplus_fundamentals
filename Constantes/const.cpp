#include <iostream>

//Las constantes es una forma de hacerle entender al codigo que una
//variable no puede ni debe ser modificada esto se deja en claro 
//cuando antes de declarar una variable de lo ponemos un const y 
// esta declaracion la ponemos en mayusculas.

int main(){

    const double PI = 3.14159;
    double radio = 10;
    //PI = 450.80; <-- Si intentamos cambiar la asignacion de la variable dara error
    double circunferencia = 2 * PI * radio;

    std::cout<<circunferencia<<"cm";
    return 0;
}