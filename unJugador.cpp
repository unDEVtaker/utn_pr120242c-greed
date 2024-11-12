#include <iostream>
#include "dados.h"

using namespace std;

void jugarUnJugador() {
    string nombre;
    int totalPuntaje = 0;
    int ronda = 1;

    // Solicitar el nombre del jugador
    cout << "Ingrese su nombre: ";
    cin.ignore(); //visto en clase para ignorar el espacio si se ingresan mas de una palabra
    getline(cin,nombre);

    system("cls");

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
        cout << "--------------------------" << endl << endl;

        while (continuar == 's' && cantidadDados > 0) {
            // Tirar los dados
            tiradaDeDados(vDados, cantidadDados);
            cout << "Tirada de dados: ";
            mostrarDados(vDados, cantidadDados);

            // Usar revisarBloqueadores() para manejar los bloqueadores
            int dadosPerdidos = revisarBloqueadores(vDados, cantidadDados, bloqueadores, 2);

            // Calcular el puntaje de la tirada y los dados válidos
            int puntajeTirada = 0;
            int dadosRestantes = 0;
            for (int i = 0; i < cantidadDados; i++) {
                if (vDados[i] != 0) { // Solo contar los dados que no están bloqueados
                    puntajeTirada += vDados[i];
                    dadosRestantes++; // Solo contar los dados no bloqueados
                }
            }

            puntajeRonda += puntajeTirada;
            cout << "Puntaje de la tirada: " << puntajeTirada << endl;
            cout << "Puntaje acumulado en la ronda: " << puntajeRonda << endl;

            // Actualizar cantidad de dados disponibles para la próxima tirada
            cantidadDados = dadosRestantes;

            // Si no quedan dados disponibles para la siguiente tirada
            if (dadosRestantes == 0) {
                cout << "Te has quedado sin dados disponibles. Puntaje de la ronda: 0" << endl;
                puntajeRonda = 0;
                break;
            }

            cout << endl << "Desea continuar tirando? (s/n): ";
            cin >> continuar;
            cout << "--------------------------" << endl << endl;
        }

        totalPuntaje += puntajeRonda;
        cout << "Puntaje total hasta ahora: " << totalPuntaje << endl;
        ronda++;
        cout << "=============================" << endl << endl;
    }

    cout << "**********************************" << endl;
    cout << "Juego terminado!!!" << endl;
    cout << "Puntaje final de " << nombre << ": " << totalPuntaje << endl;
    cout << "**********************************" << endl;

}
