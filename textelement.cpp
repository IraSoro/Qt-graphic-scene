#include "textelement.h"

TextElement::TextElement(QObject *parent) : MoveItem(parent)
{
    whoami = "eres";
}

QRectF TextElement::boundingRect() const
{
    return QRectF (-30,-30,60,60);
}

void TextElement::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->setPen(Qt::black);
    painter->setBrush(Qt::red);
    painter->drawRect(-30,-30,60,60);
}
