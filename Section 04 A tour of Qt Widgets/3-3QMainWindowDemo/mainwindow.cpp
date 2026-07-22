#include "mainwindow.h"
#include <QPushButton>
#include <QMenuBar>
#include <QStatusBar>
#include <QDebug>
#include <QAction>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // add central widget
    QPushButton * button = new QPushButton("Hello my man how you doing... fine", this);
    setCentralWidget(button);

    // declare quit action
    QAction * quitAction = new QAction("Quit");
    connect(quitAction,&QAction::triggered,[=](){
        QApplication::quit();
    });

    // add menus
    QMenu * fileMenu = menuBar()->addMenu("file");
    fileMenu->addAction(quitAction);
    menuBar()->addMenu("File");
    menuBar()->addMenu("Edit");
    menuBar()->addMenu("Window");
    menuBar()->addMenu("Settings");
    menuBar()->addMenu("Help");

    // ass status bar message
    statusBar()->showMessage("Updloading file...", 3000);
    // statusBar()->clearMessage();

}

MainWindow::~MainWindow()
{

}

QSize MainWindow::sizeHint() const
{
    return QSize(800,500);
}
