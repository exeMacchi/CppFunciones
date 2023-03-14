/*
    12. Realice una función que tome como parámetros un vector y su tamaño y 
        diga si el vector está ordenado crecientemente. Sugerencia: compruebe 
        que para todas las posiciones del vector, salvo para la 0, el elemento 
        del vector es mayor o igual que el elemento que le precede en el vector.
*/

#include <iostream>
#include <locale>

// Prototipos
void rellenarVector(int vNumeros[], int limite);
bool ordenadoCreciente(int vNumeros[], int limite);
void mostrarResultado(bool ordenado);

// Main
int main()
{
    setlocale(LC_ALL, "es_ES");

    constexpr int tamMax{ 10 };
    int vNumeros[tamMax]{};

    rellenarVector(vNumeros, tamMax);

    // Se verifica si el vector está ordenado y después se muestra el resultado
    mostrarResultado( ordenadoCreciente(vNumeros, tamMax) );

    return 0;
}

// Declaraciones 
void rellenarVector(int vNumeros[], int limite)
{
    for (int i{ 0 }; i < limite; i++)
    {
        std::cout << i + 1 << ". Ingrese un número: "; 
        std::cin >> vNumeros[i];
    }
    std::cout << "\n";
}

bool ordenadoCreciente(int vNumeros[], int limite)
{
    for (int i{ 0 }; i < limite - 1; i++)
    {
        if (vNumeros[i] > vNumeros[i + 1])
        {
            return false;
        }
    }
    return true;
}

void mostrarResultado(bool ordenado)
{
    if (ordenado)
    {
        std::cout << "El vector está ordenado en orden creciente." << "\n";
    }
    else
    {
        std::cout << "El vector no está ordenado en orden creciente." << "\n";
    }
}