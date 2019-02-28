/*
###############################################################################
#                                                                             #
# The MIT License                                                             #
#                                                                             #
# Copyright (C) 2017 by Juergen Skrotzky (JorgenVikingGod@gmail.com)          #
#               >> https://github.com/Jorgen-VikingGod                        #
#                                                                             #
# Sources: https://github.com/Jorgen-VikingGod/Qt-Frameless-Window-DarkStyle  #
#                                                                             #
###############################################################################
*/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCoreApplication>
#include <QComboBox>
#include "DarkStyle.h"
#include <QDialog>
#include < QCompleter>
#include <QStringListModel>
#include <QWebEngineView>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent /*, Qt::FramelessWindowHint*/),
      ui(new Ui::MainWindow) {
  ui->setupUi(this);


  QPushButton *button = new QPushButton( QStringLiteral("自定义黑色风格"),menuBar());
  menuBar()->setCornerWidget(button);
  connect(button, &QPushButton::clicked, [this]() {
	      qApp->setStyle(new DarkStyle);
  });

  ui->comboBox_2->addItem(QStringLiteral("windowsvista"));
  ui->comboBox_2->addItem(QStringLiteral("windows"));
  ui->comboBox_2->addItem(QStringLiteral("fusion"));

  QStringList valueList;
  for (int i = 0; i < ui->tabWidget_2->count(); ++i)
  {
	  valueList << ui->tabWidget_2->tabText(i);
  }
  QCompleter *completer = new QCompleter(this);
  QStringListModel *listModel = new QStringListModel(valueList, this);
  completer->setCaseSensitivity(Qt::CaseInsensitive);
  completer->setModel(listModel);
  ui->lineEdit_2->setCompleter(completer);

  InitWebkit();
}

void MainWindow::on_current_stylechanged(const QString &index)
{
	qApp->setStyle(index);
}

void MainWindow::on_tab_show()
{
	ui->tabWidget_2->show();
}

void MainWindow::on_tab_hide()
{
	ui->tabWidget_2->hide();
}


void MainWindow::on_expan_window()
{
	QDialog dl;


	QVBoxLayout * lay = new QVBoxLayout(&dl);
	lay->setSizeConstraint(QLayout::SetFixedSize);

	QWidget *expan_widget = new QWidget;
	QVBoxLayout * expan_lay = new QVBoxLayout(expan_widget);

	expan_lay->addWidget(new QLineEdit);
	expan_lay->addWidget(new QLineEdit);
	expan_lay->addWidget(new QLineEdit);
	expan_lay->addWidget(new QLineEdit);

	QCheckBox *box = new QCheckBox(QStringLiteral("显示"));
	connect(box, &QCheckBox::stateChanged, [&](int b) {
		expan_widget->setVisible(0!=b);
	});

	lay->addWidget(box);
	lay->addWidget(expan_widget);
	dl.exec();

}

void MainWindow::InitWebkit()
{
	QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);


	QWebEngineView *view = new QWebEngineView();
	view->setUrl(QStringLiteral("https://www.baidu.com"));

	QHBoxLayout * hlayout = new QHBoxLayout(ui->tabWidget_2->widget(1));
	hlayout->addWidget(view);
	ui->tabWidget_2->widget(1)->setLayout(hlayout);

}

void MainWindow::on_jump_tab(QString index)
{
	for (int i = 0; i < ui->tabWidget_2->count(); ++i)
	{
		if (ui->tabWidget_2->tabText(i) == index)
		{
			ui->tabWidget_2->setCurrentIndex(i);
			return;
		}
	}
}

MainWindow::~MainWindow() { delete ui; }
