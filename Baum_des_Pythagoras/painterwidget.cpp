#include "painterwidget.h"
#include "ui_painterwidget.h"
#include <QPainter>

PainterWidget::PainterWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PainterWidget)
{
    ui->setupUi(this);
}

void PainterWidget::paintEvent(QPaintEvent *){
    QPainter painter(this);

    painter.translate(width()/2, height());
    painter.rotate(180);

    draw(&painter, 0); //hand over the painter object
}

void PainterWidget::draw(QPainter *p, int level){

    //limited scope, not to modify
    static const float angle = 45;      //angle of the two childs
    static const float scale1 = 0.70f;  //size of left "A" child
    static const float scale2 = 0.70f;  //size of right "B" child

    float length = 0.2f * height();

    if(level >18) return;
        QColor color = Qt::blue;

    if(level >14)
        color = Qt::green;

    else if(level >3)
        color = QColor(128,64,0);

    p->setPen(QPen(QBrush(color), 40-level));   //Mucho iterations yes?

    p->drawLine(QPoint(0,0), QPoint(0,length));

    p->translate(0, length);
    p->scale(scale1, scale1);
    p->rotate(angle);

    draw(p, level+1);   //recursion it is

    p->rotate(-2*angle);
    p->scale(1/scale1, 1/scale1);
    p->scale(scale2, scale2);

    draw(p, level+1);   //recursion it is

    p->rotate(angle);
    p->scale(1/scale2, 1/scale2);
    p->translate(0, -length);
}

PainterWidget::~PainterWidget()
{
    delete ui;
}

