#include "widget.h"
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    // First Name
    QLabel * firstNameLabel = new QLabel("First Name: ", this);
    firstNameLabel->setMinimumSize(70,50);
    firstNameLabel->move(10,10);

    QLineEdit * firstNameLineEdit = new QLineEdit(this);
    firstNameLineEdit->setMinimumSize(200,50);
    firstNameLineEdit->move(100,10);

    // Last Name
    QLabel * lastNameLabel = new QLabel("Last Name: ", this);
    firstNameLabel->setMinimumSize(70,50);
    firstNameLabel->move(10,70);

    QLineEdit * lastNameLineEdit = new QLineEdit(this);
    lastNameLineEdit->setMinimumSize(200,50);
    lastNameLineEdit->move(100,70);

    // City
    QLabel * cityLabel = new QLabel("City: ", this);
    cityLabel->setMinimumSize(70,50);
    cityLabel->move(10,130);

    QLineEdit * cityLineEdit = new QLineEdit(this);
    cityLineEdit->setMinimumSize(200,50);
    cityLineEdit->move(100,130);

    // button
    QFont buttonFont("Times", 20, QFont::Bold);
    QPushButton * button = new QPushButton ("Grab data",this);
    button->setFont(buttonFont);
    button->move(80,190);

    connect(button,&QPushButton::clicked,[=](){
        QString firstName = firstNameLineEdit->text();
        QString lastName = lastNameLineEdit->text();
        QString city = cityLineEdit->text();

        if(!firstName.isEmpty() && !lastName.isEmpty() && !city.isEmpty())
        {
            // if neither field is empty we fall here
            qDebug()<<"First name is: " << firstName;
            qDebug()<<"Last name is: " << lastName;
            qDebug()<<"City name is: " << city;
        }else {
            qDebug()<<"One filed is empty";
        }
    });
    // respond  to signals from QLineEdits

    /*
    // cursorPositionChanged
    connect(firstNameLineEdit,&QLineEdit::cursorPositionChanged,[=](){
        qDebug()<<"The current position is: "<<firstNameLineEdit->cursorPosition();
    });*/

    /*
    //editingfinished emmited qhen user clicks enter or when line edit looses focus
    connect(firstNameLineEdit,&QLineEdit::editingFinished,[=](){
        qDebug()<<"Editing finished"<<firstNameLineEdit->cursorPosition();
    }); */

    /*
    // return pressed
    connect(firstNameLineEdit,&QLineEdit::returnPressed,[=](){
        qDebug()<<"Return Pressed";
    }); */

    /*
    // selection changed
    connect(firstNameLineEdit,&QLineEdit::selectionChanged,[=](){
        qDebug()<<"Selection changed";*/
/*
    //text changed
    connect(firstNameLineEdit,&QLineEdit::textChanged,[=](){
        qDebug()<<"Selection changed to: "<<firstNameLineEdit->text(); */


    // text edited
    connect(firstNameLineEdit,&QLineEdit::textEdited,[=](){
        qDebug()<<"Selection edited and changed to: "<<firstNameLineEdit->text();
        });

    // change text in qlineedit programmaticaly
    // lastNameLineEdit->setText("Say your last name");

    // HINT TEXT
    firstNameLineEdit->setPlaceholderText("First name");
    lastNameLineEdit->setPlaceholderText("Last Name");
    cityLineEdit->setPlaceholderText("City");


}

Widget::~Widget()
{
}
