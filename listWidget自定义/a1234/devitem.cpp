#include "devitem.h"


devItem::devItem(QWidget *parent,Qt::WindowFlags f)
	: QWidget(parent,f)
{
	ui.setupUi(this);
}

devItem::~devItem()
{

}
void devItem::btnDevName_clicked()
{
	ui.isEn->click();
}