#include <iostream>
#include <string>
#include "dados.h"

using namespace std;

void jugarUnJugador() {
    string nombre;
    int totalPuntaje = 0;
    int ronda = 1;

    // Solicitar el nombre del jugador
    cout << "Ingrese su nombre: ";
    cin >> nombre;

    while (ronda <= 3) {
        cout << "Ronda " << ronda << " - Jugador: " << nombre << endl;
        int cantidadDados = 5;
        int vDados[5];
        int bloqueadores[2];
        int puntajeRonda = 0;
        char continuar = 's';

        // Generar y mostrar los bloqueadores
        generarBloqueadores(bloqueadores, 2);
        mostrarBloqueadores(bloqueadores, 2);

        while (continuar == 's' && cantidadDados > 0) {
            tiradaDeDados(vDados, cantidadDados);
            cout << "Tirada de dados: ";
            mostrarDados(vDados, cantidadDados);

            // Llamada a la función para revisar y marcar los dados bloqueados
            int dadosPerdidos = revisarBloqueadores(vDados, cantidadDados, bloqueadores, 2);

            // Calcular el puntaje de la tirada
            int puntajeTirada = 0;
            for (int i = 0; i < cantidadDados; i++) {
                if (vDados[i] != 0) {
                    puntajeTirada += vDados[i];
                }
            }

            // Verificar si todos los dados son iguales y no bloqueados
            bool todosIguales = true;
            for (int i = 1; i < cantidadDados; i++) {
                if (vDados[i] != 0 && vDados[i] != vDados[0]) {
                    todosIguales = false;
                    break;
                }
            }

            if (todosIguales && cantidadDados > 1) {
                puntajeTirada *= 2;
                cout << "Todos los dados son iguales! Puntaje duplicado." << endl;
            }

            puntajeRonda += puntajeTirada;
            cout << "Puntaje de la tirada: " << puntajeTirada << endl;
            cout << "Puntaje acumulado en la ronda: " << puntajeRonda << endl;

            if (cantidadDados == 0) {
                cout << "Te has quedado sin dados disponibles. Puntaje de la ronda: 0" << endl;
                puntajeRonda = 0;
                break;
            }

            cout << "Desea continuar tirando? (s/n): ";
            cin >> continuar;
        }

        totalPuntaje += puntajeRonda;
        cout << "Puntaje total hasta ahora: " << totalPuntaje << endl;
        ronda++;
    }

    cout << "Juego terminado. Puntaje final de " << nombre << ": " << totalPuntaje << endl;

}

