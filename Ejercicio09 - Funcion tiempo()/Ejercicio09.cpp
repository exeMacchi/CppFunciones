// 9. Escriba una función nombrada tiempo() que tenga un parámetro en número entero llamado totalSeg y tres parámetros
//    de referencia enteros nombrados horas, min y seg.La función es convertir el número de segundos transmitido en un
//    número equivalente de horas, minutos y segundos.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

void tiempo(int totalSeg, int& segundos, int& minutos, int& horas);

int main()
{
    setlocale(LC_ALL, "es_ES");

    int totalSeg;
    int horas = 0, minutos = 0, segundos = 0;

    cout << "Ingrese la cantidad de segundos: "; cin >> totalSeg;

    tiempo(totalSeg, segundos, minutos, horas);

    cout << "\n=============== Tiempo convertido ===============" << endl;
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << segundos << endl;
    cout << "==================================================" << endl;

    return 0;
}

void tiempo(int totalSeg, int& segundos, int& minutos, int& horas)
{
    segundos = totalSeg;

    while (segundos >= 60)
    {
        minutos = segundos / 60;
        segundos = segundos % 60;
    }
    while (minutos >= 60)
    {
        horas = minutos / 60;
        minutos = minutos % 60;
    }
    // Otra manera, quizá más sencilla
    /*
        horas = totalSeg / 3600; // Cantidad de segundos en una hora
        totalSeg = totalSeg % 3600
        minutos = totalSeg / 60;
        segundos = totalSeg % 60;
    */
}
