#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cecs.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    cECS mainECS;

private slots:
    void doFireProcedure();
    void startSystem();
    void startHelp();
    void clearDoorInterrupt();
    void startFireHelp();
    void handleOverLoad();
    void handlePowerOut();
    void handleElevatorRequest();
};
#endif // MAINWINDOW_H
