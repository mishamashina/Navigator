#include "widgetmap.h"

WidgetMap::WidgetMap(QWidget *parent)
    : QWidget{parent}
{

}

void WidgetMap::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);

    painter.drawRect(painter.viewport());
}
