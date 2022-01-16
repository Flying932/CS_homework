#ifndef PLAN_H
#define PLAN_H

#include <QWidget>

namespace Ui {
class Plan;
}

class Plan : public QWidget
{
    Q_OBJECT

public:
    explicit Plan(QWidget *parent = nullptr);
    ~Plan();

private:
    Ui::Plan *ui;
};

#endif // PLAN_H
