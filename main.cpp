#include "mainwidget.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWidget w;
    w.show();

    cout << "test" << endl;

    cout << "test1" << endl;
    cout << "test2" << endl;
    cout << "test3" << endl;
    cout << "test4" << endl;

    return a.exec();
}
