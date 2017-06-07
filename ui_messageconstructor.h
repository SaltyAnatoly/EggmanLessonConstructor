/********************************************************************************
** Form generated from reading UI file 'messageconstructor.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGECONSTRUCTOR_H
#define UI_MESSAGECONSTRUCTOR_H

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

class Ui_MessageConstructor
{
public:
    QGridLayout *gridLayout;
    QPushButton *saveDialogButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QPushButton *addNewMessageButton;

    void setupUi(QWidget *MessageConstructor)
    {
        if (MessageConstructor->objectName().isEmpty())
            MessageConstructor->setObjectName(QStringLiteral("MessageConstructor"));
        MessageConstructor->resize(460, 300);
        MessageConstructor->setMinimumSize(QSize(460, 300));
        gridLayout = new QGridLayout(MessageConstructor);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        saveDialogButton = new QPushButton(MessageConstructor);
        saveDialogButton->setObjectName(QStringLiteral("saveDialogButton"));

        gridLayout->addWidget(saveDialogButton, 4, 0, 1, 1);

        scrollArea = new QScrollArea(MessageConstructor);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 440, 218));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 1);

        addNewMessageButton = new QPushButton(MessageConstructor);
        addNewMessageButton->setObjectName(QStringLiteral("addNewMessageButton"));

        gridLayout->addWidget(addNewMessageButton, 0, 0, 1, 1);


        retranslateUi(MessageConstructor);

        QMetaObject::connectSlotsByName(MessageConstructor);
    } // setupUi

    void retranslateUi(QWidget *MessageConstructor)
    {
        MessageConstructor->setWindowTitle(QApplication::translate("MessageConstructor", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \320\264\320\270\320\260\320\273\320\276\320\263\320\260", 0));
        saveDialogButton->setText(QApplication::translate("MessageConstructor", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\264\320\270\320\260\320\273\320\276\320\263", 0));
        addNewMessageButton->setText(QApplication::translate("MessageConstructor", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\200\320\265\320\277\320\273\320\270\320\272\321\203", 0));
    } // retranslateUi

};

namespace Ui {
    class MessageConstructor: public Ui_MessageConstructor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGECONSTRUCTOR_H
