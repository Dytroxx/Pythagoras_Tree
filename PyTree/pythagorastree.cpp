#include "pythagorastree.h"
#include "ui_pythagorastree.h"
#include <QPainter>
#include <QSpinBox>
#include <QColorDialog>

PythagorasTree::PythagorasTree(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PythagorasTree)
    , m_angle(45)
    , m_scaleA(0.70f)  //Initializing order
    , m_scaleB(0.70f)
    , m_level(40)
    , m_colorFirstLevels(Qt::black)
    , m_colorSecondLevels(Qt::black)
    , m_colorThirdLevels(Qt::green)
{
    ui->setupUi(this);
}

void PythagorasTree::paintEvent(QPaintEvent *){
    QPainter painter(this);

    painter.translate(width()/2, height());
    painter.rotate(180);

    draw(&painter, 0);
}

void PythagorasTree::draw(QPainter *p, int level){

    float length = 0.2f * height();
    int what = 18;

    if(level > what) return;
        QColor color = m_colorFirstLevels;

    if(level > 14)
        color = m_colorThirdLevels;

    else if(level > 3)
        color = m_colorSecondLevels;

    p->setPen(QPen(QBrush(color), m_level - level));   //Mucho iterations yes?

    p->drawLine(QPoint(0,0), QPoint(0,length));

    p->translate(0, length);
    p->scale(m_scaleA, m_scaleB);
    p->rotate(m_angle);

    draw(p, level+1);   //recursion it is

    p->rotate(-2*m_angle);
    p->scale(1/m_scaleA, 1/m_scaleB);
    p->scale(m_scaleB, m_scaleB);

    draw(p, level+1);   //recursion it is

    p->rotate(m_angle);
    p->scale(1/m_scaleB, 1/m_scaleB);
    p->translate(0, -length);
}

void PythagorasTree::on_inputAngle_valueChanged(int value){
    m_angle = value;
    this->update();
}

void PythagorasTree::on_inputSize_a_valueChanged(double value){
    m_scaleA = value;
    this->update();
}

void PythagorasTree::on_inputSize_b_valueChanged(double value){
    m_scaleB = value;
    this->update();
}

void PythagorasTree::on_Draw_clicked()
{
  this->update();
}

void PythagorasTree::on_inputLevel_valueChanged(int value){
    m_level = value;
    this->update();
}

PythagorasTree::~PythagorasTree()
{
    delete ui;
}

void PythagorasTree::on_colorPickerButton_clicked()
{
    m_colorFirstLevels = QColorDialog::getColor();

    if(m_colorFirstLevels.isValid()){
        QString qss = QString("background-color: %1").arg(m_colorFirstLevels.name());
        ui->colorPickerButton->setStyleSheet(qss);
        this->update();
    }

}

void PythagorasTree::on_colorPickerButton_2_clicked()
{
    m_colorSecondLevels = QColorDialog::getColor();

    if(m_colorSecondLevels.isValid()){
        QString qss = QString("background-color: %1").arg(m_colorSecondLevels.name());
        ui->colorPickerButton_2->setStyleSheet(qss);
        this->update();
    }
}

void PythagorasTree::on_colorPickerButton_3_clicked()
{
    m_colorThirdLevels = QColorDialog::getColor();

    if(m_colorThirdLevels.isValid()){
        QString qss = QString("background-color: %1").arg(m_colorThirdLevels.name());
        ui->colorPickerButton_3->setStyleSheet(qss);
        this->update();
    }
}
