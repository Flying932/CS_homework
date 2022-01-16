#include "plan.h"
#include "ui_plan.h"

Plan::Plan(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Plan)
{
    ui->setupUi(this);
    connect(ui->c1,&QPushButton::clicked,[=]()
    {
       this->close();
    });
}

Plan::~Plan()
{
    delete ui;
}
