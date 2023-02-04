// 7. Intercambiar el valor de 2 variables utilizando paso de parámetros por referencia.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

void pedirValores(int&, int&);
void intercambiarVariable(int&, int&);

int main()
{
    setlocale(LC_ALL, "es_ES");

    int numero1, numero2;

    pedirValores(numero1, numero2);
    intercambiarVariable(numero1, numero2);

    cout << "\nEl nuevo primer valor: " << numero1 << endl;
    cout << "El nuevo segundo valor: " << numero2 << endl;

    return 0;
}

void pedirValores(int& N1, int& N2) {
    cout << "Ingrese el primer valor: "; cin >> N1;
    cout << "Ingrese el segundo valor: "; cin >> N2;
}

void intercambiarVariable(int& N1, int& N2)
{
    int aux;

    aux = N1;
    N1 = N2;
    N2 = aux;
}
