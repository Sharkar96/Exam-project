#include <QApplication>
#include "MainWindow.h"
#include "ModelMain.h"
#include "ControllerMain.h"


// Registro di attività che memorizza cosa si è fatto durante una giornata. Classe che rappresenta attività con descrizione,
// tempo inizio e fine, Classe registro che colleziona attività su base del giorno.
// Interfaccia semplice per mostrare il registro sulla base di un giorno

int main(int argc, char* argv[]) {

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication app(argc, argv);

    auto* model = new ModelMain;
    auto* controller = new ControllerMain(model);

    MainWindow mainWindow(controller, model);

    mainWindow.show();

    return app.exec();
}
