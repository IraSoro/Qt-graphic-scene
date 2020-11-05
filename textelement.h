#ifndef TEXTELEMENT_H
#define TEXTELEMENT_H

#include "moveitem.h"

class TextElement : public MoveItem
{
public:
    TextElement(QObject *parent = Q_NULLPTR);
protected:
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // TEXTELEMENT_H
