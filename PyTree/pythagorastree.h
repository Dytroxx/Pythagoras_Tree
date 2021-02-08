#ifndef PYTHAGORASTREE_H
#define PYTHAGORASTREE_H

#include <QWidget>
#include <QLabel>

QT_BEGIN_NAMESPACE
class QSpinBox;
namespace Ui { class PythagorasTree; }
QT_END_NAMESPACE

class PythagorasTree : public QWidget
{
    Q_OBJECT

public:
    PythagorasTree(QWidget *parent = nullptr);
    ~PythagorasTree();

    virtual void paintEvent(QPaintEvent *event);
    virtual void draw(QPainter *p, int level);

private slots:
    void on_inputAngle_valueChanged(int value);
    void on_inputSize_a_valueChanged(double value);
    void on_inputSize_b_valueChanged(double value);
    void on_Draw_clicked();
    void on_inputLevel_valueChanged(int value);

    void on_colorPickerButton_clicked();

    void on_colorPickerButton_2_clicked();

    void on_colorPickerButton_3_clicked();

private:
    Ui::PythagorasTree *ui;

    //Reference to the design object
    QSpinBox *ui_inputAngle;
    QSpinBox *ui_inputSize_a;
    QSpinBox *ui_inputSize_b;

    int m_angle;
    double m_scaleA;
    double m_scaleB;
    int m_level;
    QColor m_colorFirstLevels;
    QColor m_colorSecondLevels;
    QColor m_colorThirdLevels;

};


#endif
