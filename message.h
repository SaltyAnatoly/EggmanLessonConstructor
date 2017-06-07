#ifndef MESSAGE_H
#define MESSAGE_H

#include <QWidget>
#include <QString>
#include <QPixmap>

namespace Ui {
class Message;
}

class Message : public QWidget
{
    Q_OBJECT

public:
    explicit Message(QString avatarPath, QString message, QWidget *parent = 0);
    ~Message();

private slots:
    void on_readMessageButton_clicked();

private:
    Ui::Message *ui;
    void readMessage(QString message);
};

#endif // MESSAGE_H
