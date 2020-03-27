#include <iostream>
#include <QApplication>
#include "ActivityBluePrint.h"
#include "Colors.h"


// Registro di attività che memorizza cosa si è fatto durante una giornata. Classe che rappresenta attività con descrizione,
// tempo inizio e fine, Classe registro che colleziona attività su base del giorno.
// Interfaccia semplice per mostrare il registro sulla base di un giorno

int main(int argc, char* argv[]) {
    Colors c(0, 0, 0);
    ActivityBluePrint math("math", c, "productivity", "");
    tm a;
    a.tm_hour = 10;
    a.tm_min = 00;

    tm b;
    b.tm_hour = 11;
    b.tm_min = 00;
    math.addEntry(a, b);

    math.printVector();

}
