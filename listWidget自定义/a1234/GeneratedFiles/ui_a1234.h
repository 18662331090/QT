/********************************************************************************
** Form generated from reading UI file 'a1234.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_A1234_H
#define UI_A1234_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_a1234Class
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *a1234Class)
    {
        if (a1234Class->objectName().isEmpty())
            a1234Class->setObjectName(QStringLiteral("a1234Class"));
        a1234Class->resize(619, 400);
        a1234Class->setStyleSheet(QStringLiteral("QMainWindow#a1234Class{background-image: url(:/a1234/Resources/bg.jpg)};"));
        centralWidget = new QWidget(a1234Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(listWidget, 1, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 8);
        gridLayout->setColumnStretch(2, 1);
        a1234Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(a1234Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 619, 19));
        a1234Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(a1234Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        a1234Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(a1234Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        a1234Class->setStatusBar(statusBar);

        retranslateUi(a1234Class);

        QMetaObject::connectSlotsByName(a1234Class);
    } // setupUi

    void retranslateUi(QMainWindow *a1234Class)
    {
        a1234Class->setWindowTitle(QApplication::translate("a1234Class", "a1234", 0));
        pushButton->setText(QApplication::translate("a1234Class", "\346\211\200\346\234\211\350\256\276\345\244\207", 0));
    } // retranslateUi

};

namespace Ui {
    class a1234Class: public Ui_a1234Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_A1234_H
