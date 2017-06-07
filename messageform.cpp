#include "messageform.h"
#include "ui_messageform.h"

MessageForm::MessageForm(QFile &file, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MessageForm)
{
    ui->setupUi(this);

    QTextStream input(&file);
    input.setCodec("UTF-8");

    QString fullText = input.readAll();
    separatedMessages = fullText.split('#');
    messagesCount = separatedMessages.length();

    int i = 0;
    foreach (QString message, separatedMessages)
    {
       QStringList messageDetails = message.split('|');

       foreach(QString messageDetail, messageDetails)
       {
           if (i%2 == 0)
               avatarString.push_back(messageDetail);
           else
               messageString.push_back(messageDetail);
           i++;
       }
    }

    file.close();

    connect(ui->scrollArea->verticalScrollBar(), &QScrollBar::rangeChanged, ui->scrollArea->verticalScrollBar(), [this](int min, int max){
        Q_UNUSED(min);
        ui->scrollArea->verticalScrollBar()->setValue(max);
    });
}

MessageForm::~MessageForm()
{
    delete ui;
}

void MessageForm::on_nextMessageButton_clicked()
{
    int i = separatedMessages.length() - messagesCount;

    Message *message = new Message(avatarString[i], messageString[i], this);
    ui->scrollAreaWidgetContents->layout()->addWidget(message);

    messagesCount--;
    if (messagesCount == 0)
    {
        ui->nextMessageButton->setText("Новых сообщений нет");
        ui->nextMessageButton->setEnabled(false);
    }
}
