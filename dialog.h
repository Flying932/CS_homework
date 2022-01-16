//这是计科大体介绍的头文件
#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "s1.h"
#include "k1.h"
#include "k2.h"
#include "k3.h"
#include "k4.h"


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    Ui::Dialog * ui;
    //冯诺依曼结构
    S1 * s;

    //4个方面
    K1 * b1;
    K2 * b2;
    K3 * b3;
    K4 * b4;


};

#endif // DIALOG_H
