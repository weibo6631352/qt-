#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HyQtShare.h"

class HyQtShare : public QMainWindow
{
	Q_OBJECT

public:
	HyQtShare(QWidget *parent = Q_NULLPTR);

private:
	Ui::HyQtShareClass ui;
};
