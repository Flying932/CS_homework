#include "k3.h"
#include "ui_k3.h"

K3::K3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::K3)
{
    ui->setupUi(this);
    this->setWindowTitle("对硬件的认识");

    //关闭按钮
    connect(ui->c1,&QPushButton::clicked,[=]()
    {
       this->close();
    });


}

K3::~K3()
{
    delete ui;
}
