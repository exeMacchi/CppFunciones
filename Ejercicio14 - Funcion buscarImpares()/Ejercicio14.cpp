// 14. Realiza una función que tome como parámetros un vector de enteros y su tamaño e imprima un vector con los 
//     elementos impares del vector recibido.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

//PROTOTIPOS
void pedirDatos(int vNumeros[], const int tam);
void buscarImpares(int vNumeros[], int vNumerosImpares[], const int tam, int& contadorImpares);
void mostarDatos(int vNumerosImpares[], int contadorImpares);

int main()
{
    setlocale(LC_ALL, "es_ES");
    int vNumeros[100], vNumerosImpares[100], contadorImpares{ 0 };

    int N{};
    cout << "Ingrese la cantidad de elementos del vector (hasta 100): "; cin >> N;

    const int tam = N;

    pedirDatos(vNumeros, tam);
    buscarImpares(vNumeros, vNumerosImpares, tam, contadorImpares);
    mostarDatos(vNumerosImpares, contadorImpares);

    return 0;
}

//FUNCIONES

void pedirDatos(int vNumeros[], const int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << i + 1 << ". Ingrese un número: "; cin >> vNumeros[i];
    }
}


void buscarImpares(int vNumeros[], int vNumerosImpares[], const int tam, int& contadorImpares)
{
    for (int i = 0; i < tam; i++)
    {
        if ((vNumeros[i] % 2) != 0)
        {
            vNumerosImpares[contadorImpares] = vNumeros[i];
            contadorImpares++;
        }
    }
}

void mostarDatos(int vNumerosImpares[], int contadorImpares)
{
    cout << "\nLista de números impares: ";
    for (int i = 0; i < contadorImpares; i++)
    {
        cout << vNumerosImpares[i] << " ";
    }
    cout << endl;
}
