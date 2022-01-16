#ifndef K3_H
#define K3_H

#include <QWidget>

namespace Ui {
class K3;
}

class K3 : public QWidget
{
    Q_OBJECT

public:
    explicit K3(QWidget *parent = nullptr);
    ~K3();

private:
    Ui::K3 *ui;
};

#endif // K3_H
