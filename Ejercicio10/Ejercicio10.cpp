// 10. Escriba una funci�n nombrada calc_a�os() que tenga un par�metro entero que represente el n�mero total de d�as
//     desde la fecha 1/1/2000 y par�metros de referencia nombrados a�o, mes y d�a.
//     La funci�n es calcular el a�o, mes y d�a actual para el n�mero dado de d�as que se le transmitan. Usando las
//     referencias, la funci�n deber� alterar en forma directa los argumentos respectivos en la funci�n que llama.
//     Para este problema suponga que cada a�o tiene 365 d�as y cada mes tiene 30 d�as.

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

    cout << "Ingrese el n�mero de d�as transcurrido desde el 01/01/2000: "; cin >> totalDias;
    while (totalDias < 0)
    {
        cout << "Error: ingrese un n�mero disponible." << endl;
        cout << "Ingrese el n�mero de d�as transucrrido desde el 01/01/2000: "; cin >> totalDias;
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
