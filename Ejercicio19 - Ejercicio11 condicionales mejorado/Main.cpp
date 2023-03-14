/*
    19. Ejercicio 11 de condicionales (realizar un programa que simule un cajero 
        automático con un saldo inicial de $1000), pero mejorado con funciones.
*/

#include <iostream>
#include <locale>

// Prototipos
void limpiarConsola();
void pedirNombreUsuario(char nombre[], const int tamNombre);
void mostrarTerminalPrincipal(char nombre[], float& saldo);
void despedidaUsuario(char nombre[]);
int  mostrarOpciones();
bool usuarioDepositar(float& saldo);
bool usuarioRetirar(float& saldo);
bool mostrarBalanceUsuario(float& saldo);

// Main
int main()
{
    setlocale(LC_ALL, "es_ES");
    float saldo{ 1000 }, Dinero{};
    const int tamMaxNombre{ 20 };
    char nombre[tamMaxNombre]{};
    int opcion{};
    
    pedirNombreUsuario(nombre, tamMaxNombre);
    mostrarTerminalPrincipal(nombre, saldo);
    despedidaUsuario(nombre);

    return 0;
}

// Declaraciones
void limpiarConsola()
{
    std::cout << "\033[2J\033[1;1H";
}

void pedirNombreUsuario(char nombre[], const int tamNombre)
{
    std::cout << "Por favor, ingrese su nombre: "; 
    std::cin.getline(nombre, tamNombre, '\n');
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    limpiarConsola();
}

void mostrarTerminalPrincipal(char nombre[], float& saldo)
{
    bool exit{ false };
    int opcion{};

    std::cout << "----------------------------------------------------" << "\n";
    std::cout << "----------------------------------------------------" << "\n";
    std::cout << "   Bienvenido a su cajero virtual, " << nombre << "\n";
    std::cout << "\n";

    while (!exit) 
    {

        opcion = mostrarOpciones();

        switch (opcion) 
        {
            case 1:
                exit = usuarioDepositar(saldo);
                break;

            case 2:
                exit = usuarioRetirar(saldo);
                break;

            case 3:
                exit = mostrarBalanceUsuario(saldo);
                break;

            case 4:
                exit = true;
                break;
        }
    }
}

void despedidaUsuario(char nombre[])
{
    std::cout << "Hasta la próxima, " << nombre << "\n";
}

int mostrarOpciones()
{
    int opcion{};

    std::cout << "1. Depositar dinero dentro de su cuenta" << "\n";
    std::cout << "2. Retirar dinero de su cuenta"          << "\n";
    std::cout << "3. Consultar el balance de su cuenta"    << "\n";
    std::cout << "4. Salir"                                << "\n";

    do
    {
		std::cout << "\n" << "Por favor, seleccione una opción: "; 

		std::cin >> opcion;

        if (opcion > 4 || opcion <= 0)
        {
			std::cout << "\nError: opción no disponible." << "\n";
        }

    } while (opcion > 4 || opcion <= 0);

    return opcion;
}

bool usuarioDepositar(float& saldo)
{
    float dinero{};
    char operacion{};

    limpiarConsola();
    std::cout << "¿Cuánto dinero quiere depositar?: $"; std::cin >> dinero;
    saldo += dinero;

    std::cout << "\nSu nuevo balance: $" << saldo << std::endl;

    std::cout << "Quiere realizar alguna otra operación? (Sí = 'y' / No = 'n'): "; 
    std::cin >> operacion;

    if (operacion == 'n' || operacion == 'N') 
    {
        limpiarConsola();
        return true;
    }
    else 
    {
        limpiarConsola();
        return false;
    }
}

bool usuarioRetirar(float& saldo)
{
    float dinero{};
    char operacion{};

    limpiarConsola();
    std::cout << "¿Cuánto dinero quiere retirar?: $"; std::cin >> dinero;

    if ((saldo - dinero) < 0) 
    {
        std::cout << "\nError: el retiro excede el balance disponible. " 
                  << "Por favor, consulte su balance actual.";
        std::cout << "\nPresione 'enter' para continuar...";
        std::cin.ignore();
        getchar();

        limpiarConsola();
        return false;
    }
    else 
    {
        saldo -= dinero;

        std::cout << "\n" << "Su nuevo balance: $" << saldo << "\n";
        std::cout << "¿Quiere realizar alguna otra operación? (Sí = 'y' / No = 'n'): "; 
        std::cin >> operacion;

        if (operacion == 'n' || operacion == 'N') 
        {
            limpiarConsola();
            return true;
        }
        else 
        {
            limpiarConsola();
            return false;
        }
    }
}

bool mostrarBalanceUsuario(float& saldo)
{
    char operacion{};

    limpiarConsola();
    std::cout << "Su balance actual: $" << saldo << "\n";

    std::cout << "¿Quiere realizar alguna otra operación? (Sí = 'y' / No = 'n'): "; 
    std::cin >> operacion;

    if (operacion == 'n' || operacion == 'N')
    {
        limpiarConsola();
        return true;
    }
    else 
    {
        limpiarConsola();
        return false;
    }
}