#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QtDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{

    /*
    //getExistingDirectory
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    "/home",
                                                    QFileDialog::ShowDirsOnly
                                                    |QFileDialog::DontResolveSymlinks);

    qDebug()<<"Your chosed dir is: "<<dir;
    */

    /*
    // get open file name
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "/home",
                                                    tr("Images (*.png *.xpm *.jpg"));
    qDebug()<<"Your chosed dir is: " << fileName;  */


    //getOpenFileNames
    QStringList files = QFileDialog::getOpenFileNames(
                this,
                "Select one or more files to open",
                "/home",
                "Images (*.png *.xpm *.jpg)");

        qDebug()<<"Your chosed file is: " << files;
}

















