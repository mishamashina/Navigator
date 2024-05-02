#include "widgetmap.h"

WidgetMap::WidgetMap(QWidget *parent)
    : QWidget{parent}
{
    // QQuickView *view = new QQuickView();
    // view->setSource(QUrl("Mapping.qml"));
    // QQuickView qqv;
    // qqv.setResizeMode(QQuickView::SizeRootObjectToView);
    // qqv.setSource(QUrl("Mapping.qml"));

     // m_quickWidget = new QQuickWidget(this) ;
     // m_quickWidget->setSource(QUrl("qrc:/QmlLabel.qml"));
     // m_quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
     //this->gridLayout->addWidget(m_quickWidget, 1, 0);


    // QQuickWidget *view = new QQuickWidget;
    // view->setSource(QUrl::fromLocalFile("QML/Mapping.qml"));
    // view->show();
    qDebug() << "Зашло";
}

void WidgetMap::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);

    painter.drawRect(painter.viewport());
}
