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
}

MainWindow::~MainWindow()
{
    delete ui;
}
