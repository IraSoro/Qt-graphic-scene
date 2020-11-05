#ifndef CLOCK_H
#define CLOCK_H

#include "moveitem.h"

class clock : public MoveItem
{
public:
    clock(QObject *parent = Q_NULLPTR);
protected:
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // CLOCK_H
