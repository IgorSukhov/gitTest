#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Hello");
    qDebug() << "Hello";
    qDebug() << "Hello one";
    qDebug() << "Hello second";
    qDebug() << "Hello third!";
}

MainWindow::~MainWindow()
{
    delete ui;
}
