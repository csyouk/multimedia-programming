#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cameradialog.h"
#include <QFile>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::showFullScreen();
    codec = QTextCodec::codecForName("UTF8");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_cameraButton_clicked()
{
    CameraDialog dig;
    dig.exec();
}
