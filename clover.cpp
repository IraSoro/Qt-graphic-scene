#include "clover.h"

Clover::Clover(QObject *parent) : MoveItem(parent)
{
    whoami = "clover";
}

QRectF Clover::boundingRect() const
{
    return QRectF (-30,-30,60,60);
}

void Clover::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->setPen(Qt::black);
    painter->setBrush(Qt::green);
    painter->drawRect(-30,-30,60,60);
}
