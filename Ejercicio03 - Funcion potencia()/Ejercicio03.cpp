// 3. Escriba una función nombrada funpot() que eleve un número entero que se le transmita a una potencia en número
//    entero positivo y despliegue el resultado.El número entero positivo deberá ser el segundo valor transmitido a 
//    la función.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;


//Prototipos
void pedirDatos(int& numero, int& potencia);
void funPotencia(int numero, int potencia);
int elevarNumero(int numero, int potencia);

//Main
int main()
{
    setlocale(LC_ALL, "es_ES");

    int numero, potencia;

    pedirDatos(numero, potencia);
    funPotencia(numero, potencia);

    return 0;
}


//Declaraciones
void pedirDatos(int& numero, int& potencia)
{
    cout << "Ingrese el número: "; cin >> numero;
    cout << "Ingrese la potencia: "; cin >> potencia;

    while (potencia < 0)
    {
        cout << "Error: la potencia no puede ser negativa." << endl;
        cout << "Ingrese la potencia: "; cin >> potencia;
    }
}

int elevarNumero(int numero, int potencia)
{
    long resultado = 1;

    if (potencia == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 0; i < potencia; i++)
        {
            resultado *= numero;
        }
    }

    return resultado;
}

void funPotencia(int numero, int potencia)
{
    long resultado = 0;

    resultado = elevarNumero(numero, potencia);

    cout << "\n-----------------------------------------" << endl;
    cout << "El resultado es: " << resultado;
    cout << "\n-----------------------------------------" << endl;
}
