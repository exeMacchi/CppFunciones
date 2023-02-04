// 11. Realice una funci�n que tome como par�metros un vector de n�meros enteros y devuelva la suma de sus elementos.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int sumarVector(int[], int);


int main()
{
    int vNumeros[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int suma = 0;
    int limite = sizeof(vNumeros) / sizeof(int);

    suma = sumarVector(vNumeros, limite);

    cout << "La suma total: " << suma << endl;

    return 0;
}



int sumarVector(int vNumeros[], int limite)
{
    int suma = 0;

    for (int i = 0; i < limite; i++)
    {
        suma += vNumeros[i];
    }

    return suma;
}