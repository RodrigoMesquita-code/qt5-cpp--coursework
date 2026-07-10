#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //  add planets to the combo box
    ui->comboBox->addItem("Earth");
        ui->comboBox->addItem("Venus");
            ui->comboBox->addItem("Mars");
                ui->comboBox->addItem("Pluton");
                    ui->comboBox->addItem("Saturn");

                    //  make combo box eduitable
                    ui->comboBox->setEditable(true);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_captureValueButton_clicked()
{
    qDebug() << "The currently selected item in the combo is: " << ui->comboBox->currentText() <<
                "and the index is :" << QString::number(ui->comboBox->currentIndex());
}

void Widget::on_setValueButton_clicked()
{
    ui->comboBox->setCurrentIndex(3);
}

void Widget::on_getValuesButton_clicked()
{
    qDebug()<<"The Combo Box currently has "<< QString::number(ui->comboBox->count()) <<" items. They are: ";
    for( int i = 0; i < ui->comboBox->count() ; i++)
    {
        qDebug()<< "Index " << QString:: number (i) << " : " << ui->comboBox->itemText(i);
    }
}
