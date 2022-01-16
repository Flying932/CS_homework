#ifndef K1_H
#define K1_H

#include <QWidget>

namespace Ui {
class K1;
}

class K1 : public QWidget
{
    Q_OBJECT

public:
    explicit K1(QWidget *parent = nullptr);
    ~K1();

private:
    Ui::K1 *ui;
};

#endif // K1_H
