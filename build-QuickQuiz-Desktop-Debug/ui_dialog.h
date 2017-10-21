/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLCDNumber *lcdNumber;
    QLabel *problem;
    QLineEdit *answer;
    QPushButton *OK;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(800, 600);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 10, 731, 351));
        label->setPixmap(QPixmap(QString::fromUtf8("img/bomb.png")));
        label->setScaledContents(true);
        lcdNumber = new QLCDNumber(Dialog);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(270, 120, 211, 111));
        problem = new QLabel(Dialog);
        problem->setObjectName(QStringLiteral("problem"));
        problem->setGeometry(QRect(200, 410, 141, 51));
        QFont font;
        font.setPointSize(15);
        problem->setFont(font);
        answer = new QLineEdit(Dialog);
        answer->setObjectName(QStringLiteral("answer"));
        answer->setGeometry(QRect(500, 420, 113, 41));
        answer->setFont(font);
        OK = new QPushButton(Dialog);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setGeometry(QRect(650, 420, 99, 32));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        label->setText(QString());
        problem->setText(QString());
        OK->setText(QApplication::translate("Dialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
