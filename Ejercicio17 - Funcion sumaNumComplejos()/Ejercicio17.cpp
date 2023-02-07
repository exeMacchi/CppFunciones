// 17. Suma de n�meros Complejos

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
    cout << "------------ Informaci�n del primer n�mero complejo ------------" << endl;
    cout << "Ingrese el n�mero real: "; cin >> num1.real;
    cout << "Ingrese el n�mero imaginario: "; cin >> num1.imaginario;
    cout << endl;

    cout << "------------ Informaci�n del segundo n�mero complejo ------------" << endl;
    cout << "Ingrese el n�mero real: "; cin >> num2.real;
    cout << "Ingrese el n�mero imaginario: "; cin >> num2.imaginario;
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
    cout << "\nLa suma de los n�meros complejos: " << resultado.real << " , " << resultado.imaginario << "i" << endl;
}
