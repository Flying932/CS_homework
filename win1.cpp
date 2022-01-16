#include "win1.h"
#include "ui_win1.h"

Win1::Win1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Win1)
{
    ui->setupUi(this);
    this->setWindowTitle("CS展示程序^_^~~");

    w1 = new Widget;
    w2 = new Dialog;

    //设置背景
    QPalette pal = this->palette();
    pal.setBrush(QPalette::Background,QBrush(QPixmap(":/Image/41.png").scaled(this->size())));
    this->setPalette(pal);
    //设置字体颜色
    QPalette pa;
    pa.setColor(QPalette::WindowText,Qt::red);
    ui->label->setPalette(pa);

    connect(ui->btn,&QPushButton::clicked,[=]()
    {
       this->close();
    });


    //触发按钮
    connect(ui->btn1,&QPushButton::clicked,[=]()
    {
       w1->show();
       w2->hide();
    });
    connect(ui->btn2,&QPushButton::clicked,[=]()
    {
       w2->show();
       w1->hide();
    });




}

Win1::~Win1()
{
    delete ui;
}
