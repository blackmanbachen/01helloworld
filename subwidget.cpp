#include "subwidget.h"

SubWidget::SubWidget(QWidget *parent) : QWidget(parent)
{

    this->setWindowTitle("子窗口");
    this->resize(500, 400);

    b.setText("切换到父窗口");
    b.setParent(this);
    b.move(5, 5);

    connect(&b, &QPushButton::clicked, this, &SubWidget::switchParent);
}

void SubWidget::switchParent() {
    emit switchSignal();
}
