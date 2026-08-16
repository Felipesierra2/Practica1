#include <iostream>
#include "ejercicios.h"
#include "validaciones.h"

using namespace std;

int main()
{
    char opcion;

    std::cout << "==========Bienvenido al menú de la practica===========" << std::endl;
    std::cout << "1. Ejercicios " << std::endl;
    std::cout << "2. Problemas " << std::endl;
    std::cout << "0. Finalizar " << std::endl;
    std::cout << "Ingrese una de las siguientes opciones: ";

    opcion = obtenerOpcionValida();

    switch(opcion){
        case '1':
            std::cout << "Iniciando ejercicios... " << std::endl;
            ejercicios();
            break;
        case '2':
            std::cout << "Inciando problemas..." << std::endl;
            break;
        case'0':
            std::cout << "Finalizando ejecución..." << std::endl;
            break;
    }
    return 0;
}
