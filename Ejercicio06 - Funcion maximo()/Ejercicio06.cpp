// 6. Escriba una plantilla de función llamada maximo() que devuelva el valor máximo de tres argumentos que se 
//    transmitan a la función cuando sea llamada. Suponga que los tres argumentos serán del mismo tipo de datos.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

//Prototipos
template <class tipoD>
void maximo(tipoD valor1, tipoD valor2, tipoD valor3);
void pedirOpcion(short& opcion);
void pedirDatos(short opcion, int numEntero1, int numEntero2, int numEntero3, float numFlotante1, float numFlotante2,
                float numFlotante3, char caracter1, char caracter2, char caracter3);

//MAIN
int main()
{
    setlocale(LC_ALL, "es_ES");

    short opcion;
    int numEntero1 = 0, numEntero2 = 0, numEntero3 = 0;
    float numFlotante1 = 0, numFlotante2 = 0, numFlotante3 = 0;
    char caracter1 = '?', caracter2 = '?', caracter3 = '?';

    pedirOpcion(opcion);
    pedirDatos(opcion, numEntero1, numEntero2, numEntero3, numFlotante1, numFlotante2, numFlotante3, caracter1,
        caracter2, caracter3);

    return 0;
}

//Declaraciones
void pedirOpcion(short& opcion)
{
    cout << "Seleccione una de las siguientes opciones: " << endl;
    cout << "1. Número entero." << endl;
    cout << "2. Número real." << endl;
    cout << "3. Caracter." << endl;
    cout << "Ingrese su opción: "; cin >> opcion;
    while (opcion > 3 || opcion < 1)
    {
        cout << "Por favor, seleccione una opción disponible: "; cin >> opcion;
    }
    cout << "-------------------------------------------------" << endl;
}

void pedirDatos(short opcion, int numEntero1, int numEntero2, int numEntero3, float numFlotante1, float numFlotante2,
    float numFlotante3, char caracter1, char caracter2, char caracter3)
{
    switch (opcion)
    {
        case 1:
            cout << "Ingrese el primer número entero: "; cin >> numEntero1;
            cout << "Ingrese el segundo número entero: "; cin >> numEntero2;
            cout << "Ingrese el tercer número entero: "; cin >> numEntero3;
            maximo(numEntero1, numEntero2, numEntero3);
            break;

        case 2:
            cout << "Ingrese el primer número real: "; cin >> numFlotante1;
            cout << "Ingrese el segundo número real: "; cin >> numFlotante2;
            cout << "Ingrese el tercer número real: "; cin >> numFlotante3;
            maximo(numFlotante1, numFlotante2, numFlotante3);
            break;

        case 3:
            cout << "Ingrese el primer caracter: "; cin >> caracter1;
            cout << "Ingrese el segundo caracter: "; cin >> caracter2;
            cout << "Ingrese el tercer caracter: "; cin >> caracter3;
            maximo(caracter1, caracter2, caracter3);
            break;
    }
}

template <class tipoD>
void maximo(tipoD valor1, tipoD valor2, tipoD valor3)
{
    tipoD maximo;

    if (valor1 > valor2 && valor1 > valor3)
    {
        maximo = valor1;
    }
    else if (valor2 > valor1 && valor2 > valor3)
    {
        maximo = valor2;
    }
    else
    {
        maximo = valor3;
    }
    cout << "\n-------------------------------------------------" << endl;
    cout << "El máximo es: " << maximo << endl;
    cout << "-------------------------------------------------" << endl;
}
