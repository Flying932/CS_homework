//这是QT应用程序的主函数
#include "widget.h"
#include "win1.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Win1 w;
    w.show();

    return a.exec();
}
