#include "mainwindow.h"
#include "ui_mainwindow.h"



static int randomBetween(int low, int high)
{
    return (qrand() % ((high + 1) - low) + low);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);                               // Инициализируем графическую сцену
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);             // настраиваем индексацию элементов

    ui->graphicsView->resize(600,300);                              // Устанавливаем размер graphicsView
    ui->graphicsView->setScene(scene);                              // Устанавливаем графическую сцену в graphicsView
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);        // Настраиваем рендер
    ui->graphicsView->setCacheMode(QGraphicsView::CacheBackground); // Кэш фона
    ui->graphicsView->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);

    scene->setSceneRect(0,0,500,300);                               // Устанавливаем размер сцены
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()        //Text
{
    MoveItem* item = new TextElement();
    item->setPos(randomBetween(30, 470),
                 randomBetween(30, 270));
    scene->addItem(item);

    countText++;
    QString str = "Text" + QString::number(countText);
    QListWidgetItem *newItem = new QListWidgetItem;
    newItem->setText(str);
    ui->listWidget->insertItem(row, newItem);
    row++;

    Elements* el = new Elements;
    el->item = item;
    el->title = str;
    elements.push_back(el);
}

void MainWindow::on_pushButton_2_clicked()      //Clover
{
    MoveItem* item = new Clover();
    item->setPos(randomBetween(30, 470),
                 randomBetween(30, 270));
    scene->addItem(item);

    countClover++;
    QString str = "Clover" + QString::number(countClover);
    QListWidgetItem *newItem = new QListWidgetItem;
    newItem->setText(str);
    ui->listWidget->insertItem(row, newItem);
    row++;

    Elements* el = new Elements;
    el->item = item;
    el->title = str;
    elements.push_back(el);
}

void MainWindow::on_pushButton_3_clicked()      //clock
{
    MoveItem* item = new class clock();
    item->setPos(randomBetween(30, 470),
                 randomBetween(30, 270));
    scene->addItem(item);

    countClock++;
    QString str = "Clock" + QString::number(countClock);
    QListWidgetItem *newItem = new QListWidgetItem;
    newItem->setText(str);
    ui->listWidget->insertItem(row, newItem);
    row++;

    Elements* el = new Elements;
    el->item = item;
    el->title = str;
    elements.push_back(el);
}

void MainWindow::on_pushButton_4_clicked()  //удалить
{
    QString text = ui->listWidget->currentIndex().data().toString();

    for(Elements* el: elements) {
        if (el->title == text){
            el->item->deleteLater();
        }
    }

    delete ui->listWidget->currentItem();
}
