/*
    9. Escriba una función nombrada tiempo() que tenga un parámetro entero por 
       valor llamado totalSeg y tres parámetros enteros por referencia nombrados
       horas, min y seg. La función debe convertir el número de segundos 
       transmitido en un número equivalente de horas, minutos y segundos.
*/

#include <iostream>

// Prototipos
int pedirSegundos();
void tiempo(int totalSeg, int& segundos, int& minutos, int& horas);
void mostrarTiempoConvertido(int segundos, int minutos, int horas);

// Main
int main()
{
    int horas{ 0 }, minutos{ 0 }, segundos{ 0 };
    int totalSeg{ pedirSegundos() };

    tiempo(totalSeg, segundos, minutos, horas);
    mostrarTiempoConvertido(segundos, minutos, horas);

    return 0;
}

// Declaraciones
int pedirSegundos()
{
    int totalSegundos{};

    do
    {
		std::cout << "Ingrese la cantidad de segundos: "; 
        std::cin >> totalSegundos;

        if (totalSegundos < 0)
        {
            std::cout << "Error: los segundos no pueden ser negativos." << "\n";
        }
    } while (totalSegundos < 0);

    return totalSegundos;
}

void tiempo(int totalSeg, int& segundos, int& minutos, int& horas)
{
    segundos = totalSeg;

    while (segundos >= 60)
    {
        minutos = segundos / 60;
        segundos = segundos % 60;
    }
    while (minutos >= 60)
    {
        horas = minutos / 60;
        minutos = minutos % 60;
    }
    
    /*
        Otra manera, quizá más sencilla de entender
			horas = totalSeg / 3600; ----> Cantidad de segundos en una hora
			totalSeg = totalSeg % 3600
			minutos = totalSeg / 60;
			segundos = totalSeg % 60;
    */
}

void mostrarTiempoConvertido(int segundos, int minutos, int horas)
{
    std::cout << "================ Tiempo convertido ===============" << "\n";
    std::cout << "Horas: " << horas << "\n";
    std::cout << "Minutos: " << minutos << "\n";
    std::cout << "Segundos: " << segundos << "\n";
    std::cout << "==================================================" << "\n";
}