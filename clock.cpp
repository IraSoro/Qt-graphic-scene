#include "clock.h"

clock::clock(QObject *parent) : MoveItem(parent)
{
    whoami = "clock";
}

QRectF clock::boundingRect() const
{
    return QRectF (-30,-20,60,30);
}

void clock::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->setPen(Qt::black);
    painter->drawRect(-30,-20,60,30);

    QString time1 = QTime::currentTime().toString();

    painter->setPen(Qt::black);
    QFont font("Courier", 16, QFont::DemiBold);
    QFontMetrics fm(font);
    int textWidth = fm.width(time1);

    painter->drawText(-textWidth/2+30, 0, time1);
    update();

}
