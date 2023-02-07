// 13. Realiza una funci�n que tome como par�metros un vector de n�meros y su tama�o y cambie el signo de los elementos
//     del vector.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//PROTOTIPOS
void pedirDatos(int[], const int);
void cambiarSigno(int[], const int);
void presentarDatos(int[], const int);

//MAIN
int main()
{
    setlocale(LC_ALL, "es_ES");
    
    int vNumeros[100];
    int N{};

    cout << "Ingrese la cantidad de elementos del vector (hasta 100): "; cin >> N;

    if (N > 100 || N < 0) {
        cout << "Error: el n�mero sobrepasa los l�mites establecidos.\n";
        return 0;
    }
 
    const int tam = N;
    
    pedirDatos(vNumeros, tam);
    cambiarSigno(vNumeros, tam);
    presentarDatos(vNumeros, tam);

    return 0;
}

//FUNCIONES

void pedirDatos(int vNumeros[], const int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << i + 1 << ". Ingrese un n�mero: "; cin >> vNumeros[i];
    }
    cout << endl;
}

void cambiarSigno(int vNumeros[], const int tam)
{
    for (int i = 0; i < tam; i++)
    {
        vNumeros[i] *= -1;
    }
}

void presentarDatos(int vNumeros[], const int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << vNumeros[i] << " ";
    }
    cout << endl;
}
