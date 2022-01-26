/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNowy;
    QAction *actionNoweOkno;
    QAction *actionOtworz;
    QAction *actionZapisz;
    QAction *actionZapiszJako;
    QAction *actionDrukuj;
    QAction *actionWyjdz;
    QAction *actionCofnij;
    QAction *actionWytnij;
    QAction *actionKopiuj;
    QAction *actionWklej;
    QAction *actionUsun;
    QAction *actionWyszukajWInternecie;
    QAction *actionZnajdz;
    QAction *actionIdzDo;
    QAction *actionZaznaczWszystko;
    QAction *actionDzisiejszaData;
    QAction *actionPowtorz;
    QAction *actionZawijanie_wierszy;
    QAction *actionCzcionka;
    QAction *actionO_programie_2;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuPlik;
    QMenu *menuEdycja;
    QMenu *menu_Format;
    QMenu *menuPomoc;
    QMenu *menuInformacje;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionNowy = new QAction(MainWindow);
        actionNowy->setObjectName(QString::fromUtf8("actionNowy"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/img/New.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionNowy->setIcon(icon);
        actionNoweOkno = new QAction(MainWindow);
        actionNoweOkno->setObjectName(QString::fromUtf8("actionNoweOkno"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imgs/img/Open.ico"), QSize(), QIcon::Normal, QIcon::On);
        actionNoweOkno->setIcon(icon1);
        actionOtworz = new QAction(MainWindow);
        actionOtworz->setObjectName(QString::fromUtf8("actionOtworz"));
        actionOtworz->setIcon(icon1);
        actionZapisz = new QAction(MainWindow);
        actionZapisz->setObjectName(QString::fromUtf8("actionZapisz"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imgs/img/Save.ico"), QSize(), QIcon::Normal, QIcon::On);
        actionZapisz->setIcon(icon2);
        actionZapiszJako = new QAction(MainWindow);
        actionZapiszJako->setObjectName(QString::fromUtf8("actionZapiszJako"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imgs/img/SaveAs.ico"), QSize(), QIcon::Normal, QIcon::On);
        actionZapiszJako->setIcon(icon3);
        actionDrukuj = new QAction(MainWindow);
        actionDrukuj->setObjectName(QString::fromUtf8("actionDrukuj"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imgs/img/Print.ico"), QSize(), QIcon::Normal, QIcon::On);
        actionDrukuj->setIcon(icon4);
        actionWyjdz = new QAction(MainWindow);
        actionWyjdz->setObjectName(QString::fromUtf8("actionWyjdz"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/imgs/img/Exit.ico"), QSize(), QIcon::Normal, QIcon::On);
        actionWyjdz->setIcon(icon5);
        actionCofnij = new QAction(MainWindow);
        actionCofnij->setObjectName(QString::fromUtf8("actionCofnij"));
        actionWytnij = new QAction(MainWindow);
        actionWytnij->setObjectName(QString::fromUtf8("actionWytnij"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/imgs/img/Cut.ico"), QSize(), QIcon::Normal, QIcon::On);
        actionWytnij->setIcon(icon6);
        actionKopiuj = new QAction(MainWindow);
        actionKopiuj->setObjectName(QString::fromUtf8("actionKopiuj"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/imgs/img/Copy.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionKopiuj->setIcon(icon7);
        actionWklej = new QAction(MainWindow);
        actionWklej->setObjectName(QString::fromUtf8("actionWklej"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/imgs/img/Paste.ico"), QSize(), QIcon::Normal, QIcon::On);
        actionWklej->setIcon(icon8);
        actionUsun = new QAction(MainWindow);
        actionUsun->setObjectName(QString::fromUtf8("actionUsun"));
        actionWyszukajWInternecie = new QAction(MainWindow);
        actionWyszukajWInternecie->setObjectName(QString::fromUtf8("actionWyszukajWInternecie"));
        actionZnajdz = new QAction(MainWindow);
        actionZnajdz->setObjectName(QString::fromUtf8("actionZnajdz"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/imgs/img/Find.ico"), QSize(), QIcon::Normal, QIcon::On);
        actionZnajdz->setIcon(icon9);
        actionIdzDo = new QAction(MainWindow);
        actionIdzDo->setObjectName(QString::fromUtf8("actionIdzDo"));
        actionZaznaczWszystko = new QAction(MainWindow);
        actionZaznaczWszystko->setObjectName(QString::fromUtf8("actionZaznaczWszystko"));
        actionDzisiejszaData = new QAction(MainWindow);
        actionDzisiejszaData->setObjectName(QString::fromUtf8("actionDzisiejszaData"));
        actionPowtorz = new QAction(MainWindow);
        actionPowtorz->setObjectName(QString::fromUtf8("actionPowtorz"));
        actionZawijanie_wierszy = new QAction(MainWindow);
        actionZawijanie_wierszy->setObjectName(QString::fromUtf8("actionZawijanie_wierszy"));
        actionCzcionka = new QAction(MainWindow);
        actionCzcionka->setObjectName(QString::fromUtf8("actionCzcionka"));
        actionO_programie_2 = new QAction(MainWindow);
        actionO_programie_2->setObjectName(QString::fromUtf8("actionO_programie_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(100, 90, 641, 401));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS Sans Serif")});
        font.setPointSize(12);
        textEdit->setFont(font);

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuPlik = new QMenu(menubar);
        menuPlik->setObjectName(QString::fromUtf8("menuPlik"));
        menuEdycja = new QMenu(menubar);
        menuEdycja->setObjectName(QString::fromUtf8("menuEdycja"));
        menu_Format = new QMenu(menubar);
        menu_Format->setObjectName(QString::fromUtf8("menu_Format"));
        menuPomoc = new QMenu(menubar);
        menuPomoc->setObjectName(QString::fromUtf8("menuPomoc"));
        menuInformacje = new QMenu(menuPomoc);
        menuInformacje->setObjectName(QString::fromUtf8("menuInformacje"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuPlik->menuAction());
        menubar->addAction(menuEdycja->menuAction());
        menubar->addAction(menu_Format->menuAction());
        menubar->addAction(menuPomoc->menuAction());
        menuPlik->addAction(actionNowy);
        menuPlik->addAction(actionNoweOkno);
        menuPlik->addAction(actionOtworz);
        menuPlik->addAction(actionZapisz);
        menuPlik->addAction(actionZapiszJako);
        menuPlik->addSeparator();
        menuPlik->addAction(actionDrukuj);
        menuPlik->addSeparator();
        menuPlik->addAction(actionWyjdz);
        menuEdycja->addAction(actionCofnij);
        menuEdycja->addAction(actionPowtorz);
        menuEdycja->addSeparator();
        menuEdycja->addAction(actionWytnij);
        menuEdycja->addAction(actionKopiuj);
        menuEdycja->addAction(actionWklej);
        menuEdycja->addAction(actionUsun);
        menuEdycja->addSeparator();
        menuEdycja->addAction(actionWyszukajWInternecie);
        menuEdycja->addAction(actionZnajdz);
        menuEdycja->addAction(actionIdzDo);
        menuEdycja->addAction(actionZaznaczWszystko);
        menuEdycja->addAction(actionDzisiejszaData);
        menuEdycja->addSeparator();
        menuEdycja->addSeparator();
        menu_Format->addAction(actionZawijanie_wierszy);
        menu_Format->addAction(actionCzcionka);
        menuPomoc->addAction(menuInformacje->menuAction());
        menuPomoc->addAction(actionO_programie_2);
        toolBar->addAction(actionNowy);
        toolBar->addAction(actionOtworz);
        toolBar->addAction(actionZapisz);
        toolBar->addAction(actionZapiszJako);
        toolBar->addAction(actionDrukuj);
        toolBar->addSeparator();
        toolBar->addAction(actionWytnij);
        toolBar->addAction(actionKopiuj);
        toolBar->addAction(actionWklej);
        toolBar->addSeparator();
        toolBar->addAction(actionZnajdz);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNowy->setText(QCoreApplication::translate("MainWindow", "Nowy", nullptr));
#if QT_CONFIG(tooltip)
        actionNowy->setToolTip(QCoreApplication::translate("MainWindow", "Nowy", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNowy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNoweOkno->setText(QCoreApplication::translate("MainWindow", "Nowe okno", nullptr));
        actionOtworz->setText(QCoreApplication::translate("MainWindow", "Otw\303\263rz", nullptr));
#if QT_CONFIG(tooltip)
        actionOtworz->setToolTip(QCoreApplication::translate("MainWindow", "Otw\303\263rz", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOtworz->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZapisz->setText(QCoreApplication::translate("MainWindow", "Zapisz", nullptr));
#if QT_CONFIG(shortcut)
        actionZapisz->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZapiszJako->setText(QCoreApplication::translate("MainWindow", "Zapisz jako...", nullptr));
        actionDrukuj->setText(QCoreApplication::translate("MainWindow", "Drukuj", nullptr));
        actionWyjdz->setText(QCoreApplication::translate("MainWindow", "Wyjd\305\272", nullptr));
        actionCofnij->setText(QCoreApplication::translate("MainWindow", "Cofnij", nullptr));
#if QT_CONFIG(shortcut)
        actionCofnij->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWytnij->setText(QCoreApplication::translate("MainWindow", "Wytnij", nullptr));
        actionKopiuj->setText(QCoreApplication::translate("MainWindow", "Kopiuj", nullptr));
        actionWklej->setText(QCoreApplication::translate("MainWindow", "Wklej", nullptr));
        actionUsun->setText(QCoreApplication::translate("MainWindow", "Usu\305\204", nullptr));
#if QT_CONFIG(shortcut)
        actionUsun->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWyszukajWInternecie->setText(QCoreApplication::translate("MainWindow", "Wyszukaj w Internecie", nullptr));
        actionZnajdz->setText(QCoreApplication::translate("MainWindow", "Znajd\305\272", nullptr));
#if QT_CONFIG(shortcut)
        actionZnajdz->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionIdzDo->setText(QCoreApplication::translate("MainWindow", "Id\305\272 do", nullptr));
        actionZaznaczWszystko->setText(QCoreApplication::translate("MainWindow", "Zaznacz wszystko", nullptr));
#if QT_CONFIG(shortcut)
        actionZaznaczWszystko->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDzisiejszaData->setText(QCoreApplication::translate("MainWindow", "Dzisiejsza data", nullptr));
        actionPowtorz->setText(QCoreApplication::translate("MainWindow", "Powt\303\263rz", nullptr));
        actionZawijanie_wierszy->setText(QCoreApplication::translate("MainWindow", "Zawijanie wierszy", nullptr));
        actionCzcionka->setText(QCoreApplication::translate("MainWindow", "Czcionka", nullptr));
        actionO_programie_2->setText(QCoreApplication::translate("MainWindow", "O programie", nullptr));
        menuPlik->setTitle(QCoreApplication::translate("MainWindow", "&Plik", nullptr));
        menuEdycja->setTitle(QCoreApplication::translate("MainWindow", "&Edycja", nullptr));
        menu_Format->setTitle(QCoreApplication::translate("MainWindow", "&Format", nullptr));
        menuPomoc->setTitle(QCoreApplication::translate("MainWindow", "P&omoc", nullptr));
        menuInformacje->setTitle(QCoreApplication::translate("MainWindow", "Informacje", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
