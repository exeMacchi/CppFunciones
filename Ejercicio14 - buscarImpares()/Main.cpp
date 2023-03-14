/*
    14. Realiza una funci�n que tome como par�metros un vector de enteros y su 
        tama�o e imprima un vector con los elementos impares del vector recibido.
*/

#include <iostream>
#include <locale>

// Prototipos
void rellenarVector(int vNumeros[], const int tamMax);
void buscarImpares(int vNumeros[], int vNumerosImpares[], const int tamMax, 
                   int& contadorImpares);
void mostarDatos(int vNumerosImpares[], int contadorImpares);

// Main
int main()
{
    setlocale(LC_ALL, "es_ES");
    constexpr int tamMax{ 10 };
    int vNumeros[tamMax]{}, vNumerosImpares[tamMax]{}, contadorImpares{ 0 };

    rellenarVector(vNumeros, tamMax);
    buscarImpares(vNumeros, vNumerosImpares, tamMax, contadorImpares);
    mostarDatos(vNumerosImpares, contadorImpares);

    return 0;
}

// Declaraciones
void rellenarVector(int vNumeros[], const int tamMax)
{
    for (int i{ 0 }; i < tamMax; i++)
    {
        std::cout << i + 1 << ". Ingrese un n�mero: "; std::cin >> vNumeros[i];
    }
    std::cout << "\n";
}

void buscarImpares(int vNumeros[], int vNumerosImpares[], const int tamMax, 
                   int& contadorImpares)
{
    for (int i{ 0 }; i < tamMax; i++)
    {
        if (vNumeros[i] % 2 != 0)
        {
            vNumerosImpares[contadorImpares] = vNumeros[i];
            contadorImpares++;
        }
    }
}

void mostarDatos(int vNumerosImpares[], int contadorImpares)
{
    std::cout << "Lista de n�meros impares: ";
    for (int i{ 0 }; i < contadorImpares; i++)
    {
        std::cout << vNumerosImpares[i] << " ";
    }
    std::cout << "\n";
}