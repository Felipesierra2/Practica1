#include "ejercicios.h"
#include "validaciones.h"
#include <iostream>

void ejercicios(){
    int opcion;

    while(true){
        std::cout << "Bienvenido al menu de ejercicios" << std::endl;
        std::cout << "1-Ejercicio 1 " << std::endl;
        std::cout << "Ingrese una de las siguientes opciones: ";

        opcion = validarEntero();

        if(opcion == 1){
            std::cout << "Inciando ejercicio... " << std::endl;
            std::cout << "Ingrese un numero entero: ";
            int A = validarEntero();

            std::cout << "Ingrese un numero entero: ";
            int B = validarEntero();

            int residuo = 0;
            if (B == 0) residuo = 0;
            else residuo = A % B;
            std::cout << "El residuo de " << A << " y " << B << " es igual a: " << residuo << std::endl;
            std::cout << std::endl;
        }
        else if(opcion == 0){
            std::cout << "Finalizando ejecución del programa " << std::endl;

            break;
        }
    }

}
