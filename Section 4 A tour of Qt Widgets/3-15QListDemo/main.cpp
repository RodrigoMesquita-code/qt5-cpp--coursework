#include <QCoreApplication>
#include <QDebug>
#include <QList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // declare the list
    QList<QString> stringList;

    // put data in the list
    stringList << "I am" << "lovin" << "QT";
    // [ "I am", "lovin", "QT"]

    stringList.append(" a ");
    stringList.append(" lot! ");

    // get the dat from the list
    qDebug() << "The first element is "<< stringList[0];
        qDebug() << "The second element is "<< stringList[1];
            qDebug() << "The third element is "<< stringList[2];

            // get the number of elements
            qDebug() << "The number of elements in my list is: " << stringList.count();

            // loop through the elements
            for(int i = 0; i<stringList.count() ; i++)
            {
                qDebug() << "The element at index"<< QString::number(i)<< "is" << stringList.at(i);
            }

    return a.exec();
}
