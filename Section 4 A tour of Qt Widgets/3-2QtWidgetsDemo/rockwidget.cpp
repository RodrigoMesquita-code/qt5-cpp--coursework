#include "rockwidget.h"
#include <QLabel>
#include <QPushButton>
#include <QMessageBox>

RockWidget::RockWidget(QWidget *parent) : QWidget(parent)
{
        // setWindowTitle("Rock Widget Here");

    // add a label to the widget
    QLabel * label = new QLabel("This is my label", this);



    // add a styled widget and move it around

    QPalette label1Palette;
    label1Palette.setColor(QPalette::Window,Qt::yellow);
    label1Palette.setColor(QPalette::WindowText,Qt::blue);


    QFont label1Font("Times", 20, QFont::Bold);

    QLabel * label1 = new QLabel(this);
    label1->setAutoFillBackground(true);
    label1->setText("My colored label");
    label1->setFont(label1Font);
    label1->setPalette(label1Palette);
    label1->move(50,50);



    // add another label
    QPalette label2Palette;
    label2Palette.setColor(QPalette::Window,Qt::yellow);
    label2Palette.setColor(QPalette::WindowText,Qt::blue);

    QLabel * label2 = new QLabel(this);
    label2->setAutoFillBackground(true);
    label2->setText("My second colored label");
    label2->setPalette(label2Palette);
    label2->move(70,150);

    // add a button and connect to slot
    QFont buttonFont("Times", 30, QFont::Bold);
    QPushButton * button = new QPushButton(this);
    button->setText("Click me");
    button->setFont(buttonFont);
    button->move(100,250);
    connect(button,SIGNAL(clicked()),this,SLOT(buttonClicked()));



}

void RockWidget::buttonClicked()
{
    QMessageBox::information(this, "Message", "You clicked on my button! Are you happy?");
}

QSize RockWidget::sizeHint() const
{
    return QSize(500,500);
}
