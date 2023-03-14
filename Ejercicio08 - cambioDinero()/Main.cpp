/*
    8. Escriba una función nombrada cambio() que tenga un parámetro entero por 
       valor y seis parámetros enteros por referencia nombrados cien, cincuenta,
       veinte, diez, cinco y uno, respectivamente. La función tiene que 
       considerar el valor entero transmitido como una cantidad en dólares y 
       convertir el valor en el número menor de billetes equivalentes.
*/

#include <iostream>
#include <locale>

// Prototipos
int pedirImporte();
void cambio(int dolares, int& cien, int& cincuenta, int& veinte, int& diez, 
            int& cinco, int& uno);
void mostrarCambio(int cien, int cincuenta, int veinte, int diez, int cinco,
                   int uno);

// Main
int main()
{
    setlocale(LC_ALL, "es_Es");

    int cien{ 0 }, cincuenta{ 0 }, veinte{ 0 }, diez{ 0 }, cinco{ 0 }, uno{ 0 };
    int dolares{ pedirImporte() };

    cambio(dolares, cien, cincuenta, veinte, diez, cinco, uno);
    mostrarCambio(cien, cincuenta, veinte, diez, cinco, uno);

    return 0;
}

// Declaraciones
int pedirImporte()
{
    int dolares{};

    do
    {
		std::cout << "Ingrese el importe: $"; std::cin >> dolares;
		if (dolares == 0)
		{
			std::cout << "Error: no hay cambio de 0 dólares." << "\n";
		}
        else if (dolares < 0)
        {
            std::cout << "Error: el importe no puede ser negativo." << "\n";
        }
    } while (dolares <= 0);

    return dolares;
}

void cambio(int dolares, int& cien, int& cincuenta, int& veinte, int& diez, 
            int& cinco, int& uno)
{
    if (dolares >= 100)
    {
        cien = dolares / 100;
        dolares = dolares % 100;
    }

    if (dolares >= 50)
    {
        cincuenta = dolares / 50;
        dolares = dolares % 50;
    }

    if (dolares >= 20)
    {
        veinte = dolares / 20;
        dolares = dolares % 20;
    }

    if (dolares >= 10);
    {
        diez = dolares / 10;
        dolares = dolares % 10;
    }

    if (dolares >= 5)
    {
        cinco = dolares / 5;
        dolares = dolares % 5;
    }

    if (dolares >= 1)
    {
        uno = dolares / 1;
        dolares = dolares % 1;
    }
}

void mostrarCambio(int cien, int cincuenta, int veinte, int diez, int cinco,
                   int uno)
{
    std::cout << "-------------------- El cambio --------------------" << "\n";
    std::cout << "Cien: "      << cien      << "\n";
    std::cout << "Cincuenta: " << cincuenta << "\n";
    std::cout << "Veinte: "    << veinte    << "\n";
    std::cout << "Diez: "      << diez      << "\n";
    std::cout << "Cinco: "     << cinco     << "\n";
    std::cout << "Uno: "       << uno       << "\n";
    std::cout << "---------------------------------------------------" << "\n";
}