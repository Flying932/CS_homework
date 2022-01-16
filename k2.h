#ifndef K2_H
#define K2_H

#include <QWidget>

namespace Ui {
class K2;
}

class K2 : public QWidget
{
    Q_OBJECT

public:
    explicit K2(QWidget *parent = nullptr);
    ~K2();

private:
    Ui::K2 *ui;
};

#endif // K2_H
