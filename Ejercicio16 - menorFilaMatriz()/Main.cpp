/*
    16. Realice una función que dada una matriz y un número de fila de la matriz 
        devuelva el menor de los elementos almacenados en dicha fila.
*/

#include <iostream>
#include <locale>

// Prototipos
int pedirFilas(const int tamMax);
int pedirColumnas(const int tamMax);
void rellenarMatriz(int mNumeros[][50], const int filas, const int columnas);
void mostrarMatriz(int mNumeros[][50], const int filas, const int columnas);
void buscarMenorFila(int mNumeros[][50], const int filas, const int columnas);

// Main
int main()
{
    setlocale(LC_ALL, "es_ES");

    constexpr int tamMax{ 50 };
    int mNumeros[tamMax][tamMax];
    const int filas{ pedirFilas(tamMax) }, columnas{ pedirColumnas(tamMax) };

    rellenarMatriz(mNumeros, filas, columnas);
	mostrarMatriz(mNumeros, filas, columnas);
    buscarMenorFila(mNumeros, filas, columnas);

    return 0;
}

// Declaraciones
int pedirFilas(const int tamMax)
{
    int filas{};

    do
    {
		std::cout << "Ingrese el número de filas (hasta " << tamMax << "): "; 
		std::cin >> filas;

        if (filas > tamMax || filas <= 0)
        {
            std::cout << "Error: tamaño fuera de los límites establecidos.\n";
        }
		std::cout << "\n";
    } while (filas > tamMax || filas <= 0);

    return filas;
}

int pedirColumnas(const int tamMax)
{
    int columnas{};

    do
    {
		std::cout << "Ingrese el número de columnas (hasta " << tamMax << "): "; 
		std::cin >> columnas;

        if (columnas > tamMax || columnas <= 0)
        {
            std::cout << "Error: tamaño fuera de los límites establecidos.\n";
        }
		std::cout << "\n";
    } while (columnas > tamMax || columnas <= 0);

    return columnas;
}

void rellenarMatriz(int mMatrix[][50], const int filas, const int columnas)
{
    for (int i{ 0 }; i < filas; i++)
    {
        for (int x{ 0 }; x < columnas; x++)
        {
            std::cout << "Ingrese un número (" << i << "-" << x << "): ";
            std::cin >> mMatrix[i][x];
        }
    }
    std::cout << "\n";
}

void mostrarMatriz(int mMatrix[][50], const int filas, const int columnas)
{
    for (int i{ 0 }; i < filas; i++)
    {
        for (int x{ 0 }; x < columnas; x++)
        {
            std::cout << mMatrix[i][x] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

void buscarMenorFila(int mNumeros[][50], const int filas, const int columnas)
{
    int menorFila{};
    bool banMenor{ false };

    for (int i{ 0 }; i < filas; i++)
    {
        for (int x{ 0 }; x < columnas; x++)
        {
            if (!banMenor)
            {
                menorFila = mNumeros[i][x];
                banMenor = true;
            }
            else if (mNumeros[i][x] < menorFila)
            {
                menorFila = mNumeros[i][x];
            }
        }
        std::cout << "El mínimo de la fila " << i + 1 << " es: " << menorFila 
                  << "\n";
        banMenor = false;
    }
}