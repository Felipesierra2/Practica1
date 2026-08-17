#include "ejercicios.h"
#include "validaciones.h"
#include <iostream>

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

        }
        else if(opcion == 0){
            std::cout << "Finalizando ejecución del programa " << std::endl;

            break;
        }
    }

}
