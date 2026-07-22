#include "widget.h"
#include "ui_widget.h"
#include "infodialog.h"
#include <QDebug>

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

void Widget::on_provideInfoButton_clicked()
{
    InfoDialog * dialog = new InfoDialog(this);

    /*
    // show the dialog model
    int ret=dialog->exec();

    if( ret == QDialog::Accepted)
    {
        QString position = dialog->getPosition();
        QString os = dialog->getFavoriteOs();

        qDebug()<<"Dialog accepted! The position is: " << position<< " and favorite Os is: " << os;
        ui->infoLabel->setText("Your poition is: "+ position + " and you favorite Os is: " + os);
    }
    if( ret == QDialog::Rejected)
    {
        qDebug()<<"Dialog rejected";

    }*/

    // show the dialog non model
    connect(dialog,&InfoDialog::accepted,[=](){

        QString position = dialog->getPosition();
        QString os = dialog->getFavoriteOs();

        qDebug()<<"Dialog accepted! The position is: " << position<< " and favorite Os is: " << os;
        ui->infoLabel->setText("Your poition is: "+ position + " and you favorite Os is: " + os);
    });

    connect(dialog,&InfoDialog::rejected,[=](){
                qDebug()<<"Dialog rejected";
    });

    dialog->show();
    dialog->raise();
    dialog->activateWindow();

}
