#include "mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    b1.setText("点我点我");
    b1.setParent(this);
    b1.move(5, 5);

    b2 = new QPushButton(this);
    b2->setText("按钮2");
    b2->move(100, 100);

    this->setWindowTitle("父窗口");

    connect(&b1, &QPushButton::clicked, this, &QWidget::close);

    connect(b2, &QPushButton::released, this, &MainWidget::customSlot);

    b3.setText("切换到子窗口");
    b3.move(100, 200);
    b3.setParent(this);
    connect(&b3, &QPushButton::clicked, this, &MainWidget::switchWindow);

    connect(&sw, &SubWidget::switchSignal, this, &MainWidget::switchWindowParent);
    //sw.show();
    //sw.setWindowTitle("子窗口");

    this->resize(500, 400);
}

void MainWidget::switchWindowParent()
{
    this->show();
    //sw.hide();

    b2->setText("修改按钮2");
}

void MainWidget::switchWindow()
{
    //this->hide();
    sw.show();

    //b2->setText("修改按钮2");
}

void MainWidget::customSlot()
{

    b1.setText("动态改变");


}

MainWidget::~MainWidget()
{

}
