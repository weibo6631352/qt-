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

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  explicit MainWindow(QWidget *parent = Q_NULLPTR);
  ~MainWindow();
  void InitWebkit();
public slots :
	void on_current_stylechanged(const QString &index);
	void on_tab_show();
	void on_tab_hide();
	void on_expan_window();

	void on_jump_tab(QString index);
private:
  Ui::MainWindow *ui;
};

#endif  // MAINWINDOW_H
