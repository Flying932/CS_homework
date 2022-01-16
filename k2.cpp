include "k2.h"
#include "ui_k2.h"

K2::K2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::K2)
{
    ui->setupUi(this);
    this->setWindowTitle("对软件的认识");
    //关闭按钮
    connect(ui->c1,&QPushButton::clicked,[=]()
    {
       this->close();
    });
    //编程语言设置背景

//    QPalette pal = this->palette();
//    pal.setBrush(QPalette::Background,QBrush(QPixmap(":/Image/36.jpg").scaled(this->size())));
//    setPalette(pal);



    //设置颜色
    QPalette pa;
    pa.setColor(QPalette::WindowText,Qt::red);
    ui->label->setPalette(pa);
}

K2::~K2()
{
    delete ui;
}
