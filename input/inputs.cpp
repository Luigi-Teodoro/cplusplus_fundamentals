#include <iostream>

int main(){
    std::string nombre;
    int edad;


    std::cout<<"Cual es tu edad"<<'\n';
    std::cin >> edad;

    std::cout<<"Cual es tu nombre"<<'\n';
    std::getline(std::cin>>std::ws, nombre); //Cadena para que tengan espacios los inputs en texto

    std::cout<<"Tu nombre es "<<nombre<<" y tienes "<<edad<<" años";

    return 0;
}