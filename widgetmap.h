#ifndef WIDGETMAP_H
#define WIDGETMAP_H

#include <QWidget>
#include <QPainter>
#include <QDebug>
#include <QQuickWidget>
#include "mainwindow.h"

class WidgetMap : public QWidget
{
    Q_OBJECT
public:
    explicit WidgetMap(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *event);

signals:
};

#endif // WIDGETMAP_H
