#ifndef NOTATNIK_H
#define NOTATNIK_H

#include <QMainWindow>

#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include <QCloseEvent>
#include <QFont>
#include <QFontDialog>
#include <QDesktopServices>
#include <QDate>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

protected:
    void closeEvent(QCloseEvent *event);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNowy_triggered();

    void on_actionOtworz_triggered();

    void on_actionZapiszJako_triggered();

    void on_actionDrukuj_triggered();

    void on_actionWyjdz_triggered();

    void on_actionKopiuj_triggered();

    void on_actionWklej_triggered();

    void on_actionWytnij_triggered();

    void on_actionCofnij_triggered();

    void on_actionPowtorz_triggered();

    void on_actionZapisz_triggered();

    void on_actionO_programie_2_triggered();

    void on_actionCzcionka_triggered();

    //void documentWasModified();

    void on_actionKontakt_triggered();

    void on_actionWyszukajWInternecie_triggered();

    //void searchString();

    void on_actionZawijanie_wierszy_triggered();

    void on_actionDzisiejszaData_triggered();

private:
    Ui::MainWindow *ui;
    QString currentFile = "";
    bool worldWrap = true;
};
#endif // NOTATNIK_H
