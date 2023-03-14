/*
    5. Escriba una plantilla de funci�n llamada despliegue() que despliegue el 
       valor del argumento �nico que se le transmite cuando es invocada la 
       funci�n.
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
    std::cout << "Ingrese un n�mero entero: "; std::cin >> numEntero;
    std::cout << "Ingrese un n�mero real (float): "; std::cin >> numFlotante;
    std::cout << "Ingrese un n�mero real (double): "; std::cin >> numDouble;
    std::cout << "Ingrese un car�cter: "; std::cin >> caracter;
    std::cout << "\n";
}

template <typename T>
void despliegue(T dato)
{
    std::cout << "El dato es: " << dato << "\n";
}

