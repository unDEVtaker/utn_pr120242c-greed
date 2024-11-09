#include <iostream>
#include "dados.h"
#include "puntajes.h"

using namespace std;

int tirarDado(){
	return rand() % 6 + 1;
}

void tiradaDeDados(int vDados[], int cantidad){
	for(int i=0; i<cantidad; i++){
		vDados[i] = tirarDado();
	}
}

void mostrarDados(int vDados[], int cantidad){
	for(int i=0; i<cantidad; i++){
		cout << " " << vDados[i];
	}
	cout << endl;
}

void generarBloqueadores(int bloqueadores[], int cantidad){
	for(int i = 0; i < cantidad; i++){
		bloqueadores[i] = tirarDado();
	}
}

// Mostrar los bloqueadores
void mostrarBloqueadores(int bloqueadores[], int cantidad){
	cout << "Bloqueadores: ";
	for(int i = 0; i < cantidad; i++){
		cout << bloqueadores[i] << " ";  // Muestra cada bloqueador
	}
	cout << endl;
}

int revisarBloqueadores(int vDados[], int &cantidadDados, int bloqueadores[], int cantidadBloqueadores) {
	int dadosPerdidos = 0;
	for (int i = 0; i < cantidadDados; i++){
		for (int j = 0; j < cantidadBloqueadores; j++){
			if(vDados[i] == bloqueadores[j]){
				vDados[i] = 0;
				dadosPerdidos++;
				break;
			}
		}
	}
	cantidadDados -= dadosPerdidos; // Reduce la cantidad de dados disponibles
	return dadosPerdidos;
}
