#include <QApplication>
#include<my_window.h>
#include "factory.h"

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

    MyWindow *window = new MyWindow();


    window->show();


    return app.exec();
}
