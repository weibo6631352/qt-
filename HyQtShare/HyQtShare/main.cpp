#include "HyQtShare.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	HyQtShare w;
	w.show();
	return a.exec();
}
