#include "customdialog.h"
#include "ui_customdialog.h"


CustomDialog::CustomDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomDialog)
{
    ui->setupUi(this);


    ui->pushButton->setStyleSheet("QPushButton{background-color : red;color : white ;}");
}

CustomDialog::~CustomDialog()
{
    delete ui;
}

void CustomDialog::on_pushButton_clicked()
{
    CustomDialog * dialog = new CustomDialog(this);

    dialog->exec();
}
