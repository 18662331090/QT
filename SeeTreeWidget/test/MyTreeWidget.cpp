#include "MyTreeWidget.h"

#include <QMouseEvent>
#include <QHeaderView>

MyTreeWidget::MyTreeWidget(QWidget *parent) :
    QTreeWidget(parent)
{
    _rightClick = false;
    connect( this, SIGNAL(itemClicked(QTreeWidgetItem*,int)),
            this, SLOT(handleItemClicked(QTreeWidgetItem*,int)));
}

void MyTreeWidget::mousePressEvent(QMouseEvent* event)
{
    _rightClick = event->button()& Qt::RightButton;

    //! 点击checkbox方框时打钩或取消
    QModelIndex indexClicked = indexAt(event->pos());
    if(indexClicked.isValid() && !_rightClick)
    {
        const int reviseDist = 3;  //选择框边缘到item边缘存在着间隙
        QRect vrect = visualRect(indexClicked);
        int itemIndentation = vrect.x() - visualRect(rootIndex()).x()+ reviseDist;
        QRect rect = QRect(header()->sectionViewportPosition(0) + itemIndentation
          , vrect.y(), style()->pixelMetric(QStyle::PM_IndicatorWidth), vrect.height());

        if(rect.contains(event->pos()))
        {
            QTreeWidgetItem* item = this->itemFromIndex (indexClicked);
            bool hasCheckbox = item->data(0, Qt::CheckStateRole).isValid();  //liangzm
            if( item && hasCheckbox)
                item->setCheckState (0,item->checkState (0) == Qt::Unchecked ? Qt::Checked : Qt::Unchecked);
            qDebug("check contains");
        }
    }
    QTreeWidget::mousePressEvent(event);
}

void MyTreeWidget::handleItemClicked( QTreeWidgetItem* item, int /*column*/)
{
    //! 有checkbox时，点击行即可选中
    bool hasCheckbox = item->data(0, Qt::CheckStateRole).isValid();
    if( hasCheckbox && !_rightClick) {
        Qt::CheckState oldCheckstatus = item->checkState(0);
        item->setCheckState( 0, (oldCheckstatus == Qt::Unchecked)? Qt::Checked: Qt::Unchecked);
    }
}
