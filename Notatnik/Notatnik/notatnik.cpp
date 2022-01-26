#include "notatnik.h"
#include "ui_notatnik.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // ustawienie widget'u textEdit na całe okno programu
    this->setCentralWidget(ui->textEdit);
    this->setWindowIcon(QIcon(":/imgs/img/Notepad.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Funkcja tworząca nowy dokument tekstowy
void MainWindow::on_actionNowy_triggered()
{
    // sprawdzenie czy w dokument został zmodyfikowany przed utworzeniem nowego
    if(!ui->textEdit->document()->isModified())
    {
        currentFile.clear();
        ui->textEdit->setText(QString());
        QString fileName = "Nowy dokument tekstowy(.txt) - Notatnik";
        setWindowTitle(fileName);
    }else
    {
        QMessageBox msgBox;
        msgBox.setText("Ten dokument został zmodyfikowany.");
        msgBox.setInformativeText("Czy chcesz zapisać zmiany przed stworzeniem innego pliku?");
        msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::No | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Save);
        int result = msgBox.exec();
        if(result == QMessageBox::Save)
        {
            on_actionZapisz_triggered();
            currentFile.clear();
            ui->textEdit->setText(QString());
            QString fileName = "Nowy dokument tekstowy(.txt) - Notatnik";
            setWindowTitle(fileName);
        }
        else if(result == QMessageBox::No)
        {
            currentFile.clear();
            ui->textEdit->setText(QString());
            QString fileName = "Nowy dokument tekstowy(.txt) - Notatnik";
            setWindowTitle(fileName);
        }
        else{}
    }
}

// Funkcja otwierająca istniejący już dokument tekstowy
void MainWindow::on_actionOtworz_triggered()
{
    if(!ui->textEdit->document()->isModified())
    {
        QString fileName = QFileDialog::getOpenFileName(this, "Otwórz plik", QDir::currentPath(), "Wszystkie pliki (*.*);;Pliki tekstowe (*.txt)");
        QFile file(fileName);
        currentFile = fileName;
        if(!file.open(QIODevice::ReadOnly | QFile::Text))
        {
            QMessageBox::warning(this, "Warning", "Nie można otworzyć pliku: " + file.errorString());
            return;
        }
        QTextStream in(&file);
        QGuiApplication::setOverrideCursor(Qt::WaitCursor);
        QString text = in.readAll();
        ui->textEdit->setText(text);
        QGuiApplication::restoreOverrideCursor();

        setWindowTitle(fileName);
        file.close();
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Ten dokument został zmodyfikowany.");
        msgBox.setInformativeText("Czy chcesz zapisać zmiany przed otworzeniem innego pliku?");
        msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Save);
        int ret = msgBox.exec();
        switch (ret) {
          case QMessageBox::Save:
              on_actionZapisz_triggered();
              QApplication::quit();
              break;
          case QMessageBox::Discard:
              // Don't Save was clicked
              QApplication::quit();
              break;
          case QMessageBox::Cancel:
              // Cancel was clicked
              break;
          default:
              // should never be reached
              break;
        }
    }
}

// Funkcja zapisz jako dokument tekstowy
void MainWindow::on_actionZapiszJako_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Zapisz jako"), currentFile,"Wszystkie pliki (*.*);;Pliki tekstowe (*.txt)");
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Warning", "Nie można zapisać pliku: " + file.errorString());
        return;
    }
    currentFile = fileName;
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();
}

// Funkcja zapisująca dokument tekstowy
void MainWindow::on_actionZapisz_triggered()
{
    QString fileName;
    // jeśli plik nie ma nazwy otwórz okno do zapis jako
    if(currentFile.isEmpty())
    {
        QString fileName = QFileDialog::getSaveFileName(this, tr("Zapisz jako"), currentFile,"Wszystkie pliki (*.*);;Pliki tekstowe (*.txt)");
        currentFile = fileName;
    }
    else
    {
        fileName = currentFile;
    }
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Warning", "Nie można zapisać pliku. " + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();
}

// Funkcja pozwalająca drukowanie dokumentu tekstowego
void MainWindow::on_actionDrukuj_triggered()
{
    QPrinter printer;
    printer.setPrinterName("Nazwa drukarki");
    QPrintDialog pDialog(&printer, this);
    if(pDialog.exec() == QDialog::Rejected)
    {
        QMessageBox::warning(this, "Warning", "Nie można połączyć z drukarką");
        return;
    }
    ui->textEdit->print(&printer);
}

// Funkcja do wyjścia z programu
void MainWindow::on_actionWyjdz_triggered()
{
    QApplication::quit();
}

// Funkcja kopiuj zaznaczony element
void MainWindow::on_actionKopiuj_triggered()
{
    ui->textEdit->copy();
}

// Funkcja wklej zaznaczony element
void MainWindow::on_actionWklej_triggered()
{
    ui->textEdit->paste();
}

// Funkcja wytnij zaznaczony element
void MainWindow::on_actionWytnij_triggered()
{
    ui->textEdit->cut();
}

// Funkcja cofnij
void MainWindow::on_actionCofnij_triggered()
{
    ui->textEdit->undo();
}

// Funkcja powtórz
void MainWindow::on_actionPowtorz_triggered()
{
    ui->textEdit->redo();
}

// Funkcja do wyłączenia programu
void MainWindow::closeEvent(QCloseEvent *event)
{
    if(!ui->textEdit->document()->isModified())
    {
        event->accept();
    }else
    {
        int result = QMessageBox::information(this ,"Wyłączyć program?" , "Czy chcesz zapisać zmiany?" , QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel );
        switch (result) {
          case QMessageBox::Save:
              on_actionZapisz_triggered();
              event->accept();
              break;
          case QMessageBox::Discard:
              // Don't Save was clicked
              event->accept();
              break;
          case QMessageBox::Cancel:
              // Cancel was clicked
              event->ignore();
              break;
          default:
              // should never be reached
              break;
        }
    }
}

// Funkcja wyświetlająca informacje o programie
void MainWindow::on_actionO_programie_2_triggered()
{
    QMessageBox::about(this, tr("O programie"), tr("<b>Notatnik</b> wersja 0.1<br><br>"
                                                   "Notatnik wykonał <b>Majcher</b> (github.com/Lukmajcher)<br>"
                                                   "Copyright (C) 2022 Majcher<br>"
                                                   "Notatnik jest rozprowadzany na licencji GNU LGPL"));
}

// Funkcja ustawiająca czcionkę w dokumencie
void MainWindow::on_actionCzcionka_triggered()
{
    bool fontSelected;
    QFont font = QFontDialog::getFont(&fontSelected, this);
    if(fontSelected)
    {
        ui->textEdit->setFont(font);
    }
    else return;
}

// otworzenie strony github autora
void MainWindow::on_actionKontakt_triggered()
{
    QUrl url("https://github.com/Lukmajcher/Notatnik");
    QDesktopServices ul;
    ul.openUrl(url);
}

// Otworzenie strony google w domyślnej przeglądarce
void MainWindow::on_actionWyszukajWInternecie_triggered()
{
    QUrl url("https://www.google.pl");
    QDesktopServices ul;
    ul.openUrl(url);
}

// zawijanie wierszy
void MainWindow::on_actionZawijanie_wierszy_triggered()
{
    if(!worldWrap)
    {
       ui->textEdit->setLineWrapMode(QTextEdit::WidgetWidth);
       worldWrap = true;
    }else
    {
        ui->textEdit->setLineWrapMode(QTextEdit::NoWrap);
        worldWrap = false;
    }
}

// Wstawienie dzisiejszej daty do tekstu
void MainWindow::on_actionDzisiejszaData_triggered()
{
    QDateTime datetime = QDateTime::currentDateTime();
    ui->textEdit->append(datetime.toString());
}
