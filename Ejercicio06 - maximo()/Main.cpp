/*
    6. Escriba una plantilla de función llamada maximo() que devuelva el valor 
       máximo de tres argumentos que se transmitan a la función cuando sea 
       llamada. Suponga que los tres argumentos serán del mismo tipo de datos.
*/

#include <iostream>
#include <locale>

// Prototipos
template <typename T>
void maximo(T valor1, T valor2, T valor3);
short pedirOpcion();
void pedirDatos(short opcion, int numEntero1, int numEntero2, int numEntero3, 
                float numFlotante1, float numFlotante2, float numFlotante3, 
                char caracter1, char caracter2, char caracter3);

// Main
int main()
{
    setlocale(LC_ALL, "es_ES");

    int numEntero1{}, numEntero2{}, numEntero3{};
    float numFlotante1{}, numFlotante2{}, numFlotante3{};
    char caracter1{}, caracter2{}, caracter3{};
    short opcion{ pedirOpcion() };

    pedirDatos(opcion, numEntero1, numEntero2, numEntero3, numFlotante1, 
               numFlotante2, numFlotante3, caracter1, caracter2, caracter3);

    return 0;
}

//Declaraciones
short pedirOpcion()
{
    short opcion{};

    std::cout << "Seleccione una de las siguientes opciones: " << "\n";
    std::cout << "1. Número entero" << "\n";
    std::cout << "2. Número real" << "\n";
    std::cout << "3. Carácter" << "\n";
    std::cout << "Ingrese su opción: "; std::cin >> opcion;

    while (opcion > 3 || opcion < 1)
    {
        std::cout << "Por favor, seleccione una opción disponible: "; 
        std::cin >> opcion;
    }
    std::cout << "---------------------------------------------------" << "\n";

    return opcion;
}

void pedirDatos(short opcion, int numEntero1, int numEntero2, int numEntero3, 
                float numFlotante1, float numFlotante2, float numFlotante3, 
                char caracter1, char caracter2, char caracter3)
{
    switch (opcion)
    {
        case 1:
            std::cout << "Ingrese el primer número entero: "; 
            std::cin >> numEntero1;

            std::cout << "Ingrese el segundo número entero: ";
            std::cin >> numEntero2;

            std::cout << "Ingrese el tercer número entero: "; 
            std::cin >> numEntero3;

            maximo(numEntero1, numEntero2, numEntero3);
            break;

        case 2:
            std::cout << "Ingrese el primer número real: "; 
            std::cin >> numFlotante1;

            std::cout << "Ingrese el segundo número real: "; 
            std::cin >> numFlotante2;

            std::cout << "Ingrese el tercer número real: "; 
            std::cin >> numFlotante3;
            
            maximo(numFlotante1, numFlotante2, numFlotante3);
            break;

        case 3:
            std::cout << "Ingrese el primer carácter: "; 
            std::cin >> caracter1;

            std::cout << "Ingrese el segundo carácter: "; 
            std::cin >> caracter2;

            std::cout << "Ingrese el tercer carácter: ";
            std::cin >> caracter3;
            
            maximo(caracter1, caracter2, caracter3);
            break;
    }
}

template <typename T>
void maximo(T valor1, T valor2, T valor3)
{
    T maximo{ valor1 };

    if (valor2 > maximo)
    {
        maximo = valor2;
    }

    if (valor3 > maximo)
    {
        maximo = valor3;
    }

    std::cout << "---------------------------------------------------" << "\n";
    std::cout << "El máximo es: " << maximo << "\n";
    std::cout << "---------------------------------------------------" << "\n";
}