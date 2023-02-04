// 10. Escriba una función nombrada calc_años() que tenga un parámetro entero que represente el número total de días
//     desde la fecha 1/1/2000 y parámetros de referencia nombrados año, mes y día.
//     La función es calcular el año, mes y día actual para el número dado de días que se le transmitan. Usando las
//     referencias, la función deberá alterar en forma directa los argumentos respectivos en la función que llama.
//     Para este problema suponga que cada año tiene 365 días y cada mes tiene 30 días.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

void calcAnios(int totalDias, int& anio, int& mes, int& dia);

int main()
{
    setlocale(LC_ALL, "es_ES");

    int totalDias, anio = 0, mes = 0, dia = 0;

    cout << "Ingrese el número de días transcurrido desde el 01/01/2000: "; cin >> totalDias;
    while (totalDias < 0)
    {
        cout << "Error: ingrese un número disponible." << endl;
        cout << "Ingrese el número de días transucrrido desde el 01/01/2000: "; cin >> totalDias;
    }

    calcAnios(totalDias, anio, mes, dia);

    cout << "Fecha actual: " << dia << "/" << mes << "/" << anio << endl;

    return 0;
}


void calcAnios(int totalDias, int& anio, int& mes, int& dia)
{
    if (totalDias >= 365)
    {
        anio = totalDias / 365;
        totalDias = totalDias % 365;
    }

    if (totalDias >= 30)
    {
        mes = totalDias / 30;
        totalDias = totalDias % 30;
    }

    anio += 2000;
    mes += 1;
    dia = 1 + totalDias;
}
