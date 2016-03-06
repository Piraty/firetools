/*
 * Copyright (C) 2015 netblue30 (netblue30@yahoo.com)
 *
 * This file is part of firetools project
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

class QLineEdit;
class QTableWidget;
class TopWidget;

class MainWindow : public QMainWindow {
Q_OBJECT

public:
	MainWindow(pid_t pid, QWidget *parent = 0);

private slots:
	void handleUp();
	void handleHome();
	void handleRoot();
	void handleRefresh();
	void cellClicked(int row, int column);

private:
	void print_files(const char *path);
	QString build_path();
	QString build_line();
	
private:
	pid_t pid_;
	TopWidget *top_;
	QLineEdit *line_;
	QTableWidget *table_;
	QStringList path_;
};
#endif
