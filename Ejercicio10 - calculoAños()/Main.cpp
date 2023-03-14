/*
    10. Escriba una función nombrada calc_años() que tenga un parámetro entero 
        por valor que represente el número total de días desde la fecha 1/1/2000
        y parámetros enteros por referencia nombrados año, mes y día.
        La función debe calcular el año, mes y día actual para el número dado de
        días que se le transmitan. Usando las referencias, la función deberá 
        alterar en forma directa los argumentos respectivos en la función que 
        llama. Para este problema suponga que cada año tiene 365 días y cada mes
        tiene 30 días.
*/

#include <iostream>
#include <locale>

// Prototipos
int pedirDias();
void calcAnios(int totalDias, int& anio, int& mes, int& dia);

// Main
int main()
{
    setlocale(LC_ALL, "es_ES");

    int anio{ 0 }, mes{ 0 }, dia{ 0 };
    int totalDias{ pedirDias() };

    calcAnios(totalDias, anio, mes, dia);

    std::cout << "Fecha actual: " << dia << "/" << mes << "/" << anio << "\n";

    return 0;
}

// Declaraciones
int pedirDias()
{
    int totalDias{};

    do
    {
		std::cout << "Ingrese el número de días transcurrido desde el "
                  << "01/01/2000: "; 
        std::cin >> totalDias;

        if (totalDias < 0)
        {
            std::cout << "Error: el número de días no puede ser negativo.\n";
        }
    } while (totalDias < 0);

    return totalDias;
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