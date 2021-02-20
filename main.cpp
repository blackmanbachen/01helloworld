#include "mainwidget.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWidget w;
    w.show();
    cout << "test2" << endl;
    return a.exec();
}
