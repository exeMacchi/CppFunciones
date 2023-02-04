// 16. Realice una función que dada una matriz y un número de fila de la matriz devuelva el menor de los elementos
//     almacenados en dicha fila.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

// PROTOTIPOS
void pedirDatos(int& n1, int& n2);
void rellenarMatriz(int mNumeros[100][100], const int nFilas, const int nColumnas);
void buscarMenorFila(int mNumeros[100][100], const int nFilas, const int nColumnas);
void mostrarMatriz(int mNumeros[100][100], const int nFilas, const int nColumnas);


//MAIN
int main()
{
    setlocale(LC_ALL, "es_ES");

    int mNumeros[100][100];
    int n1, n2;

    pedirDatos(n1, n2);
    const int nFilas = n1, nColumnas = n2;

    rellenarMatriz(mNumeros, nFilas, nColumnas);
    mostrarMatriz(mNumeros, nFilas, nColumnas);
    buscarMenorFila(mNumeros, nFilas, nColumnas);

    return 0;
}


//FUNCIONES
void pedirDatos(int& n1, int& n2)
{
    cout << "Ingrese el número de filas (hasta 100): "; cin >> n1;
    cout << "Ingrese el número de columnas (hasta 100): "; cin >> n2;

    if (n1 > 100 || n1 < 0)
    {
        cout << "Error: número fuera de rango. Se establece 3 como valor por defecto.";
        n1 = 3;
    }
    
    if (n2 > 100 || n2 < 0)
    {
        cout << "Error: número fuera de rango. Se establece 3 como valor por defecto.";
        n2 = 3;
    }

    cout << endl;
}

void rellenarMatriz(int mNumeros[100][100], const int nFilas, const int nColumnas)
{
    for (int i = 0; i < nFilas; i++)
    {
        for (int x = 0; x < nColumnas; x++)
        {
            cout << "Ingrese un número (" << i << "-" << x << "): ";
            cin >> mNumeros[i][x];
        }
    }
    cout << endl;
}

void buscarMenorFila(int mNumeros[100][100], const int nFilas, const int nColumnas)
{
    int menorFila;
    bool banMenor = false;

    for (int i = 0; i < nFilas; i++)
    {
        for (int x = 0; x < nColumnas; x++)
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
        cout << "El mínimio de la fila " << i << " es: " << menorFila << endl;
        banMenor = false;
    }
}

void mostrarMatriz(int mNumeros[100][100], const int nFilas, const int nColumnas)
{
    for (int i = 0; i < nFilas; i++)
    {
        for (int x = 0; x < nColumnas; x++)
        {
            cout << mNumeros[i][x] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
