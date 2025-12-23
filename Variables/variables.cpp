#include <iostream>


int main(){

    /*

    int x; // Declaracion
    x = 5; //Asignacion
    
    */

    int x = 5;
    int y = 6;
    int suma = x + y;

    //Ejemplo de variables enteras
    int edad = 19;
    int año = 2025;
    int dias = 24;
    int mes = 12;

    //Ejemplo de variables decimales (double o flotante)
    double precio = 10.99;
    double promedio = 2.5;
    double temperatura = 25.11231321321321;
    float precio2 = 22.98;
    double sueldo = 15.000;

    //Ejemplo de variable char osea texto (solo con un caracter)
    char calificacion = 'A';
    char inicial = 'L';
    char estado = 'O';

    //Ejemplo de variables booleanas (verdadero o falso)
    bool estudiante = false;
    bool encendido = true;
    bool venta = true;
    bool respuesta = false;

    //Ejemplos de variables string
    std::string nombre = "Luigi";
    std::string alias = "Hitaloco";

    std::cout<<temperatura; //Solo mostramos el valor de la variable
   std::cout<<"Hola "<<nombre;  //Escribimos el nombre de la variable declarada

    return 0;
}