#include "clover.h"

Clover::Clover(QObject *parent) : MoveItem(parent)
{
    whoami = "clover";
}

QRectF Clover::boundingRect() const
{
    return QRectF (-50,-50,100,100);
}

void Clover::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->setPen(Qt::black);
    painter->setBrush(Qt::green);

    QPainterPath path1;
    path1.moveTo(0, -2);
    path1.cubicTo(20, -10,  20, -50,  0, -35);
    path1.cubicTo(-20, -50,  -20, -10,  0, -2);

    QPainterPath path2;
    path2.moveTo(0, 2);
    path2.cubicTo(20, 10,  20, 50,  0, 35);
    path2.cubicTo(-20, 50,  -20, 10,  0, 2);

    QPainterPath path3;
    path3.moveTo(-2, 0);
    path3.cubicTo(-10, 20,  -50, 20,  -35, 0);
    path3.cubicTo(-50, -20,  -10, -20,  -2, 0);

    QPainterPath path4;
    path4.moveTo(2, 0);
    path4.cubicTo(10, 20,  50, 20,  35, 0);
    path4.cubicTo(50, -20,  10, -20,  2, 0);

    painter->drawPath(path1);
    painter->drawPath(path2);
    painter->drawPath(path3);
    painter->drawPath(path4);
}
