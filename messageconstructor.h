#ifndef MESSAGECONSTRUCTOR_H
#define MESSAGECONSTRUCTOR_H

#include <QWidget>
#include "messagewidget.h"

#include <QVector>
#include <QString>
#include <QGridLayout>
#include <QScrollBar>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

namespace Ui {
class MessageConstructor;
}

class MessageConstructor : public QWidget
{
    Q_OBJECT

public:
    explicit MessageConstructor(QWidget *parent = 0);
    ~MessageConstructor();

private slots:
    void on_addNewMessageButton_clicked();

    void on_saveDialogButton_clicked();

    void newImagePath(QString path);

private:
    Ui::MessageConstructor *ui;
    QVector <MessageWidget*> mwVector;
    QString stdImagePath;
};

#endif // MESSAGECONSTRUCTOR_H
