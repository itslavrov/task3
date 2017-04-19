#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(copy()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::copy()
{
    QString str1 = ui->lineEdit->text();
    QString str2 = ui->lineEdit_2->text();

    ui->lineEdit->setText(str2);
    ui->lineEdit_2->setText(str1);
}
