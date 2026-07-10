#include "widget.h"
#include "ui_widget.h"
#include <QButtonGroup>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QButtonGroup * buttonGroup = new QButtonGroup(this);
    buttonGroup->addButton(ui->windowsCheckBox);
    buttonGroup->addButton(ui->linuxCheckBox);
    buttonGroup->addButton(ui->macCheckBox);

    buttonGroup->setExclusive(true);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_windowsCheckBox_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"Windows CheckBox is checked";
    }else {
        qDebug()<<"Windows CheckBox is unchecked";
}
}

void Widget::on_beerCheckBox_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"Beer CheckBox is checked";
    }else {
        qDebug()<<"Beer CheckBox is unchecked";
}
}

void Widget::on_aRadioButton_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"A RadioButton is checked";
    }else {
        qDebug()<<"A RadioButton is unchecked";
}
}
void Widget::on_grabData_clicked()
{
    if(ui->windowsCheckBox->isChecked())
    {
        qDebug()<<"Windows CheckBox is checked";
    }else {
         qDebug()<<"Windows CheckBox is unchecked";
    }
}

void Widget::on_setStateButton_clicked()
{
    if(ui->windowsCheckBox->isChecked())
    {ui->windowsCheckBox->setChecked(false);
    }else {
{
            ui->windowsCheckBox->setChecked(true);
        }
}

    //non exclucive checkbox group
    if( ui->beerCheckBox->isChecked())
    {
        ui->beerCheckBox->setChecked(false);
    }else {
        ui->beerCheckBox->setChecked(true);
}
}




















