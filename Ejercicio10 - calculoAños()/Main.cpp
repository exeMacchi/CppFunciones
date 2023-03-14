/*
    10. Escriba una funci�n nombrada calc_a�os() que tenga un par�metro entero 
        por valor que represente el n�mero total de d�as desde la fecha 1/1/2000
        y par�metros enteros por referencia nombrados a�o, mes y d�a.
        La funci�n debe calcular el a�o, mes y d�a actual para el n�mero dado de
        d�as que se le transmitan. Usando las referencias, la funci�n deber� 
        alterar en forma directa los argumentos respectivos en la funci�n que 
        llama. Para este problema suponga que cada a�o tiene 365 d�as y cada mes
        tiene 30 d�as.
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
		std::cout << "Ingrese el n�mero de d�as transcurrido desde el "
                  << "01/01/2000: "; 
        std::cin >> totalDias;

        if (totalDias < 0)
        {
            std::cout << "Error: el n�mero de d�as no puede ser negativo.\n";
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