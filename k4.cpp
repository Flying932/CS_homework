#include "k4.h"
#include "ui_k4.h"

K4::K4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::K4)
{
    ui->setupUi(this);
    this->setWindowTitle("对数学基础的认识");
    QPalette pal = this->palette();
    pal.setBrush(QPalette::Background,QBrush(QPixmap(":/Image/40.jpg").scaled(this->size())));
    this->setPalette(pal);

    //关闭按钮
    connect(ui->c1,&QPushButton::clicked,[=]()
    {
       this->close();
    });

    //设置颜色
    QPalette pa;
    pa.setColor(QPalette::WindowText,Qt::red);
    ui->label->setPalette(pa);
}

K4::~K4()
{
    delete ui;
}
