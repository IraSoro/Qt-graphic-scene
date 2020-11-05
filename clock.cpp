#include "clock.h"

clock::clock(QObject *parent) : MoveItem(parent)
{
    whoami = "clock";
}

QRectF clock::boundingRect() const
{
    return QRectF (-30,-30,60,60);
}

void clock::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->setPen(Qt::black);
    painter->setBrush(Qt::yellow);
    painter->drawRect(-30,-30,60,60);
    // timer
}
