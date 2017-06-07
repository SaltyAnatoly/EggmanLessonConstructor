#ifndef MESSAGEWIDGET_H
#define MESSAGEWIDGET_H

#include <QWidget>
#include <QString>

namespace Ui {
class MessageWidget;
}

class MessageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MessageWidget(QWidget *parent = 0, QString avatarPath = "");
    ~MessageWidget();
    QString getImagePath();
    QString getText();

private slots:
    void on_findButton_clicked();

signals:
    void newImagePath(QString);

private:
    Ui::MessageWidget *ui;
};

#endif // MESSAGEWIDGET_H
