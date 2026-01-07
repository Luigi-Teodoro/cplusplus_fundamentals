#include <iostream>


namespace primero {
    int x = 1;

}

namespace segundo {
    int x = 2;
}

int main(){


    //using namespace primero; <- Tambien podemos llamarlo para usarlo de manera local
    //using namespace std; <- Ya no necesitamos poder el std:: para imprimir mensajes 

    int x = 0;
    std::cout<<"X es igual a "<<primero::x<<'\n';
    std::cout<<"X tambien es igual a "<<segundo::x;
    return 0;

}