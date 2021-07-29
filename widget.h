#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "dialog.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    Dialog *window;

public slots:
    void showText();
private slots:
    void on_pushButton_pressed();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
};

#endif // WIDGET_H
