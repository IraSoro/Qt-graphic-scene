#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QVector>

#include <moveitem.h>
#include "textelement.h"
#include "clock.h"
#include "clover.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

struct Elements
{
   MoveItem* item;
   QString title;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    int row = 0;
    int countText = 0;
    int countClover = 0;
    int countClock = 0;

    QVector <Elements*> elements;
};
#endif // MAINWINDOW_H
