#ifndef WIN1_H
#define WIN1_H

#include <QMainWindow>
#include "widget.h"
#include "dialog.h"

namespace Ui {
class Win1;
}

class Win1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Win1(QWidget *parent = nullptr);
    ~Win1();
    Widget * w1;
    QDialog * w2;

private:
    Ui::Win1 *ui;
};

#endif // WIN1_H
