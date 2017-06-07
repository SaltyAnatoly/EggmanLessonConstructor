/********************************************************************************
** Form generated from reading UI file 'messagewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEWIDGET_H
#define UI_MESSAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel;
    QLabel *imageLabel;
    QLineEdit *imagePathLineEdit;
    QPushButton *findButton;
    QTextEdit *messageTextEdit;

    void setupUi(QWidget *MessageWidget)
    {
        if (MessageWidget->objectName().isEmpty())
            MessageWidget->setObjectName(QStringLiteral("MessageWidget"));
        MessageWidget->resize(400, 140);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MessageWidget->sizePolicy().hasHeightForWidth());
        MessageWidget->setSizePolicy(sizePolicy);
        MessageWidget->setMinimumSize(QSize(400, 140));
        MessageWidget->setMaximumSize(QSize(400, 140));
        gridLayout = new QGridLayout(MessageWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textLabel = new QLabel(MessageWidget);
        textLabel->setObjectName(QStringLiteral("textLabel"));

        gridLayout->addWidget(textLabel, 1, 0, 1, 1);

        imageLabel = new QLabel(MessageWidget);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));

        gridLayout->addWidget(imageLabel, 0, 0, 1, 1);

        imagePathLineEdit = new QLineEdit(MessageWidget);
        imagePathLineEdit->setObjectName(QStringLiteral("imagePathLineEdit"));

        gridLayout->addWidget(imagePathLineEdit, 0, 1, 1, 1);

        findButton = new QPushButton(MessageWidget);
        findButton->setObjectName(QStringLiteral("findButton"));

        gridLayout->addWidget(findButton, 0, 2, 1, 1);

        messageTextEdit = new QTextEdit(MessageWidget);
        messageTextEdit->setObjectName(QStringLiteral("messageTextEdit"));

        gridLayout->addWidget(messageTextEdit, 1, 1, 1, 2);


        retranslateUi(MessageWidget);

        QMetaObject::connectSlotsByName(MessageWidget);
    } // setupUi

    void retranslateUi(QWidget *MessageWidget)
    {
        MessageWidget->setWindowTitle(QApplication::translate("MessageWidget", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\200\320\265\320\277\320\273\320\270\320\272\321\203", 0));
        textLabel->setText(QApplication::translate("MessageWidget", "\320\242\320\265\320\272\321\201\321\202:", 0));
        imageLabel->setText(QApplication::translate("MessageWidget", "\320\230\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265:", 0));
        findButton->setText(QApplication::translate("MessageWidget", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class MessageWidget: public Ui_MessageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEWIDGET_H
