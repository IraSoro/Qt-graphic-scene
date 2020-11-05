#ifndef CLOVER_H
#define CLOVER_H

#include "moveitem.h"

class Clover : public MoveItem
{
public:
    Clover(QObject *parent = Q_NULLPTR);
protected:
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // CLOVER_H
