// 15. Desarrollar una función que determine si una matriz es simétrica o no.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

//PROTOTIPOS
bool esSimetrica(int mMatrix[100][100], const int nFilas, const int nColumnas);
void mostrarMatriz(int mMatrix[100][100], const int nFilas, const int nColumnas);
void rellenarMatriz(int mMatrix[100][100], const int nFilas, const int nColumnas);

//MAIN
int main()
{
    setlocale(LC_ALL, "es_ES");

    int n1, n2;
    cout << "Ingrese la número de filas (hasta 100): "; cin >> n1;
    cout << "Ingrese la número de columnas (hasta 100): "; cin >> n2;
    cout << endl;

    int mMatrix[100][100];
    const int nFilas = n1, nColumnas = n2;
    bool simetrico = false;

    rellenarMatriz(mMatrix, nFilas, nColumnas);
    simetrico = esSimetrica(mMatrix, nFilas, nColumnas);
    mostrarMatriz(mMatrix, nFilas, nColumnas);

    if (simetrico)
    {
        cout << "\nLa matriz es simétrica." << endl;
    }
    else
    {
        cout << "\nLa matriz no es simétrica." << endl;
    }


    return 0;
}


//FUNCIONES
bool esSimetrica(int mMatrix[100][100], const int nFilas, const int nColumnas)
{
    int simetria = 0;

    if (nFilas == nColumnas)
    {
        for (int i = 0; i < nFilas; i++)
        {
            for (int x = 0; x < nColumnas; x++)
            {
                if (mMatrix[i][x] == mMatrix[x][i])
                {
                    simetria++;
                }
            }
        }

        if ((nFilas * nColumnas) == simetria)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

void mostrarMatriz(int mMatrix[100][100], const int nFilas, const int nColumnas)
{
    for (int i = 0; i < nFilas; i++)
    {
        for (int x = 0; x < nColumnas; x++)
        {
            cout << mMatrix[i][x] << " ";
        }
        cout << "\n";
    }
}

void rellenarMatriz(int mMatrix[100][100], const int nFilas, const int nColumnas)
{
    for (int i = 0; i < nFilas; i++)
    {
        for (int x = 0; x < nColumnas; x++)
        {
            cout << "Ingrese un número (" << i << "-" << x << "): ";
            cin >> mMatrix[i][x];
        }
    }
    cout << endl;
}

