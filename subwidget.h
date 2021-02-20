#ifndef SUBWIDGET_H
#define SUBWIDGET_H

#include <QWidget>
#include <QPushButton>

class SubWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SubWidget(QWidget *parent = nullptr);
    void switchParent();
signals:
    void switchSignal();

public slots:

private:
    QPushButton b;
};

#endif // SUBWIDGET_H
