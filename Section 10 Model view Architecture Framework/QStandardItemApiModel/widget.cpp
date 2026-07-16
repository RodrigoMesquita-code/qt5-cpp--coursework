#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    model = new QStandardItemModel(this);

    // capture the root item
    QStandardItem * rootItem = model->invisibleRootItem();

    // defining a couple of items
    QStandardItem * africaItem = new QStandardItem("Africa");
        QStandardItem * rwandaItem = new QStandardItem("Rwanda");
            QStandardItem * kigaliItem = new QStandardItem("Kigali");
             QStandardItem * musanzeItem = new QStandardItem("Musanze");
                QStandardItem * ugandaItem = new QStandardItem("Uganda");
                    QStandardItem * kempalaItem = new QStandardItem("Kempala");
                        QStandardItem * entebbeItem = new QStandardItem("Entebbe");
                            QStandardItem * asiaItem = new QStandardItem("Asia");
                                QStandardItem * chinaItem = new QStandardItem("China");
                                    QStandardItem * shangaiItem = new QStandardItem("Shangai");
                                        QStandardItem * beijingItem = new QStandardItem("Beijing");
                                            QStandardItem * europeItem = new QStandardItem("Europe");
                                                QStandardItem * franceItem = new QStandardItem("france");
                                                    QStandardItem * parisItem = new QStandardItem("Paris");
                                                        QStandardItem * toulouseItem = new QStandardItem("Toulouse");

     // define the tree structure
    // africa
     rootItem->appendRow(africaItem);
     africaItem->appendRow(rwandaItem);
     africaItem->appendRow(ugandaItem);

     rwandaItem->appendRow(kigaliItem);
     rwandaItem->appendRow(musanzeItem);

     ugandaItem->appendRow(kempalaItem);
     ugandaItem->appendRow(entebbeItem);

     // asia
     rootItem->appendRow(asiaItem);
     asiaItem->appendRow(chinaItem);
     chinaItem->appendRow(beijingItem);
     chinaItem->appendRow(shangaiItem);

     // europe
     rootItem->appendRow(europeItem);
     europeItem->appendRow(franceItem);
     franceItem->appendRow(parisItem);
     franceItem->appendRow(toulouseItem);

     ui->treeView->setModel(model);

     ui->treeView->expandAll();

     QItemSelectionModel * selectionModel = ui->treeView->selectionModel();
     connect(selectionModel, SIGNAL(selectionChanged(const QItemSelection&, const QItemSelection&)),
             this, SLOT(selectionChangedSlot(const QItemSelection&, const QItemSelection&)));

}


Widget::~Widget()
{
    delete ui;
}

void Widget::selectionChangedSlot(const QItemSelection &oldSelection, const QItemSelection &newSelection)
{
    qDebug() << "CLicked on something in the tree";
    QModelIndex currentIndex = ui->treeView->selectionModel()->currentIndex();
    QString data = model->data(currentIndex,Qt::DisplayRole).toString();

    // find the hierarchy of the selected item
    int hierarchy = 1;

    QModelIndex seekRoot = currentIndex;

    while( seekRoot != QModelIndex())
    {
        seekRoot = seekRoot.parent();
        hierarchy++;
    }

    QString dataToShow = QString("%1, level %2").arg(data).arg(QString::number(hierarchy));
    setWindowTitle(dataToShow);
}

















