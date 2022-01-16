#include "k1.h"
#include "ui_k1.h"

K1::K1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::K1)
{
    ui->setupUi(this);
    this->setWindowTitle("对软硬件分界面的认识");

    connect(ui->c1,&QPushButton::clicked,[=]()
    {
       this->close();
    });
}

K1::~K1()
{
    delete ui;
}
