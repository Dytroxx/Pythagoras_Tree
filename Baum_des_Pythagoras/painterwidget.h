#ifndef PAINTERWIDGET_H
#define PAINTERWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class PainterWidget; }
QT_END_NAMESPACE

class PainterWidget : public QWidget
{
    Q_OBJECT

public:
    PainterWidget(QWidget *parent = nullptr);
    ~PainterWidget();

    // Set methods if not done == out-of-line
    virtual void paintEvent(QPaintEvent *event);
    virtual void draw(QPainter *p, int level);

private:
    Ui::PainterWidget *ui;
};
#endif // PAINTERWIDGET_H
