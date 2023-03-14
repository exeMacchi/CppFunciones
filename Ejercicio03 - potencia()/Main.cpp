/*
    3. Escriba una función nombrada funpot() que eleve un número entero que se 
       le transmita a una potencia en número entero positivo y despliegue el 
       resultado. El número entero positivo deberá ser el segundo valor 
       transmitido a la función.
*/

#include <iostream>
#include <locale>

//Prototipos
void pedirDatos(int& base, int& exponente);
void funPotencia(int base, int exponente);

//Main
int main()
{
    setlocale(LC_ALL, "es_ES");

    int base{}, exponente{};

    pedirDatos(base, exponente);
    funPotencia(base, exponente);

    return 0;
}


//Declaraciones
void pedirDatos(int& base, int& exponente)
{
    std::cout << "Ingrese la base: "; std::cin >> base;

    do
    {
        std::cout << "Ingrese el exponente: "; std::cin >> exponente;
        if (exponente < 0)
        {
            std::cout << "Error: el exponente no puede ser negativo." << "\n";
        }
    } while (exponente < 0);
}

void funPotencia(int base, int exponente)
{
    long resultado{ 1 };
    
    for (int i{ 0 }; i < exponente; i++)
    {
        resultado *= base;
    }

    std::cout << "-----------------------------------------" << "\n";
    std::cout << base << " ^ " << exponente << " = " << resultado << "\n";
    std::cout << "-----------------------------------------" << "\n";
}