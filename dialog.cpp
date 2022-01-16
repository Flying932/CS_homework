//这是计科大体介绍界面的源文件
#include "dialog.h"
#include "ui_dialog.h"
#include "widget.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //创建冯诺依曼结构
    s = new S1;
    connect(ui->btn1,&QPushButton::clicked,[=]()
    {
        this->close();

    });
    //创建4个按钮对应的4个方面
    b1 = new K1;
    b2 = new K2;
    b3 = new K3;
    b4 = new K4;
    //设置连接：
    //软件按钮对应连接
    connect(ui->btn3,&QPushButton::clicked,[=]()
    {
       b2->show();
       b1->hide();
       b3->hide();
       b4->hide();
    });
    //硬件连接
    connect(ui->btn5,&QPushButton::clicked,[=]()
    {
       b3->show();
       b2->hide();
       b1->hide();
       b4->hide();
    });
    //软硬件-操作系统
    connect(ui->btn6,&QPushButton::clicked,[=]()
    {
       b1->show();
       b2->hide();
       b3->hide();
       b4->hide();
    });
    //数学基础
    connect(ui->btn4,&QPushButton::clicked,[=]()
    {
       b4->show();
       b2->hide();
       b3->hide();
       b1->hide();
    });



    //设置背景
    QPalette pal = this->palette();
    pal.setBrush(QPalette::Background,QBrush(QPixmap(":/Image/29.jpg").scaled(this->size())));
    setPalette(pal);

    //设置颜色
    QPalette pa;
    pa.setColor(QPalette::WindowText,Qt::red);
    ui->label1->setPalette(pa);
    ui->label2->setPalette(pa);

    //跳转冯诺依曼结构
    connect(ui->btn2,&QPushButton::clicked,[=]()
    {
        s->show();
    });

    this->setWindowTitle("CS整体认识程序~");
}

Dialog::~Dialog()
{
    delete ui;
}
