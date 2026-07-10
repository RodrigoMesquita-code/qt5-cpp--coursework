#include "infodialog.h"
#include "ui_infodialog.h"
#include <QDebug>

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    QDialogButtonBox::StandardButton stdButton = ui->buttonBox->standardButton(button);
    if( stdButton == QDialogButtonBox::Ok)
    {
        accept();
        qDebug()<< "Ok button Clicked ";
    }


    if( stdButton == QDialogButtonBox::Save)
    {
        qDebug()<< "Save button Clicked ";
    }


    if( stdButton == QDialogButtonBox::SaveAll)
    {
        qDebug()<< "Save all button Clicked ";
    }

    if( stdButton == QDialogButtonBox::Cancel)
    {
        rejected();
        qDebug()<< "cancel button Clicked ";
    }

}
