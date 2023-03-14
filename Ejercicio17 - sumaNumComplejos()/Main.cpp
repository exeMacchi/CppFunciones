// 17. Suma de n�meros Complejos

#include <iostream>
#include <locale>


// Se puede hacer esto sin structs, pero es m�s engorroso e ilegible
struct complejos
{
    double real{};
    double imaginario{};
} num1{}, num2{};

// Prototipos
void pedirDatos();
complejos sumaComplejos();
void mostrarResultado(complejos resultado);

// Main
int main()
{
    setlocale(LC_ALL, "es_ES");

    complejos resultado{};

    pedirDatos();
    resultado = sumaComplejos();
    mostrarResultado(resultado);

    return 0;
}

// Declaraciones
void pedirDatos()
{
    std::cout << "Informaci�n del primer n�mero complejo:" << "\n";
    std::cout << "Ingrese el n�mero real: "; std::cin >> num1.real;
    std::cout << "Ingrese el n�mero imaginario: "; std::cin >> num1.imaginario;
    std::cout << "\n";

    std::cout << "Informaci�n del segundo n�mero complejo:" << "\n";
    std::cout << "Ingrese el n�mero real: "; std::cin >> num2.real;
    std::cout << "Ingrese el n�mero imaginario: "; std::cin >> num2.imaginario;
    std::cout << "\n";
}

complejos sumaComplejos()
{
    num1.real += num2.real;
    num1.imaginario += num2.imaginario;

    return num1;
}

void mostrarResultado(complejos resultado)
{
    std::cout << "\nLa suma de los n�meros complejos: " << resultado.real 
              << ", " << resultado.imaginario << "i" << "\n";
}
