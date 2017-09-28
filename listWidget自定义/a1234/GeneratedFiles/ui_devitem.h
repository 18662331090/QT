/********************************************************************************
** Form generated from reading UI file 'devitem.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVITEM_H
#define UI_DEVITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_devItem
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *isHave;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnDevName;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *isEn;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *isUpload;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnWarningState;
    QFrame *line;

    void setupUi(QWidget *devItem)
    {
        if (devItem->objectName().isEmpty())
            devItem->setObjectName(QStringLiteral("devItem"));
        devItem->resize(261, 44);
        verticalLayout = new QVBoxLayout(devItem);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(devItem);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        isHave = new QCheckBox(widget);
        isHave->setObjectName(QStringLiteral("isHave"));
        isHave->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(isHave);

        horizontalSpacer = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnDevName = new QPushButton(widget);
        btnDevName->setObjectName(QStringLiteral("btnDevName"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnDevName->sizePolicy().hasHeightForWidth());
        btnDevName->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(btnDevName);

        horizontalSpacer_3 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        isEn = new QCheckBox(widget);
        isEn->setObjectName(QStringLiteral("isEn"));

        horizontalLayout->addWidget(isEn);

        horizontalSpacer_4 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        isUpload = new QCheckBox(widget);
        isUpload->setObjectName(QStringLiteral("isUpload"));

        horizontalLayout->addWidget(isUpload);

        horizontalSpacer_5 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        btnWarningState = new QPushButton(widget);
        btnWarningState->setObjectName(QStringLiteral("btnWarningState"));

        horizontalLayout->addWidget(btnWarningState);


        verticalLayout->addWidget(widget);

        line = new QFrame(devItem);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);


        retranslateUi(devItem);

        QMetaObject::connectSlotsByName(devItem);
    } // setupUi

    void retranslateUi(QWidget *devItem)
    {
        devItem->setWindowTitle(QApplication::translate("devItem", "devItem", 0));
        isHave->setText(QString());
        btnDevName->setText(QApplication::translate("devItem", "\345\220\215\345\255\227", 0));
        isEn->setText(QString());
        isUpload->setText(QString());
        btnWarningState->setText(QApplication::translate("devItem", "\346\234\252\347\237\245", 0));
    } // retranslateUi

};

namespace Ui {
    class devItem: public Ui_devItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVITEM_H
