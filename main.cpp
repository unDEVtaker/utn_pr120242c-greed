#include <iostream>
#include <ctime>
#include "menu.h"
#include "colores.h"

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
		system("pause");
	}

	while(opcion != 0);

	return 0;
}



