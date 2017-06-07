/********************************************************************************
** Form generated from reading UI file 'messageform.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEFORM_H
#define UI_MESSAGEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageForm
{
public:
    QGridLayout *gridLayout;
    QPushButton *nextMessageButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;

    void setupUi(QWidget *MessageForm)
    {
        if (MessageForm->objectName().isEmpty())
            MessageForm->setObjectName(QStringLiteral("MessageForm"));
        MessageForm->resize(570, 300);
        MessageForm->setMinimumSize(QSize(570, 300));
        gridLayout = new QGridLayout(MessageForm);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        nextMessageButton = new QPushButton(MessageForm);
        nextMessageButton->setObjectName(QStringLiteral("nextMessageButton"));

        gridLayout->addWidget(nextMessageButton, 1, 0, 1, 1);

        scrollArea = new QScrollArea(MessageForm);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 550, 249));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(MessageForm);

        QMetaObject::connectSlotsByName(MessageForm);
    } // setupUi

    void retranslateUi(QWidget *MessageForm)
    {
        MessageForm->setWindowTitle(QApplication::translate("MessageForm", "\320\235\320\276\320\262\321\213\320\265 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\321\217", 0));
        nextMessageButton->setText(QApplication::translate("MessageForm", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\265\320\265 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265", 0));
    } // retranslateUi

};

namespace Ui {
    class MessageForm: public Ui_MessageForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEFORM_H
