/********************************************************************************
** Form generated from reading UI file 'HyQtShare.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HYQTSHARE_H
#define UI_HYQTSHARE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HyQtShareClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HyQtShareClass)
    {
        if (HyQtShareClass->objectName().isEmpty())
            HyQtShareClass->setObjectName(QStringLiteral("HyQtShareClass"));
        HyQtShareClass->resize(600, 400);
        menuBar = new QMenuBar(HyQtShareClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        HyQtShareClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HyQtShareClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HyQtShareClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(HyQtShareClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        HyQtShareClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(HyQtShareClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HyQtShareClass->setStatusBar(statusBar);

        retranslateUi(HyQtShareClass);

        QMetaObject::connectSlotsByName(HyQtShareClass);
    } // setupUi

    void retranslateUi(QMainWindow *HyQtShareClass)
    {
        HyQtShareClass->setWindowTitle(QApplication::translate("HyQtShareClass", "HyQtShare", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HyQtShareClass: public Ui_HyQtShareClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HYQTSHARE_H
