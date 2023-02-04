// 18. Escriba una función llamada mayor() que devuelva la fecha más reciente de cualquier par de fechas que se le 
//     transmitan. Por ejemplo, si se transmiten las fechas 10/9/2005 y 11/3/2015 a mayor(), será devuelta la segunda
//     fecha.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

struct DATES
{
    int anio;
    int mes;
    int dia;
}fecha1, fecha2;

//PROTOTIPOS
void pedirDatos();
DATES mayor();
void mostrarDatos(DATES fechaReciente);


//MAIN
int main()
{
    setlocale(LC_ALL, "es_ES");

    DATES fechaReciente;

    pedirDatos();
    fechaReciente = mayor();
    mostrarDatos(fechaReciente);

    return 0;
}



//FUNCIONES
void pedirDatos()
{
    cout << "------------ Información de la primera fecha ------------" << endl;
    cout << "Día: "; cin >> fecha1.dia;
    cout << "Mes: "; cin >> fecha1.mes;
    cout << "Año: "; cin >> fecha1.anio;
    cout << endl;

    cout << "------------ Información de la segunda fecha ------------" << endl;
    cout << "Día: "; cin >> fecha2.dia;
    cout << "Mes: "; cin >> fecha2.mes;
    cout << "Año: "; cin >> fecha2.anio;
    cout << endl;
}

DATES mayor()
{
    if (fecha1.anio > fecha2.anio)
    {
        return fecha1;
    }
    else if (fecha2.anio > fecha1.anio)
    {
        return fecha2;
    }

    if (fecha1.mes > fecha2.mes)
    {
        return fecha1;
    }
    else if (fecha2.mes > fecha1.mes)
    {
        return fecha2;
    }

    if (fecha1.dia > fecha2.dia)
    {
        return fecha1;
    }
    else if (fecha2.dia > fecha1.dia)
    {
        return fecha2;
    }
}

void mostrarDatos(DATES fechaReciente)
{
    cout << "La fecha más reciente es: " << fechaReciente.dia << "/" << fechaReciente.mes << "/" << fechaReciente.anio 
         << endl;
}
