#ifndef MESSAGEFORM_H
#define MESSAGEFORM_H

#include <QWidget>
#include <QString>
#include <QStringList>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QLabel>
#include <QVector>
#include <QProcess>
#include <QThread>
#include <QScrollBar>

#include "message.h"

namespace Ui {
class MessageForm;
}

class MessageForm : public QWidget
{
    Q_OBJECT

public:
    explicit MessageForm(QFile &file, QWidget *parent = 0);
    ~MessageForm();

private slots:
    void on_nextMessageButton_clicked();

private:
    Ui::MessageForm *ui;

    QStringList separatedMessages;
    int messagesCount;
    QVector <QString> avatarString;
    QVector <QString> messageString;
};

#endif // MESSAGEFORM_H
