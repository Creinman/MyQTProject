#include "widget.h"
#include <QApplication>
#include <QLabel>           //бибилотека для отображения текста

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

   // QLabel *label = new QLabel("Hello!!!");
    //label->resize(500, 500);                // задаем окну размер
    //label->show();                          // открываем отдельное окно с текстом

    return a.exec();
}
