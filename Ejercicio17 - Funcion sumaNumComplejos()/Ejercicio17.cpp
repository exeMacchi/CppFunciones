// 17. Suma de números Complejos

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

struct complejos
{
    float real;
    float imaginario;
}num1, num2;

//PROTOTIPOS
void pedirDatos();
complejos sumaComplejos();
void mostrarResultado(complejos resultado);


//MAIN
int main()
{
    setlocale(LC_ALL, "es_ES");
    complejos resultado;

    pedirDatos();
    resultado = sumaComplejos();
    mostrarResultado(resultado);

    return 0;
}


//FUNCIONES
void pedirDatos()
{
    cout << "------------ Información del primer número complejo ------------" << endl;
    cout << "Ingrese el número real: "; cin >> num1.real;
    cout << "Ingrese el número imaginario: "; cin >> num1.imaginario;
    cout << endl;

    cout << "------------ Información del segundo número complejo ------------" << endl;
    cout << "Ingrese el número real: "; cin >> num2.real;
    cout << "Ingrese el número imaginario: "; cin >> num2.imaginario;
    cout << endl;
}

complejos sumaComplejos()
{
    num1.real += num2.real;
    num1.imaginario += num2.imaginario;

    return num1;
}

void mostrarResultado(complejos resultado)
{
    cout << "\nLa suma de los números complejos: " << resultado.real << " , " << resultado.imaginario << "i" << endl;
}
