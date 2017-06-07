#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "messageconstructor.h"
#include "messageform.h"

#include <QString>
#include <QStringList>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_newDialogButton_clicked();

    void on_loadDialogButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
