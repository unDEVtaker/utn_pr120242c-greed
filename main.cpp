#include <iostream>
#include <ctime>
#include "menu.h"

using namespace std;

int main()
{
	int opcion;
	//valor aleatorio
	srand(time(0));

	do{
		system("cls");
		opcion = seleccionarOpcion();
		ejecutarOpcion(opcion);
		cout << "Presione cualquier tecla para continuar ...";
		system("pause>nul");
	}

	while(opcion != 0);

	return 0;
}



