// 12. Realice una funci�n que tome como par�metros un vector y su tama�o y diga si el vector est� ordenado 
//     crecientemente. Sugerencia: compruebe que para todas las posiciones del vector, salvo para la 0, el elemento
//     del vector es mayor o igual que el elemento que le precede en el vector.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

//Prototipos
void pedirDatos(int[], int);
bool ordenadoCreciente(int[], int);


//Main
int main()
{
    setlocale(LC_ALL, "es_ES");

    int vNumeros[10];
    bool ordenado = true;

    pedirDatos(vNumeros, 10);
    ordenado = ordenadoCreciente(vNumeros, 10);

    if (ordenado)
    {
        cout << "\nEl vector est� ordenado en orden creciente." << endl;
    }
    else
    {
        cout << "\nEl vector no est� ordenado en orden creciente." << endl;
    }
    return 0;
}

//Funciones
void pedirDatos(int vNumeros[], int limite)
{
    for (int i = 0; i < limite; i++)
    {
        cout << i + 1 << ". Ingrese un n�mero: "; cin >> vNumeros[i];
    }
}

bool ordenadoCreciente(int vNumeros[], int limite)
{
    for (int i = 0; i < limite - 1; i++)
    {
        if (vNumeros[i] > vNumeros[i + 1])
        {
            return false;
        }
    }
    return true;
}
