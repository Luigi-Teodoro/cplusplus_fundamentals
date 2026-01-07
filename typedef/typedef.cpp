#include <iostream>
#include <vector>


//Los typedef es una manera de llamar a tipos de datos a 
//nombres muchos mas reducidos

/*

typedef std::vector<std::pair<std::string, int>> pair_list_t; // <- Es recomendable acaber el nombre con t para identificarlo 


int main(){

    pair_list_t pair_list;

    return 0;
}

*/

//Ejemplos sencillos de como podria usarme el typedef


typedef std::string text_t;
typedef double doble_t;
using numero_t = int; //Tambien podemos usar using (hace lo mismo que typedef)



int main(){

    text_t nombre = "Luigi";
    doble_t nota = 14.5;
    numero_t edad = 19;
    std::cout<<nombre<<'\n'<<"Y su nota es "<<nota<<'\n'<<"Ahora tiene "<<edad;
    return 0;
}