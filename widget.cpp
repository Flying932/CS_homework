#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QUrl>
#include <QDesktopServices>
#include <QPainter>
#include <QPalette>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

    //自我规划
    pl = new Plan;
    ui->setupUi(this);
    //java超链接
    connect(ui->btn1,&QPushButton::clicked,[=]()
    {
        QDesktopServices::openUrl(QUrl(QString("https://www.bilibili.com/video/BV18J411W7cE?from=search&seid=5305352957961021857&spm_id_from=333.337.0.0")));
    });
    //c++超链接
    connect(ui->btn2,&QPushButton::clicked,[=]()
    {
       QDesktopServices::openUrl(QUrl(QString("https://www.bilibili.com/video/BV1et411b73Z?from=search&seid=1074997036204917344&spm_id_from=333.337.0.0")));
    });
    //c语言链接
    connect(ui->btn3,&QPushButton::clicked,[=]()
    {
        QDesktopServices::openUrl(QUrl(QString("https://www.bilibili.com/video/BV1Ls411w7rx?p=1")));
    });
    //python链接
    connect(ui->btn8,&QPushButton::clicked,[=]()
    {
        QDesktopServices::openUrl(QUrl(QString("https://www.bilibili.com/video/BV1ex411x7Em?from=search&seid=15500413116686482444&spm_id_from=333.337.0.0")));
    });

    //高数超链接
    connect(ui->btn4,&QPushButton::clicked,[=]()
    {
        QDesktopServices::openUrl(QUrl(QString("https://www.icourse163.org/learn/XJTU-1001744016?tid=1460904452#/learn/announce")));
    });
    //线代超链接
    connect(ui->btn5,&QPushButton::clicked,[=]()
    {
        QDesktopServices::openUrl(QUrl(QString("https://www.bilibili.com/video/BV1dW411P7YM?from=search&seid=11755543058991582554&spm_id_from=333.337.0.0")));
    });
    //离散数学
    connect(ui->btn6,&QPushButton::clicked,[=]()
    {
        QDesktopServices::openUrl(QUrl(QString("https://space.bilibili.com/484021447/channel/seriesdetail?sid=372883")));
    });
    //概率论

    connect(ui->btn10,&QPushButton::clicked,[=]()
    {
        QDesktopServices::openUrl(QUrl(QString("https://www.bilibili.com/video/BV1ot411y7mU?from=search&seid=17868411918747415925&spm_id_from=333.337.0.0")));
    });

    //数据结构
    connect(ui->btn9,&QPushButton::clicked,[=]()
    {
        QDesktopServices::openUrl(QUrl(QString("https://www.bilibili.com/video/BV1JW411i731?from=search&seid=6128351993335599731&spm_id_from=333.337.0.0")));
    });

    //计算机组成原理
    connect(ui->btn11,&QPushButton::clicked,[=]()
    {
        QDesktopServices::openUrl(QUrl(QString("https://www.bilibili.com/video/BV11741137YK?from=search&seid=11178636975233817249&spm_id_from=333.337.0.0")));
    });
    //操作系统
    connect(ui->btn13,&QPushButton::clicked,[=]()
    {
        QDesktopServices::openUrl(QUrl(QString("https://www.bilibili.com/video/BV1YE411D7nH?from=search&seid=6247818254703204558&spm_id_from=333.337.0.0")));
    });
    //计算机网络
    connect(ui->btn12,&QPushButton::clicked,[=]()
    {
        QDesktopServices::openUrl(QUrl(QString("https://www.bilibili.com/video/BV19E411D78Q?from=search&seid=1139629410799704103&spm_id_from=333.337.0.0")));
    });
    //编译原理
    connect(ui->btn17,&QPushButton::clicked,[=]()
    {
        QDesktopServices::openUrl(QUrl(QString("https://www.bilibili.com/video/BV12741147J3?from=search&seid=16680439496053780742&spm_id_from=333.337.0.0")));
    });
    //算法分析以及设计
    connect(ui->btn16,&QPushButton::clicked,[=]()
    {
        QDesktopServices::openUrl(QUrl(QString("https://www.bilibili.com/video/BV1TC4y1W7wC?from=search&seid=6383744699297784995&spm_id_from=333.337.0.0")));
    });
    //汇编语言
    connect(ui->btn15,&QPushButton::clicked,[=]()
    {
        QDesktopServices::openUrl(QUrl(QString("https://www.bilibili.com/video/BV15A411N7gr?from=search&seid=13858770050977716194&spm_id_from=333.337.0.0")));
    });
    //数据库
    connect(ui->btn14,&QPushButton::clicked,[=]()
    {
        QDesktopServices::openUrl(QUrl(QString("https://www.bilibili.com/video/BV1pp4y187qJ?from=search&seid=4704327160599103961&spm_id_from=333.337.0.0")));
    });

    QPalette pal = this->palette();
    pal.setBrush(QPalette::Background,QBrush(QPixmap(":/Image/9.png").scaled(this->size())));
    setPalette(pal);

//    setStyleSheet("border-image:url(:/Image/6.jpg)");
//    //设置颜色
//    QPalette pa;
//    pa.setColor(QPalette::WindowText,Qt::blue);
//    ui->label1->setPalette(pa);
    //关闭按钮
    connect(ui->c1,&QPushButton::clicked,[=]()
    {
       this->close();
    });

    //自我规划
    connect(ui->self,&QPushButton::clicked,[=]()
    {
       pl->show();
    });


    






}

Widget::~Widget()
{
    delete ui;
}

//绘图函数
void Widget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    //数学基础课
    painter.drawLine(QPoint(141,620),QPoint(190,520));
    painter.drawLine(QPoint(141,620),QPoint(190,591));
    painter.drawLine(QPoint(141,620),QPoint(190,660));
    painter.drawLine(QPoint(141,620),QPoint(190,725));

    painter.drawLine(QPoint(377,320),QPoint(460,320));
    painter.drawLine(QPoint(464,323),QPoint(460,320));
    painter.drawLine(QPoint(464,317),QPoint(460,320));
    //    painter.drawLine(QPoint(460,320),QPoint(369,313));
    //    painter.drawLine(QPoint(460,320),QPoint(369,327));

    painter.drawLine(QPoint(331,660),QPoint(530,351));

    painter.drawLine(QPoint(900,440),QPoint(530,351));

    painter.drawLine(QPoint(900,520),QPoint(530,351));

    painter.drawLine(QPoint(850,351),QPoint(850,380));
    painter.drawLine(QPoint(850,380),QPoint(1010,380));
    painter.drawLine(QPoint(1010,380),QPoint(1010,351));

    painter.drawLine(QPoint(530,351),QPoint(900,670));

    painter.drawLine(QPoint(690,351),QPoint(690,380));
    painter.drawLine(QPoint(690,380),QPoint(844,380));
    painter.drawLine(QPoint(844,380),QPoint(844,351));

    //上面的线
    painter.drawLine(QPoint(755,251),QPoint(530,290));
    painter.drawLine(QPoint(755,251),QPoint(690,290));
    painter.drawLine(QPoint(755,251),QPoint(850,290));
    painter.drawLine(QPoint(755,251),QPoint(1010,290));

   //测试函数
    qDebug() << "函数调用test" << endl;
}


