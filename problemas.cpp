#include "problemas.h"
#include "validaciones.h"
#include <iostream>

void problemas(){
    int opcion;
    while(true){
        std::cout << std::endl;
        std::cout << "======Bienvenido al menú de los problemas======" << std::endl;
        std::cout << "1.Problema 1 " << std::endl;
        std::cout << "Ingrese una de las siguientes opciones: ";

        opcion = validarEntero();

        if(opcion == 1){
            char caracter;

            std::cout << "Ingrese un carácter: ";
            std::cin >> caracter;

            if (esVocal(caracter)) {
                std::cout << "El carácter '" << caracter << "' es una vocal" << std::endl;
            }
            else if (esLetra(caracter)) {
                std::cout << "El carácter '" << caracter << "' es una consonante" << std::endl;
            }
            else {
                std::cout << "El carácter '" << caracter << "' no es una vocal ni una consonante" << std::endl;
            }
        }else if(opcion == 3){

        }
        else if(opcion == 0){
            std::cout << "Finalizando el programa..." << std::endl;
            break;
        }
    }

}
