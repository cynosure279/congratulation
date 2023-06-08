/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(400, 306);
        textEdit = new QTextEdit(Dialog);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 10, 391, 251));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 270, 88, 34));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "\351\253\230\350\200\203\347\245\235\346\204\277\357\274\201", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">\347\245\235\346\204\277\346\211\200\346\234\211\351\253\230\344\270\211\345\255\246\345\255\220\351\253\230\350\200\203\351\241\272\345\210\251\357\274\201\357\274\201\357\274\201</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-style:italic; color:#000000;\">\346\230\245\351\243\216\345\276\227\346\204\217\351\251\254\350\271\204\347\226\276"
                        "\357\274\214\344\270\200\346\227\245\347\234\213\345\260\275\351\225\277\345\256\211\350\212\261\343\200\202</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-style:italic; color:#000000;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-style:italic; color:#000000;\">\351\207\221\346\246\234\351\253\230\346\202\254\345\247\223\345\255\227\347\234\237\357\274\214\345\210\206\346\230\216\346\212\230\345\276\227\344\270\200\346\236\235\346\230\245\343\200\202</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-style:italic; color:#000000;\"><br /></p>\n"
"<p align=\"center\" style=\" mar"
                        "gin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#000000;\">\344\271\235\344\270\207\346\212\237\346\211\266\346\216\222\347\276\275\347\277\274\357\274\214\345\215\201\345\271\264\350\276\233\350\213\246\346\266\211\351\243\216\345\260\230\343\200\202\351\253\230\344\270\211\345\255\246\351\225\277\344\273\254\357\274\214\351\253\230\350\200\203\344\270\264\350\277\221\357\274\214\345\267\262\347\273\217\346\235\245\345\210\260\344\272\206\345\261\236\344\272\216\344\275\240\344\273\254\347\232\204\350\212\202\346\227\245\357\274\214\346\230\257\346\227\266\345\200\231\351\207\207\346\221\230\344\275\240\344\273\254\346\261\227\346\260\264\347\232\204\347\241\225\346\236\234\344\272\206\357\274\214\347\245\235\346\204\277\346\211\200\346\234\211\351\253\230\344\270\211\345\220\214\345\255\246\351\207\221\346\246\234\351\242\230\345\220\215\357\274\201</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empt"
                        "y; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; color:#000000;\"><br /></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "\346\210\221\344\270\200\345\256\232\350\203\275\350\241\214\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
