#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDialog>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    //QDialog dialog(this);
    //dialog.show();
    //dialog只会一闪而过

    //QDialog *dialog0 = new QDialog(this);
    //dialog0->show();
    //dialog会出现

    //QDialog dialog(this);
    //dialog.exec();
    //模态modal对话框 在没有关闭之前，不能再与同一个应用程序的其他窗口进行交互

    QDialog *dialog = new QDialog(this);
    dialog->setModal(true);
    dialog->show();
}

MyWidget::~MyWidget()
{
    delete ui;
}
