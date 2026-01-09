#include <iostream>

int main(){
    double x = (int)3.14; //<-- De esta manera podemos forzar a un numero lo muestre como entero
                          // Ejm en este declaramos un decimal con double pero le ponemos un int  
    char y = 100;

    std::cout<<x<<'\n'<<y;
    return 0;
}