#ifndef MYTREEWIDGET_H
#define MYTREEWIDGET_H

#include <QTreeWidget>

class MyTreeWidget : public QTreeWidget
{
    Q_OBJECT
public:
    explicit MyTreeWidget(QWidget *parent = 0);
    void mousePressEvent(QMouseEvent* ev);

signals:

public slots:
    void handleItemClicked( QTreeWidgetItem* item, int column);

private:
    bool _rightClick;
};

#endif // MYTREEWIDGET_H
