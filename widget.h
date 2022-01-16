#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "dialog.h"
#include "plan.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Dialog;

class Widget : public QWidget
{
    Q_OBJECT    
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    Dialog dia;
    Ui::Widget *ui;
    Plan * pl;


protected:
    void paintEvent(QPaintEvent * event);
};

#endif // WIDGET_H
