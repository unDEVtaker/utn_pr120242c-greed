#include <iostream>
#include "menu.h"
#include "dados.h"
#include "juego.h"
#include "puntajes.h"

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

void ejecutarOpcion(int opcion) {
    switch(opcion) {
    	case 1:
    system("cls");
    cout << "Partida de un jugador" << endl;

    system("pause");
    break;
        case 2:
            system("cls");
            cout << "Partida de dos jugadores" << endl;
            // Código para dos jugadores
            system("pause");
            break;

        case 3:
            system("cls");
            cout << "Estadísticas" << endl;
            // Código para mostrar estadísticas
            system("pause");
            break;

        case 4:
            system("cls");
            cout << "Créditos" << endl;
            // Código para mostrar créditos
            system("pause");
            break;

        case 0:
            system("cls");
            cout << "Gracias por jugar!!!" << endl;
            system("pause");
            break;

        default:
            cout << "Esa opción no está en el menú." << endl;
            system("pause");
            break;
    }
}
