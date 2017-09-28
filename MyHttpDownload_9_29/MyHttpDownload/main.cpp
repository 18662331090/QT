#include "myhttpdownload.h"
#include <QtWidgets/QApplication>
#include <atlstr.h>
#include <QDebug>
#include <QTime>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

// 	QTime time;
// 	time.start();
// 	CString m_strFilePath = "C:\\Program Files (x86)\\Microsoft Analysis Services\\";
// 	__int64 iFreeBytesToCaller = 0;
// 	TCHAR szDriver[4] = { PathGetDriveNumber(m_strFilePath) + _T('A'), _T(':'), _T('\\'), _T('\0') };
// 	if (GetDiskFreeSpaceEx(szDriver, (PULARGE_INTEGER)&iFreeBytesToCaller, NULL, NULL))
// 	{
// 		qDebug() << QString::number(iFreeBytesToCaller);
// 	}
// 	int count = time.elapsed();
// 	qDebug() << QString::number(count);

	MyHttpDownload w;
	w.show();
	return a.exec();
}
