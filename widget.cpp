#include "widget.h"
#include "ui_widget.h"
#include "dialog.h"
#include <QMessageBox>
#include <QDebug>

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

void Widget::on_pushButton_pressed()
{
    ui->pushButton->setText("Pressed!");
}

void Widget::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "ЗАкрытие Окна", "Закрыть окно?", QMessageBox:: Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QApplication::quit();
    } else {
        qDebug() << "Button NO was Pushed";
    }
    }

void Widget::on_pushButton_4_clicked()
{
    Dialog window;
    window.setModal(true);
    window.exec();
}
