#include "widget.h"
#include <QApplication>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}

void func1() {
    //公司电脑
}