// 15. Desarrollar una función que determine si una matriz es simétrica o no.

#include <iostream>
#include <locale>

// Prototipos
int pedirFilas(const int tamMax);
int pedirColumnas(const int tamMax);
bool esSimetrica(int mMatrix[][50], const int filas, const int columnas);
void mostrarMatriz(int mMatrix[][50], const int filas, const int columnas);
void rellenarMatriz(int mMatrix[][50], const int filas, const int columnas);
void mostrarResultado(bool simetrico);

// Main
int main()
{
    setlocale(LC_ALL, "es_ES");

    constexpr int tamMax{ 50 };
    int mMatrix[tamMax][tamMax];
    const int filas{ pedirFilas(tamMax) }, columnas{ pedirColumnas(tamMax) };
    bool simetrico{ false };

    if (filas == columnas)
    {
		rellenarMatriz(mMatrix, filas, columnas);
		simetrico = esSimetrica(mMatrix, filas, columnas);
		mostrarMatriz(mMatrix, filas, columnas);
        mostrarResultado(simetrico);
    }
    else
    {
        std::cout << "La matriz no puede ser simétrica porque el número de "
                 << "filas y columnas no es igual." << "\n";
    }

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


bool esSimetrica(int mMatrix[][50], const int filas, const int columnas)
{
    int simetria{ 0 };

    for (int i{ 0 }; i < filas; i++)
	{
        for (int x{ 0 }; x < columnas; x++)
		{
			if (mMatrix[i][x] == mMatrix[x][i])
			{
				simetria++;
			}
		}
	}

	if ((filas * columnas) == simetria)
	{
		return true;
	}
	else
	{
		return false;
	}
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
}

void mostrarResultado(bool simetrico)
{
	if (simetrico)
	{
		std::cout << "\nLa matriz es simétrica." << "\n";
	}
	else
	{
		std::cout << "\nLa matriz no es simétrica." << "\n";
	}
}
