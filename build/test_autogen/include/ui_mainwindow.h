/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *ICAN;
    QWidget *centralwidget;
    QListWidget *listWidget;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *welcome;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(293, 535);
        ICAN = new QAction(MainWindow);
        ICAN->setObjectName("ICAN");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 10, 271, 441));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 460, 271, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 293, 23));
        welcome = new QMenu(menubar);
        welcome->setObjectName("welcome");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(welcome->menuAction());
        welcome->addAction(ICAN);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\351\253\230\350\200\203\347\245\235\346\204\277", nullptr));
        ICAN->setText(QCoreApplication::translate("MainWindow", "\346\210\221\344\270\200\345\256\232\350\203\275\350\241\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\351\253\230\350\200\203\345\277\203\346\204\277\345\215\225                                                      \347\245\235\345\277\203\346\203\263\344\272\213\346\210\220", nullptr));
        welcome->setTitle(QCoreApplication::translate("MainWindow", "\351\253\230\350\200\203\345\212\240\346\262\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
