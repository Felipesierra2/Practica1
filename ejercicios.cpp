#include "ejercicios.h"
#include "validaciones.h"
#include <iostream>
#include <limits>

void ejercicios(){
    int opcion;

    while(true){
        std::cout << "Bienvenido al menu de ejercicios" << std::endl;
        std::cout << "1. Ejercicio 1 " << std::endl;
        std::cout << "3. Ejercicio 3" << std::endl;
        std::cout << "5. Ejercicio 5" << std::endl;
        std::cout << "7. Ejercicio 7" << std::endl;
        std::cout << "9. Ejercicio 9" << std::endl;
        std::cout << "11.Ejercicio 11" << std::endl;
        std::cout << "13.Ejercicio 13" << std::endl;
        std::cout << "15.Ejercicio 15" << std::endl;
        std::cout << "17.Ejercicio 17" << std::endl;
        std::cout << "19.Ejercicio 19" << std::endl;
        std::cout << "21.Ejercicio 21" << std::endl;
        std::cout << "23.Ejercicio 23" << std::endl;
        std::cout << "25.Ejercicio 25" << std::endl;
        std::cout << "27.Ejercicio 27" << std::endl;
        std::cout << "29.Ejercicio 29" << std::endl;

        std::cout << "Ingrese una de las siguientes opciones: ";

        opcion = validarEntero();

        if(opcion == 1){
            std::cout << "Inciando ejercicio... " << std::endl;
            std::cout << "Ingrese un numero entero: ";
            int A = validarEntero();

            std::cout << "Ingrese un numero entero: ";
            int B = validarEntero();

            float residuo = 0;
            if (B == 0) residuo = 0;
            else residuo = A % B;
            std::cout << "El residuo de " << A << " y " << B << " es igual a: " << residuo << std::endl;
            std::cout << std::endl;

        }else if(opcion == 3){
            std::cout << "Ingrese un numero entero: ";
            int A = validarEntero();

            std::cout << "Ingrese un numero entero: ";
            int B = validarEntero();

            if (A > B) std::cout << "El numero " << A << " es mayor a " << B << std::endl;

            else if( B > A) std::cout << "El numero " << B << " es mayor a " << A << std::endl;

            else if (A == B) std::cout << "Ambos numeros son iguales" << std::endl;

            std::cout << std::endl;
        }else if(opcion == 5){
            std::cout << "Ingrese un numero entero: ";
            int A = validarEntero();

            std::cout << "Ingrese un numero entero: ";
            int B = validarEntero();

            int div = (A >= 0) ? (A + B/2) / B : (A - B/2) / B;
            std::cout << "El resultado es: " << div << std::endl;
        }else if(opcion == 7){
            std::cout << "Ingrese un numero entero: ";
            int N = validarEntero();
            int result = 0;

            for (int i = 1; i <= N; i++){
                result +=i;
            }

            std::cout << "El resultado de la suma es: " << result << std::endl;
        }else if(opcion == 9){
            std::cout << "Ingrese un numero entero: ";
            int N = validarEntero();
            float perimetro,area;

            perimetro = 2 * 3.1416 * N;
            area = 3.1416 * N*N;

            std::cout << "El perimetro del circulo ede radio: "<< N << " es:" << perimetro << std::endl;
            std::cout << "El area del circulo de radio: " << N << " es: " << area << std::endl;
        }else if(opcion == 11){
            std::cout << "Ingrese un numero entero: ";
            int N = validarEntero();
            int result = 0;

            std::cout << "El resultado es: ";
            for (int i = 1; i <= 10 ; i++){
                result = N * i;
                std::cout << N << "x" << i << ": " << result << std::endl;
            }
        }else if(opcion == 13){
            std::cout << "Ingrese un numero entero: ";
            int N = validarEntero();
            int result = 0;

            for (int i = 1; i <= N; i++){
                if(N % i == 0){
                    std::cout << i << std::endl;
                }
            }
        }else if(opcion == 15){
            int suma = 0;
            while (true){
                std::cout << "Ingrese un numero: ";
                int init = validarEntero();
                if(init != 0){
                    suma+=init;
                }else if(init == 0){
                    break;
                }
            }
            std::cout << "El resultado de la suma de los valores ingresados es: " << suma << std::endl;
        }else if(opcion == 17){
            int suma = 0;
            int ant = 0;

            while(true){
                std::cout << "Ingrese un numero entero: ";
                int init = validarEntero();
                if(init != 0){
                    suma+= init;
                    if(init >= ant){
                        ant = init;
                    }
                }else if(init == 0){
                    break;
                }
            }
            std::cout << "El valor mayor de los valores ingresados es: " << ant << std::endl;
        }else if(opcion == 19){
            std::cout << "Ingrese un numero entero: ";
            int N = validarEntero();
            int cont = 0;

            for (int i = 1; i <= N; i++){
                if (N % i == 0){
                    cont+=1;
                }
            }

            if (cont == 2) std::cout << "El numero: " << N << " es primo" << std::endl;
            else std::cout << "El numero: " << N << " no es primo" << std::endl;

        }else if(opcion == 21){
            char c;

            std::cout << "Ingrese un caracter: ";
            std::cin >> c;

            if (c >= 'A' && c <= 'Z') {

                c = c + ('a' - 'A');
                std::cout << "Letra convertida: " << c << std::endl;
            }

            else if (c >= 'a' && c <= 'z') {

                c = c - ('a' - 'A');
                std::cout << "Letra convertida: " << c << std::endl;
            }
            else {
                std::cout << "El caracter ingresado no es una letra" << std::endl;
            }
        }else if(opcion == 23){
            std::cout << "Ingrese un numero entero: ";
            int A = validarEntero();

            std::cout << "Ingrese un numero entero: ";
            int B = validarEntero();

            int resulA = A;
            int resulB = B;
            int total = 1;
            int cont = 2;

            while (resulA != 1 || resulB != 1){
                if((resulA % cont) == 0 || (resulB % cont) == 0) {
                    total = total * cont;

                    if((resulA % cont) == 0){
                        resulA = resulA / cont;
                    }

                    if((resulB % cont) == 0){
                        resulB = resulB / cont;
                    }

                    if ((resulA % cont) == 0 || (resulB % cont) == 0){
                        continue;
                    }else{
                        cont+=1;
                    }
                }else{
                    cont+=1;
                }
            }
            if(resulA == 1 || resulB == 1){
                std::cout << "El MCM entre: " << A << " y " << B << " es: " << total << std::endl;
            }else{
                total = total * cont;
                std::cout << "El MCM entre: " << A << " y " << B << " es: " << total << std::endl;
            }
        }else if(opcion == 25){
            std::cout << "Ingrese un numero entero: ";
            int N = validarEntero();
            int contador = 0;

            if (N == 0) {
                contador = 1;
            } else {
                if (N < 0) {
                    N = -N;
                }

                while (N > 0) {
                    N = N / 10;
                    contador++;
                }

            }

            std::cout << "El número tiene " << contador << " dígito(s)" << std::endl;
        }else if(opcion == 27){
            double num1, num2, resultado;
            char operacion;
            bool entradaValida;

            auto limpiarBuffer = []() {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            };

            do {
                std::cout << "Ingrese el primer número: ";
                std::cin >> num1;

                if (std::cin.fail()) {
                    std::cout << "Error: Debe ingresar un número válido" << std::endl;
                    limpiarBuffer();
                    entradaValida = false;

                } else {
                    entradaValida = true;
                }
            } while (!entradaValida);

            do {
                std::cout << "Ingrese la operación (+, -, *, /): ";
                std::cin >> operacion;

                if (operacion != '+' && operacion != '-' && operacion != '*' && operacion != '/') {
                    std::cout << "Error: Operación no válida. Use +, -, * o /" << std::endl;
                    limpiarBuffer();
                    entradaValida = false;

                } else {
                    entradaValida = true;
                }
            } while (!entradaValida);

            do {
                std::cout << "Ingrese el segundo número: ";
                std::cin >> num2;

                if (std::cin.fail()) {
                    std::cout << "Error: Debe ingresar un número válido" << std::endl;
                    limpiarBuffer();
                    entradaValida = false;
                } else {
                    entradaValida = true;
                }
            } while (!entradaValida);

            if (operacion == '+') {
                resultado = num1 + num2;
                std::cout << num1 << "+" << num2 << "=" << resultado << std::endl;
            }
            else if (operacion == '-') {
                resultado = num1 - num2;
                std::cout << num1 << "-" << num2 << "=" << resultado << std::endl;
            }
            else if (operacion == '*') {
                resultado = num1 * num2;
                std::cout << num1 << "*" << num2 << "=" << resultado << std::endl;
            }
            else if (operacion == '/') {
                if (num2 != 0) {
                    resultado = num1 / num2;
                    std::cout << num1 << "/" << num2 << "=" << resultado << std::endl;
                } else {
                    std::cout << "Error: No se puede dividir entre cero" << std::endl;
                }
            }
        }else if(opcion == 29){
            int ini = 0;
            int fin = 100;
            bool entradaValida;

            auto limpiarBuffer = []() {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            };

            while(true){
                int result = (ini + fin) / 2;
                std::cout << "El numero es: " << result << std::endl;
                char ope;

                do{
                    std::cout << "Ingrese uno de los siguientes operadores >, < o =: ";
                    std::cin >> ope;

                    if (ope != '>' && ope != '<' && ope != '=') {
                        std::cout << "Error: Operación no válida. Use >,< o =" << std::endl;
                        limpiarBuffer();
                        entradaValida = false;

                    } else {
                        entradaValida = true;
                    }
                }while(!entradaValida);

                if(ope == '>'){
                    ini = result + 1;

                }else if(ope == '<'){
                    fin = result - 1;

                }else if(ope == '=') {
                    std::cout <<"Respuesta correcta" << std::endl;
                    break;
                }

                if(ini > fin){
                    std::cout << "Error: No se puede encontrar el numero con las indicaciones dadas" << std::endl;
                    return;
                }
            }
        }
        else if(opcion == 0){
            std::cout << "Finalizando ejecución del programa " << std::endl;
            break;
        }
    }

}
