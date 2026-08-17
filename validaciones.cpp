#include "validaciones.h"
#include <iostream>

char obtenerOpcionValida(){
    char input;
    bool valido = false;

    do{
        std::cin >> input;

        if(isdigit(input) && (input == '0' || input == '1' || input =='2')){
            valido = true;
        } else{
            std::cout << "Opcion invalida. Intente nuevamente(1,2 o 0): ";
            std::cin.clear();
            std::cin.ignore(1000, '\n');

        }

    }while(!valido);

    return input;
}

bool esNumero(char entrada[]) {
    int i = 0;

    while (entrada[i] != '\0') {
        if (entrada[i] < '0' || entrada[i] > '9') {
            return false;
        }
        i++;
    }

    return true;
}

int validarEntero(){
    char entrada[20];

    while (true) {
        std::cin >> entrada;

        if (esNumero(entrada)) {
            int numero = 0;

            for (int i = 0; entrada[i] != '\0'; i++) {
                numero = numero * 10 + (entrada[i] - '0');
            }

            return numero;
        }

        std::cout << "Entrada invalida. Ingrese un numero: ";
    }
}

bool esVocal(char c) {
    if (c >= 'A' && c <= 'Z') {
        c = c + 32;
    }

    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool esLetra(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}
