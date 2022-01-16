#include "s1.h"
#include "ui_s1.h"

S1::S1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::S1)
{
    ui->setupUi(this);
    this->setWindowTitle("冯诺依曼结构体系");

    //关闭按钮
    connect(ui->c1,&QPushButton::clicked,[=]()
    {
       this->close();
    });

}

S1::~S1()
{
    delete ui;
}
