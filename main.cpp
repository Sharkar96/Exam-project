#include <QApplication>
#include "CategoryAdderView.h"
#include "MainWindow.h"


// Registro di attività che memorizza cosa si è fatto durante una giornata. Classe che rappresenta attività con descrizione,
// tempo inizio e fine, Classe registro che colleziona attività su base del giorno.
// Interfaccia semplice per mostrare il registro sulla base di un giorno

int main(int argc, char* argv[]) {

    QApplication app(argc, argv);

    MainWindow window;
    window.show();

    return app.exec();
}
