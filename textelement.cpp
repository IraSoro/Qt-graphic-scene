#include "textelement.h"

TextElement::TextElement(QObject *parent) : MoveItem(parent)
{
    whoami = "eres";
}

QRectF TextElement::boundingRect() const
{
    return QRectF (-20,-20,40,30);
}

void TextElement::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    QString text = "Ересь!";

    painter->setPen(Qt::black);
    QFont font("Courier", 16, QFont::DemiBold);
    QFontMetrics fm(font);
    int textWidth = fm.width(text);

    painter->translate(0, 0);
    painter->drawText(-textWidth/2+25, 0, text);

}
