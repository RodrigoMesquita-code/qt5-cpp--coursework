#include "widget.h"
#include<QPushButton>
#include <QMessageBox>
#include <QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton * button = new QPushButton(this);
    button ->setText("Click me please");
    button->move(200,200);
    connect(button,&QPushButton::clicked,[=](){

        // the hard way
        /*
        QMessageBox message;
        message.setMinimumSize(200,200);
        message.setWindowTitle("Message title oh yeas");
        message.setText("Something interesting...");
        message.setInformativeText("Do you want to do something about it??");
        message.setIcon(QMessageBox::Critical);
        message.setStandardButtons(QMessageBox::Ok|QMessageBox::Cancel);
        message.setDefaultButton(QMessageBox::Cancel);

        int ret = message.exec();     */

        /*
        // critical message
        int ret = QMessageBox:: critical(this,"Message Title", "Something cool happened, do you wanna do something about it??",
                                        QMessageBox::Ok|QMessageBox::Cancel); */

        /*
        // information message
        int ret = QMessageBox:: information(this,"Message Title", "Something cool happened, do you wanna do something about it??",
                                        QMessageBox::Ok|QMessageBox::Cancel); */

        // question message
        /*
        int ret = QMessageBox:: question(this,"Message Title", "Something cool happened, do you wanna do something about it??",
                                        QMessageBox::Ok|QMessageBox::Cancel);
                                        */


        // warning message
        int ret = QMessageBox:: warning(this,"Message Title", "Something cool happened, do you wanna do something about it??",
                                        QMessageBox::Ok|QMessageBox::Cancel);


        if( ret == QMessageBox::Ok)
        {
            qDebug()<<"User clicked on Ok";
        }
        if ( ret == QMessageBox::Cancel)
        {
            qDebug()<<"User clicked on Cancel";
        }
    });
}

Widget::~Widget()
{

}
