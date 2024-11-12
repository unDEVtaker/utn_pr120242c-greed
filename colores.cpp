#include <windows.h>
#include "colores.h"

//googleado
void cambiarColorConsola(int fondo, int texto){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (fondo << 4) | texto);
}
