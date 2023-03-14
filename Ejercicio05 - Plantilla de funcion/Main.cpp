/*
    5. Escriba una plantilla de función llamada despliegue() que despliegue el 
       valor del argumento único que se le transmite cuando es invocada la 
       función.
*/

#include <iostream>
#include <locale>

//Prototipos
template <typename T>
void despliegue(T dato);
void pedirDatos(int& numEntero, float& numFlotante, double& numDouble, 
                char& caracter);

//Main
int main()
{
    setlocale(LC_ALL, "es_ES");

    int numEntero{};
    float numFlotante{};
    double numDouble{};
    char caracter{};

    pedirDatos(numEntero, numFlotante, numDouble, caracter);
    despliegue(numEntero);
    despliegue(numFlotante);
    despliegue(numDouble);
    despliegue(caracter);

    return 0;
}

//Declaraciones
void pedirDatos(int& numEntero, float& numFlotante, double& numDouble, 
                char& caracter)
{
    std::cout << "Ingrese un número entero: "; std::cin >> numEntero;
    std::cout << "Ingrese un número real (float): "; std::cin >> numFlotante;
    std::cout << "Ingrese un número real (double): "; std::cin >> numDouble;
    std::cout << "Ingrese un carácter: "; std::cin >> caracter;
    std::cout << "\n";
}

template <typename T>
void despliegue(T dato)
{
    std::cout << "El dato es: " << dato << "\n";
}

