#include <iostream>
#include "menu.h"

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
	switch(opcion){
		case 1:
			cout << "un jugador";
			break;
		case 2:
			cout << "dos jugadoesr";
			break;
		case 3:
			cout << "estadisticas";
			break;
		case 4:
			cout << "creditos";
			break;
		case 0:
			cout << "Gracias por jugar!!!"<< endl;
			break;
  }
}
