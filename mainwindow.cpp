#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myrobot.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

static MyRobot Robot;

void MainWindow::connect()
{
    Robot.doConnect();
}

void MainWindow::disconnect()
{
    Robot.disConnect();
}

void MainWindow::avancer()
{
    Robot.avancer();
}
