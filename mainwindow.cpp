#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cfloorbutton.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //******************************* connectors ***************//
    //connect(ui->fireBtn, SIGNAL(released()), this, SLOT(doFireProcedure()));
    //connect(ui->startBtn, SIGNAL(released()), this, SLOT(startSystem()));
    connect(ui->helpBtn, SIGNAL(released()), this, SLOT(startHelp()));
    connect(ui->doorIntBtn, SIGNAL(released()), this, SLOT(clearDoorInterrupt()));
    connect(ui->fireBtn, SIGNAL(released()), this, SLOT(startFireHelp()));
    connect(ui->overLoadBtn, SIGNAL(released()), this, SLOT(handleOverLoad()));
    connect(ui->powerOutBtn, SIGNAL(released()), this, SLOT(handlePowerOut()));
    connect(ui->ReqElevBtn, SIGNAL(released()), this, SLOT(handleElevatorRequest()));

    ui->floorNumberTxtBox->setPlainText("1");
    ui->elevatorNumberTxtBox->setPlainText("1");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::doFireProcedure()
{
    qInfo("Fire procedure is started");
}
void MainWindow::startSystem()
{
    qInfo("System is initializing ... please wait");
    //mainECS

}
void MainWindow::startHelp()
{
    bool ok;
    qInfo("System is starting help procedure");
    int elevator = ui->elevatorNumberTxtBox->toPlainText().toInt(&ok);
    int floor = ui->floorNumberTxtBox->toPlainText().toInt(&ok);
    mainECS.startHelping(floor, elevator);

}
void MainWindow::clearDoorInterrupt()
{
    bool ok;
    qInfo("Door obstacle is detected");
    int elevator = ui->elevatorNumberTxtBox->toPlainText().toInt(&ok);
    int floor = ui->floorNumberTxtBox->toPlainText().toInt(&ok);
    mainECS.resolveDoorIssue(floor, elevator);

}
void MainWindow::startFireHelp()
{
    mainECS.startFireProcedures();
}
void MainWindow::handleOverLoad()
{
    bool ok;
    int elevator = ui->elevatorNumberTxtBox->toPlainText().toInt(&ok);
    int floor = ui->floorNumberTxtBox->toPlainText().toInt(&ok);
    mainECS.startOverLoadProcedure(floor, elevator);
}
void MainWindow::handlePowerOut()
{
    mainECS.startPowerOutProcedure();
}
void MainWindow::handleElevatorRequest()
{
    int direction = 0;
    srand (time(NULL));

    bool ok;
    cFloorButton fb;
    fb.pressButton();
    int elevator = ui->elevatorNumberTxtBox->toPlainText().toInt(&ok);
    int floor = ui->floorNumberTxtBox->toPlainText().toInt(&ok);
    direction = (rand() % 100 + 1)%2; //to get a 0 or 1 as a direction
    fb.setFloor(floor);
    fb.setDirection(direction);
    mainECS.processRequest(fb);
}
