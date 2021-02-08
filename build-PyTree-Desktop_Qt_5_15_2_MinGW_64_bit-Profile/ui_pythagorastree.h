/********************************************************************************
** Form generated from reading UI file 'pythagorastree.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PYTHAGORASTREE_H
#define UI_PYTHAGORASTREE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PythagorasTree
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *angle;
    QLabel *size_a;
    QLabel *size_b;
    QSpinBox *inputAngle;
    QDoubleSpinBox *inputSize_a;
    QDoubleSpinBox *inputSize_b;
    QLabel *Levels;
    QSpinBox *inputLevel;
    QPushButton *Draw;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *colorPickerButton;
    QPushButton *colorPickerButton_2;
    QPushButton *colorPickerButton_3;

    void setupUi(QWidget *PythagorasTree)
    {
        if (PythagorasTree->objectName().isEmpty())
            PythagorasTree->setObjectName(QString::fromUtf8("PythagorasTree"));
        PythagorasTree->resize(822, 620);
        formLayoutWidget = new QWidget(PythagorasTree);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 20, 160, 112));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        angle = new QLabel(formLayoutWidget);
        angle->setObjectName(QString::fromUtf8("angle"));

        formLayout->setWidget(0, QFormLayout::LabelRole, angle);

        size_a = new QLabel(formLayoutWidget);
        size_a->setObjectName(QString::fromUtf8("size_a"));

        formLayout->setWidget(1, QFormLayout::LabelRole, size_a);

        size_b = new QLabel(formLayoutWidget);
        size_b->setObjectName(QString::fromUtf8("size_b"));

        formLayout->setWidget(2, QFormLayout::LabelRole, size_b);

        inputAngle = new QSpinBox(formLayoutWidget);
        inputAngle->setObjectName(QString::fromUtf8("inputAngle"));
        inputAngle->setMaximum(360);
        inputAngle->setValue(45);

        formLayout->setWidget(0, QFormLayout::FieldRole, inputAngle);

        inputSize_a = new QDoubleSpinBox(formLayoutWidget);
        inputSize_a->setObjectName(QString::fromUtf8("inputSize_a"));
        inputSize_a->setMaximum(1.000000000000000);
        inputSize_a->setStepType(QAbstractSpinBox::AdaptiveDecimalStepType);
        inputSize_a->setValue(0.700000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, inputSize_a);

        inputSize_b = new QDoubleSpinBox(formLayoutWidget);
        inputSize_b->setObjectName(QString::fromUtf8("inputSize_b"));
        inputSize_b->setMaximum(1.000000000000000);
        inputSize_b->setStepType(QAbstractSpinBox::AdaptiveDecimalStepType);
        inputSize_b->setValue(0.700000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, inputSize_b);

        Levels = new QLabel(formLayoutWidget);
        Levels->setObjectName(QString::fromUtf8("Levels"));

        formLayout->setWidget(3, QFormLayout::LabelRole, Levels);

        inputLevel = new QSpinBox(formLayoutWidget);
        inputLevel->setObjectName(QString::fromUtf8("inputLevel"));
        inputLevel->setValue(40);

        formLayout->setWidget(3, QFormLayout::FieldRole, inputLevel);

        Draw = new QPushButton(PythagorasTree);
        Draw->setObjectName(QString::fromUtf8("Draw"));
        Draw->setGeometry(QRect(20, 140, 161, 21));
        verticalLayoutWidget = new QWidget(PythagorasTree);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(190, 20, 161, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        colorPickerButton = new QPushButton(verticalLayoutWidget);
        colorPickerButton->setObjectName(QString::fromUtf8("colorPickerButton"));

        verticalLayout->addWidget(colorPickerButton);

        colorPickerButton_2 = new QPushButton(verticalLayoutWidget);
        colorPickerButton_2->setObjectName(QString::fromUtf8("colorPickerButton_2"));

        verticalLayout->addWidget(colorPickerButton_2);

        colorPickerButton_3 = new QPushButton(verticalLayoutWidget);
        colorPickerButton_3->setObjectName(QString::fromUtf8("colorPickerButton_3"));

        verticalLayout->addWidget(colorPickerButton_3);


        retranslateUi(PythagorasTree);

        QMetaObject::connectSlotsByName(PythagorasTree);
    } // setupUi

    void retranslateUi(QWidget *PythagorasTree)
    {
        PythagorasTree->setWindowTitle(QCoreApplication::translate("PythagorasTree", "PythagorasTree", nullptr));
        angle->setText(QCoreApplication::translate("PythagorasTree", "Winkel: ", nullptr));
        size_a->setText(QCoreApplication::translate("PythagorasTree", "Size of A:", nullptr));
        size_b->setText(QCoreApplication::translate("PythagorasTree", "Size of B:", nullptr));
        Levels->setText(QCoreApplication::translate("PythagorasTree", "Iterations", nullptr));
        Draw->setText(QCoreApplication::translate("PythagorasTree", "Draw Tree", nullptr));
        colorPickerButton->setText(QCoreApplication::translate("PythagorasTree", "Color Stem", nullptr));
        colorPickerButton_2->setText(QCoreApplication::translate("PythagorasTree", "Color Branches", nullptr));
        colorPickerButton_3->setText(QCoreApplication::translate("PythagorasTree", "Color Leaves", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PythagorasTree: public Ui_PythagorasTree {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PYTHAGORASTREE_H
