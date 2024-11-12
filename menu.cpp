#include <iostream>
#include <windows.h> // para cambiar color de consola
#include "menu.h"
#include "dados.h"
#include "unJugador.h"
#include "dosJugadores.h"
#include "creditos.h"
#include "colores.h"

using namespace std;


int seleccionarOpcion()
{
	int opcion;
	cout << "GREED" << endl;
	cout << "---------------------" << endl;
	cout << "1- Modo un jugador." << endl;
	cout << "2- Modo dos jugadores."  << endl;
	cout << "3- Estadisticas."  << endl;
	cout << "4- Creditos."  << endl;
	cout << "----------------" << endl;
	cout << "0- Salir." << endl;
	cout << endl << endl;
	cout << "Opcion: ";
	cin >> opcion;

  return opcion;
}

void ejecutarOpcion(int opcion){
    switch(opcion) {
    	case 1:
		system("cls");
		cout << "Partida de un jugador" << endl;
		jugarUnJugador();
		break;
        case 2:
            system("cls");
            cout << "Partida de dos jugadores" << endl;
            // Código para dos jugadores
            jugarDosJugadores();
            break;

        case 3:
            system("cls");
            cout << "Estadisticas" << endl;
            // Codigo para mostrar estadisticas
            break;

        case 4:
            system("cls");
            mostrarEquipo();
            break;

        case 0:
            system("cls");
            cout << "Gracias por jugar!!!" << endl;
            break;

        default:
            cout << "Esa opción no está en el menú." << endl;
            break;
    }
}
