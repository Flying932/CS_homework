#ifndef S1_H
#define S1_H

#include <QWidget>

namespace Ui {
class S1;
}

class S1 : public QWidget
{
    Q_OBJECT

public:
    explicit S1(QWidget *parent = nullptr);
    ~S1();

private:
    Ui::S1 *ui;
};

#endif // S1_H
