#include "widget.h"
#include "ui_widget.h"
#include <stdlib.h>
#include <time.h>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // INITIALIZE
    srand (time(NULL));

    // GENERATE (1-10)
    secretNumber = rand() % 10 + 1;
    qDebug()<< "Secret Number generated: " << QString::number(secretNumber);

      ui->startOverButton->setDisabled(true);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_guessButton_clicked()
{
    guessNumber = ui->spinBox->value();
    qDebug()<< "The guess number is: " << QString::number(secretNumber);

    if( guessNumber == secretNumber)
    {
      ui -> messageLabel->setText("Congratulations! The Number is "+QString::number(secretNumber));

      // disable the guess button
      ui->guessButton->setDisabled(true);
      ui->startOverButton->setDisabled(false);
    }else {
        if(secretNumber < guessNumber){
            ui ->messageLabel->setText("Number is lower than that");
        }
        if (secretNumber > guessNumber){
            ui -> messageLabel->setText("Number is higher than that");
        }
}

}

void Widget::on_startOverButton_clicked()
{
    // enabe=le guess button
          ui->guessButton->setDisabled(false);

          // disable the start over button
                ui->startOverButton->setDisabled(true);

                // Put the spin box back to 1
                      ui->spinBox->setValue(1);

                      // regenerate the random number
                      secretNumber = rand() % 10+1;

                      // clear the message label
                            ui->messageLabel->setText("");
}
