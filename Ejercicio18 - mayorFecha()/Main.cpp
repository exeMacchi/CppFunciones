/*
    18. Escriba una función llamada mayor() que devuelva la fecha más reciente 
        de cualquier par de fechas que se le transmitan. Por ejemplo, si se 
        transmiten las fechas 10/9/2005 y 11/3/2015 a mayor(), será devuelta la 
        segunda fecha.
*/

#include <iostream>
#include <locale>

// Se puede hacer esto sin structs, pero sería más engorroso e ilegible.
struct Fechas
{
    int anio{};
    int mes{};
    int dia{};
} fecha1{}, fecha2{};

// Prototipos
void pedirDatos();
int pedirDia();
int pedirMes();
Fechas mayor();
void mostrarDatos(Fechas fechaReciente);


// Main
int main()
{
    setlocale(LC_ALL, "es_ES");

    Fechas fechaReciente{};

    pedirDatos();
    fechaReciente = mayor();
    mostrarDatos(fechaReciente);

    return 0;
}

// Declaraciones
void pedirDatos()
{
    std::cout << "Información de la primera fecha:" << "\n";
    fecha1.dia = pedirDia();
    fecha1.mes = pedirMes();
    std::cout << "Año: "; std::cin >> fecha1.anio;
    std::cout << "\n";

    std::cout << "Información de la segunda fecha:" << "\n";
    fecha2.dia = pedirDia();
    fecha2.mes = pedirMes();
    std::cout << "Año: "; std::cin >> fecha2.anio;
    std::cout << "\n";
}

int pedirDia()
{
    int dia{};

    do
    {
		std::cout << "Día: "; std::cin >> dia;
        
        if (dia > 31 || dia < 1)
        {
            std::cout << "Error: día inválido." << "\n";
        }
    } while (dia > 31 || dia < 1);
    
    return dia;
}

int pedirMes()
{
    int mes{};

    do
    {
		std::cout << "Mes: "; std::cin >> mes;
        
        if (mes > 12 || mes < 1)
        {
            std::cout << "Error: mes inválido." << "\n";
        }
    } while (mes > 12 || mes < 1);
    
    return mes;
}

Fechas mayor()
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

    return fecha1;
}

void mostrarDatos(Fechas fechaReciente)
{
    std::cout << "La fecha más reciente es: " << fechaReciente.dia << "/" 
              << fechaReciente.mes << "/" << fechaReciente.anio << "\n";
}