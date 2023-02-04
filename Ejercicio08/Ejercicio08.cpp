// 8. Escriba una función nombrada cambio() que tenga un parámetro en número entero y seis parámetros de referencia
//    en número entero nombrados cien, cincuenta, veinte, diez, cinco y uno, respectivamente. La función tiene que 
//    considerar el valor entero transmitido como una cantidad en dólares y convertir el valor en el número menor de 
//    billetes equivalentes.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

void cambio(int dolares, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno);

int main()
{
    setlocale(LC_ALL, "es_Es");

    int dolares;
    int cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, uno = 0;

    cout << "Ingrese el importe: $"; cin >> dolares;

    if (dolares == 0)
    {
        cout << "Error: no hay cambio de 0 dólares." << endl;
        return 0;
    }

    cambio(dolares, cien, cincuenta, veinte, diez, cinco, uno);

    cout << "\n------------------ El cambio ------------------ " << endl;
    cout << "Cien: " << cien << endl;
    cout << "Cincuenta: " << cincuenta << endl;
    cout << "Veinte: " << veinte << endl;
    cout << "Diez: " << diez << endl;
    cout << "Cinco: " << cinco << endl;
    cout << "Uno: " << uno << endl;
    cout << "-------------------------------------------------- " << endl;

    return 0;
}


void cambio(int dolares, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno)
{
    if (dolares >= 100)
    {
        cien = cien + (dolares / 100);
        dolares = dolares % 100;
    }
    if (dolares >= 50)
    {
        cincuenta = cincuenta + (dolares / 50);
        dolares = dolares % 50;
    }
    if (dolares >= 20)
    {
        veinte = veinte + (dolares / 20);
        dolares = dolares % 20;
    }
    if (dolares >= 10);
    {
        diez = diez + (dolares / 10);
        dolares = dolares % 10;
    }
    if (dolares >= 5)
    {
        cinco = cinco + (dolares / 5);
        dolares = dolares % 5;
    }
    if (dolares >= 1)
    {
        uno = uno + (dolares / 1);
        dolares = dolares % 1;
    }
}
