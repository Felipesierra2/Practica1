#include "problemas.h"
#include "validaciones.h"
#include <iostream>

void problemas(){
    int opcion;
    while(true){
        std::cout << std::endl;
        std::cout << "======Bienvenido al menú de los problemas======" << std::endl;
        std::cout << "1. Problema 1 " << std::endl;
        std::cout << "3. Problema 3" << std::endl;
        std::cout << "5. Problema 5" << std::endl;
        std::cout << "7. Problema 7" << std::endl;
        std::cout << "9. Problema 9" << std::endl;
        std::cout << "11.Problema 11" << std::endl;
        std::cout << "13.Problema 13" << std::endl;
        std::cout << "15.Problema 15" << std::endl;
        std::cout << "17.Problema 17" << std::endl;
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
            std::cout << "Ingrese el mes: ";
            int mes = validarEntero();

            std::cout << "Ingrese el dia: ";
            int dia = validarEntero();

            if (mes < 1 || mes > 12) {
                std::cout << mes << " es un mes invalido." << std::endl;
                return;
            }

            bool fechaValida = false;
            bool posibleBisiesto = false;

            switch(mes) {
            case 1:  // Enero
            case 3:  // Marzo
            case 5:  // Mayo
            case 7:  // Julio
            case 8:  // Agosto
            case 10: // Octubre
            case 12: // Diciembre
                if (dia >= 1 && dia <= 31) {
                    fechaValida = true;
                }
                break;

            case 4:  // Abril
            case 6:  // Junio
            case 9:  // Septiembre
            case 11: // Noviembre
                if (dia >= 1 && dia <= 30) {
                    fechaValida = true;
                }
                break;

            case 2:  // Febrero
                if (dia >= 1 && dia <= 28) {
                    fechaValida = true;
                } else if (dia == 29) {
                    fechaValida = true;
                    posibleBisiesto = true;
                }
                break;
            }

            if (!fechaValida) {
                std::cout << dia << "/" << mes << " es una fecha invalida." << std::endl;
            } else if (posibleBisiesto) {
                std::cout << dia << "/" << mes << " es valida en bisiesto." << std::endl;
            } else {
                std::cout << dia << "/" << mes << " es una fecha valida." << std::endl;
            }
        }else if(opcion == 5){
            std::cout << "Ingrese el tamaño del rombo (número impar): ";
            int n = validarEntero();

            if (n % 2 == 0) {
                std::cout << "Error: Debe ingresar un número impar." << std::endl;
                n+= 1;
            }

            for (int i = 1; i <= n; i += 2) {
                int espacios = (n - i) / 2;
                for (int j = 0; j < espacios; j++) {
                    std::cout << ' ';
                }

                for (int j = 0; j < i; j++) {
                    std::cout << '*';
                }
                std::cout << std::endl;
            }

            for (int i = n - 2; i >= 1; i -= 2) {
                int espacios = (n - i) / 2;
                for (int j = 0; j < espacios; j++) {
                    std::cout << ' ';
                }

                for (int j = 0; j < i; j++) {
                    std::cout << '*';
                }
                std::cout << std::endl;
            }
        }else if(opcion == 7){
            std::cout << "Ingrese un numero entero: ";
            int n = validarEntero();

            if (n <= 1) {
                std::cout << "El resultado de la suma es: 0" << std::endl;
                return;
            }

            int a = 1;
            int b = 1;
            int suma = 0;


            if (a < n && a % 2 == 0) {
                suma = suma + a;
            }

            if (b < n && b % 2 == 0) {
                suma = suma + b;
            }

            int siguiente = a + b;
            while (siguiente < n) {
                if (siguiente % 2 == 0) {
                    suma = suma + siguiente;
                }

                a = b;
                b = siguiente;
                siguiente = a + b;
            }

            std::cout << "El resultado de la suma es: " << suma << std::endl;
        }else if(opcion == 9){
            std::cout << "Ingrese un numero entero: ";
            int n = validarEntero();

            if (n == 0) {
                std::cout << "El resultado de la suma es: 0" << std::endl;
                return;
            }

            if (n < 0) {
                n = -n;
            }

            int suma = 0;
            int temp = n;

            while (temp > 0) {
                int digito = temp % 10;

                int potencia = 1;
                for (int i = 0; i < digito; i++) {
                    potencia = potencia * digito;
                }

                suma = suma + potencia;

                temp = temp / 10;
            }

            std::cout << "El resultado de la suma es: " << suma << std::endl;
        }else if(opcion == 11){
            std::cout << "Ingrese un numero: ";
            int numero;

            if (numero < 1) {
                std::cout << "El numero debe ser mayor o igual a 1" << std::endl;
                return;
            }

            int mcm = 1;

            for (int i = 1; i <= numero; i++) {
                mcm = calcularMCM(mcm, i);
            }

            std::cout << "El minimo comun multiplo es: " << mcm << std::endl;
        }else if(opcion == 13){
            std::cout << "Ingrese un número: ";
            int numero = validarEntero();
            int suma = 0;

            for (int i = 2; i < numero; i++) {
                if (esPrimo(i)) {
                    suma += i;
                }
            }

            std::cout << "El resultado de la suma es: " << suma << std::endl;
        }else if(opcion == 15){
            std::cout << "Ingrese un numero impar: ";
            int n = validarEntero();

            int** matriz = new int*[n];

            for (int i = 0; i < n; i++)
            {
                matriz[i] = new int[n];
            }

            int fila = n / 2;
            int columna = n / 2;

            int numero = 1;

            matriz[fila][columna] = numero;

            int direccion = 0;

            int pasos = 1;

            while (numero < n * n)
            {
                for (int repeticion = 0; repeticion < 2; repeticion++)
                {
                    for (int i = 0; i < pasos; i++)
                    {
                        if (direccion == 0)
                        {
                            columna++;
                        }
                        else if (direccion == 1)
                        {
                            fila++;
                        }
                        else if (direccion == 2)
                        {
                            columna--;
                        }
                        else if (direccion == 3)
                        {
                            fila--;
                        }

                        numero++;

                        if (numero <= n * n)
                        {
                            matriz[fila][columna] = numero;
                        }
                    }

                    direccion++;

                    if (direccion == 4)
                    {
                        direccion = 0;
                    }
                }

                pasos++;
            }

            std::cout << "\nEspiral:\n\n";

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    std::cout << matriz[i][j] << "\t";
                }

                std::cout << "\n";
            }

            int suma = 0;

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == j || i + j == n - 1)
                    {
                        suma += matriz[i][j];
                    }
                }
            }

            std::cout << "\nLa suma de las diagonales es: " << suma << std::endl;

            for (int i = 0; i < n; i++)
            {
                delete[] matriz[i];
            }

            delete[] matriz;

        }else if(opcion == 17){
            std::cout << "Ingrese k: ";
            int k = validarEntero();

            int n = 1;
            int numeroTriangular;
            int divisores;

            do
            {
                numeroTriangular = n * (n + 1) / 2;

                divisores = contarDivisores(numeroTriangular);

                n++;

            } while (divisores <= k);

            std::cout << "El numero es: " << numeroTriangular
                 << " que tiene " << divisores
                 << " divisores" << std::endl;
        }
        else if(opcion == 0){
            std::cout << "Finalizando el programa..." << std::endl;
            break;
        }
    }

}
