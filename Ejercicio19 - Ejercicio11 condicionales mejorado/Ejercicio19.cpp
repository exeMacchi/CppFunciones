// 19. Ejercicio 11 de condicionales (realizar un programa que simule un cajero automático con un saldo inicial 
//     de $1000), pero mejorado con funciones.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;


void limpiarConsola();
void pedirNombreUsuario(char[]);
void mostrarTerminalPrincipal(char[], float&);
void despedidaUsuario(char[]);
int  mostrarOpciones();
bool usuarioDepositar(float&);
bool usuarioRetirar(float&);
bool mostrarBalanceUsuario(float&);


int main()
{
    setlocale(LC_ALL, "es_ES");
    float saldo{ 1000 }, Dinero{};
    int Opcion{};
    char Nombre[20];
    
    pedirNombreUsuario(Nombre);
    mostrarTerminalPrincipal(Nombre, saldo);
    despedidaUsuario(Nombre);

    return 0;
}

void limpiarConsola()
{
    cout << "\033[2J\033[1;1H";
}

void pedirNombreUsuario(char Nombre[])
{
    cout << "Por favor, ingrese su nombre: "; cin.getline(Nombre, 20, '\n');

    limpiarConsola();
}

void mostrarTerminalPrincipal(char Nombre[], float& Saldo)
{
    bool Exit = false;
    int Opcion{};
    

    cout << "-------------------------------------------------------------------" << "\n";
    cout << "-------------------------------------------------------------------" << "\n";
    cout << "             Bienvenido a su cajero virtual, " << Nombre << "\n";
    cout << "\n";

    while (!Exit) 
    {

        Opcion = mostrarOpciones();

        switch (Opcion) 
        {
            case 1:
                Exit = usuarioDepositar(Saldo);
                break;

            case 2:
                Exit = usuarioRetirar(Saldo);
                break;

            case 3:
                Exit = mostrarBalanceUsuario(Saldo);
                break;

            case 4:
                Exit = true;
                break;
        }
    }
}

void despedidaUsuario(char Nombre[])
{
    cout << "Hasta la próxima, " << Nombre << "\n";
}

int mostrarOpciones()
{
    int Opcion{};

    cout << "1. Depositar dinero dentro de su cuenta." << "\n";
    cout << "2. Retirar dinero de su cuenta." << "\n";
    cout << "3. Consultar el balance de su cuenta." << "\n";
    cout << "4. Salir." << "\n";
    cout << "\nPor favor, seleccione una opción: "; cin >> Opcion;

    while (Opcion > 4 || Opcion <= 0) {
        cout << "\nError: opción no disponible." << "\n";
        cout << "Por favor, seleccione una opción: "; cin >> Opcion;
    }

    return Opcion;
}

bool usuarioDepositar(float& saldo)
{
    float Dinero{};
    char Operacion;

    limpiarConsola();
    cout << "¿Cuánto dinero quiere depositar?: $"; cin >> Dinero;
    saldo += Dinero;

    cout << "\nSu nuevo balance: $" << saldo << endl;

    cout << "Quiere realizar alguna otra operación? (Sí = 'y' / No = 'n'): "; cin >> Operacion;
    if (Operacion == 'n' || Operacion == 'N') 
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
    float Dinero{};
    char Operacion;

    limpiarConsola();
    cout << "¿Cuánto dinero quiere retirar?: $"; cin >> Dinero;

    if ((saldo - Dinero) < 0) 
    {
        cout << "\nError: el retiro excede el balance disponible. Por favor, consulte su balance actual.";
        cout << "\nPresione 'enter' para continuar...";
        cin.ignore();
        getchar();

        limpiarConsola();
        return false;
    }
    else 
    {
        saldo -= Dinero;

        cout << "\nSu nuevo balance: $" << saldo << endl;
        cout << "¿Quiere realizar alguna otra operación? (Sí = 'y' / No = 'n'): "; cin >> Operacion;

        if (Operacion == 'n' || Operacion == 'N') 
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
    char Operacion;

    limpiarConsola();
    cout << "Su balance actual: $" << saldo << endl;

    cout << "¿Quiere realizar alguna otra operación? (Sí = 'y' / No = 'n'): "; cin >> Operacion;
    if (Operacion == 'n' || Operacion == 'N')
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
