/*
    13. Realiza una función que tome como parámetros un vector de números y su 
        tamaño y cambie el signo de los elementos del vector.
*/

#include <iostream>
#include <locale>

// Prototipos
int pedirTamanio(const int tamMax);
void rellenarVector(int vNumeros[], const int tamUsuario);
void cambiarSigno(int vNumeros[], const int tamUsuario);
void presentarDatos(int vNumeros[], const int tamUsuario);

// Main
int main()
{
    setlocale(LC_ALL, "es_ES");
    
    constexpr int tamMax{ 50 };
    int vNumeros[tamMax]{};
    const int tamUsuario{ pedirTamanio(tamMax) };
    
    rellenarVector(vNumeros, tamUsuario);
    cambiarSigno(vNumeros, tamUsuario);
    presentarDatos(vNumeros, tamUsuario);

    return 0;
}

// Declaraciones
int pedirTamanio(const int tamMax)
{
    int tamUsuario{};
    do
    {
		std::cout << "Ingrese la cantidad de elementos del vector (hasta " 
				  << tamMax <<"): "; 
		std::cin >> tamUsuario;

		if (tamUsuario > tamMax || tamUsuario <= 0) 
		{
			std::cout << "Error: el número sobrepasa los límites establecidos.\n";
		}
    } while (tamUsuario > tamMax || tamUsuario <= 0);

    return tamUsuario;
}

void rellenarVector(int vNumeros[], const int tamUsuario)
{
    for (int i{ 0 }; i < tamUsuario; i++)
    {
        std::cout << i + 1 << ". Ingrese un número: "; std::cin >> vNumeros[i];
    }
    std::cout << "\n";
}

void cambiarSigno(int vNumeros[], const int tamUsuario)
{
    for (int i{ 0 }; i < tamUsuario; i++)
    {
        vNumeros[i] *= -1;
    }
}

void presentarDatos(int vNumeros[], const int tamUsuario)
{
    std::cout << "Elementos del vector cambiados de signo: ";
    for (int i{ 0 }; i < tamUsuario; i++)
    {
        std::cout << vNumeros[i] << " ";
    }
    std::cout << "\n";
}