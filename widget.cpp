#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(showText()));
    QObject::connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->lcdNumber, SLOT(display(int)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::showText()
{
    ui->pushButton->setText("Hello");
}
