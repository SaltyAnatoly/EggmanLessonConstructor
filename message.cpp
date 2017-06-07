#include "message.h"
#include "ui_message.h"
#include <QProcess>
#include <QFuture>
#include <QtConcurrent/QtConcurrent>

Message::Message(QString avatarPath, QString message, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Message)
{
    ui->setupUi(this);

    QPixmap pixmap(avatarPath);
    if (pixmap.isNull())
        pixmap.load(":/Eggman.png");

    ui->labelAvatar->setPixmap(pixmap.scaled(80, 80, Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    ui->messageTextEdit->setText(message);
}

Message::~Message()
{
    delete ui;
}

void Message::on_readMessageButton_clicked()
{
    QFuture<void> future = QtConcurrent::run(this, &Message::readMessage, ui->messageTextEdit->toPlainText());
}

void Message::readMessage(QString message)
{
    QProcess pr;
    pr.start("festival");
    pr.waitForStarted();
    pr.write("(SayText '\"");
    pr.write(message.toStdString().c_str());
    pr.write("\" )");
    pr.closeWriteChannel();
    pr.waitForFinished(100000);
}
