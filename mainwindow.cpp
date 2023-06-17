#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QtWidgets>
#include <QtCore>
#include "./ui_dialog.h"

using namespace std;


class itemWidget : public QWidget
{
public:

    static int RowNums;


    itemWidget(QString name) {
        RowNums++;
        RowNum = RowNums;
        label->setText(name);
        this->setLayout(layout);
        layout->addWidget(checkbox);
        layout->addWidget(label);
        checkbox->show();
        label->show();
}  // constructor for class itemWidget.

    ~itemWidget() {
        RowNums--;
        delete layout;
        delete label;
        delete checkbox;
    }
private:
    int RowNum;   //item row num.

    QHBoxLayout *layout = new QHBoxLayout();
    QCheckBox *checkbox = new QCheckBox();
    QLabel *label = new QLabel();
     //the num of items
};


int itemWidget::RowNums = 0 ;



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    vector<QString> university;

   QFile f("./data.txt");
   if (!f.open(QIODevice::ReadOnly | QIODevice::Text)) {
       qDebug("Error::IOError:Fail To Read File!");
   }
   while (!f.atEnd()) {
       QByteArray arr = f.readLine();
       QString str(arr);
       university.push_back(str);
   }


    for (int i = 0; i<university.size();i++) {
        QListWidgetItem *w = new QListWidgetItem();
        ui->listWidget->addItem(w);
        itemWidget *widget =  new itemWidget(university[i]);
        w->setSizeHint(QSize(50,50));
        widget->show();
        ui->listWidget->setItemWidget(w,widget);



    }

    connect(ui->ICAN,&QAction::triggered,this,&MainWindow::DialogPopUp);









}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::DialogPopUp() {
    QDialog *dialog = new QDialog(this);
    Ui_Dialog dia;
    dia.setupUi(dialog);
    dialog->exec();
}




