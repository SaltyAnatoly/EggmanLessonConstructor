/********************************************************************************
** Form generated from reading UI file 'message.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGE_H
#define UI_MESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Message
{
public:
    QGridLayout *gridLayout;
    QPushButton *readMessageButton;
    QLabel *labelAvatar;
    QTextEdit *messageTextEdit;

    void setupUi(QWidget *Message)
    {
        if (Message->objectName().isEmpty())
            Message->setObjectName(QStringLiteral("Message"));
        Message->resize(500, 100);
        Message->setMinimumSize(QSize(500, 100));
        Message->setMaximumSize(QSize(500, 100));
        gridLayout = new QGridLayout(Message);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        readMessageButton = new QPushButton(Message);
        readMessageButton->setObjectName(QStringLiteral("readMessageButton"));

        gridLayout->addWidget(readMessageButton, 0, 2, 1, 1);

        labelAvatar = new QLabel(Message);
        labelAvatar->setObjectName(QStringLiteral("labelAvatar"));

        gridLayout->addWidget(labelAvatar, 0, 0, 1, 1);

        messageTextEdit = new QTextEdit(Message);
        messageTextEdit->setObjectName(QStringLiteral("messageTextEdit"));
        messageTextEdit->setReadOnly(true);

        gridLayout->addWidget(messageTextEdit, 0, 1, 1, 1);


        retranslateUi(Message);

        QMetaObject::connectSlotsByName(Message);
    } // setupUi

    void retranslateUi(QWidget *Message)
    {
        Message->setWindowTitle(QApplication::translate("Message", "\320\241\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265", 0));
        readMessageButton->setText(QApplication::translate("Message", "\320\236\320\267\320\262\321\203\321\207\320\270\321\202\321\214", 0));
        labelAvatar->setText(QApplication::translate("Message", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Message: public Ui_Message {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGE_H
