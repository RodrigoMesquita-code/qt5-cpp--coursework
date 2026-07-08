#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    /*
    // string notation
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(changetext()));
} */

    /*
    // functor notation: regular slots
    connect(ui->pushButton,&QPushButton::clicked,this,&Widget::changetext);
}
*/

// functor notation lambdas
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        ui->label->setText("Lambda");
    });

}

Widget::~Widget()
{
    delete ui;
}

void Widget::changetext()
{
    qDebug()<<"User clicked on button";
    ui->label->setText("Hello there");
}
