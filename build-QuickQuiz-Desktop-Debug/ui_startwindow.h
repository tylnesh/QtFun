/********************************************************************************
** Form generated from reading UI file 'startwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTWINDOW_H
#define UI_STARTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QCheckBox *math;
    QCheckBox *english;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *StartWindow)
    {
        if (StartWindow->objectName().isEmpty())
            StartWindow->setObjectName(QStringLiteral("StartWindow"));
        StartWindow->resize(800, 600);
        centralWidget = new QWidget(StartWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 200, 261, 81));
        QFont font;
        font.setPointSize(18);
        pushButton->setFont(font);
        math = new QCheckBox(centralWidget);
        math->setObjectName(QStringLiteral("math"));
        math->setGeometry(QRect(70, 40, 98, 27));
        english = new QCheckBox(centralWidget);
        english->setObjectName(QStringLiteral("english"));
        english->setGeometry(QRect(70, 70, 98, 27));
        StartWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(StartWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 30));
        StartWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(StartWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        StartWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(StartWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        StartWindow->setStatusBar(statusBar);

        retranslateUi(StartWindow);

        QMetaObject::connectSlotsByName(StartWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StartWindow)
    {
        StartWindow->setWindowTitle(QApplication::translate("StartWindow", "StartWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("StartWindow", "START", Q_NULLPTR));
        math->setText(QApplication::translate("StartWindow", "Maths", Q_NULLPTR));
        english->setText(QApplication::translate("StartWindow", "English", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StartWindow: public Ui_StartWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTWINDOW_H
