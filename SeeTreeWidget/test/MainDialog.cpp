#include "MainDialog.h"
#include "ui_MainDialog.h"

MainDialog::MainDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainDialog)
{
    ui->setupUi(this);

    //假设第一个组为带有checkbox
    if( ui->treeWidget2->topLevelItemCount()) {
        QTreeWidgetItem *toplevelItem1 = ui->treeWidget2->topLevelItem(0);
        int childCount = toplevelItem1->childCount();
        for(int i=0; i<childCount; ++i) {
            QTreeWidgetItem *childItem = toplevelItem1->child(i);
            childItem->setCheckState(0, Qt::Unchecked);
            //sub
            if( childItem->childCount())
                childItem->child(0)->setCheckState(0, Qt::Unchecked);
        }
    }
}

MainDialog::~MainDialog()
{
    delete ui;
}
