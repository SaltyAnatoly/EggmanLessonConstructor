#include "messagewidget.h"
#include "ui_messagewidget.h"
#include <QFileDialog>
#include <QString>

MessageWidget::MessageWidget(QWidget *parent, QString avatarPath) :
    QWidget(parent),
    ui(new Ui::MessageWidget)
{
    ui->setupUi(this);
    ui->imagePathLineEdit->setText(avatarPath);
}

MessageWidget::~MessageWidget()
{
    delete ui;
}

QString MessageWidget::getImagePath()
{
    return ui->imagePathLineEdit->text();
}

QString MessageWidget::getText()
{
    return ui->messageTextEdit->toPlainText();
}

void MessageWidget::on_findButton_clicked()
{
    QString path = QFileDialog::getOpenFileName(this, "Открыть изображение", "/home/","Изображение (*.png *.jpg)");
    if (!path.isEmpty())
    {
        ui->imagePathLineEdit->setText(path);
        emit newImagePath(path);
    }
}
