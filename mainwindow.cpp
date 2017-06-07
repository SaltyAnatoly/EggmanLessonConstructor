#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_newDialogButton_clicked()
{
    MessageConstructor *messageConstructor = new MessageConstructor();
    messageConstructor->show();
    messageConstructor->setAttribute(Qt::WA_DeleteOnClose);
}

void MainWindow::on_loadDialogButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Загрузить диалог", ".dialog", "Диалог (*.dialog)");

    if (fileName.isEmpty())
        return;

    QFile file(fileName);

    if (!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(this, "Невозможно открыть файл", file.errorString());
        return;
    }

    MessageForm *messageForm = new MessageForm(file);
    messageForm->show();
}
