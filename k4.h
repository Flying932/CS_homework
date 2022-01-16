#ifndef K4_H
#define K4_H

#include <QWidget>

namespace Ui {
class K4;
}

class K4 : public QWidget
{
    Q_OBJECT

public:
    explicit K4(QWidget *parent = nullptr);
    ~K4();

private:
    Ui::K4 *ui;
};

#endif // K4_H
