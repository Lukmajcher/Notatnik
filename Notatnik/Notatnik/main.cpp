#include "notatnik.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // stworznie i pokazanie okna z programem
    MainWindow w;
    w.show();
    return a.exec();
}
