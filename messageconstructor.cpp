#include "messageconstructor.h"
#include "ui_messageconstructor.h"

MessageConstructor::MessageConstructor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MessageConstructor)
{
    ui->setupUi(this);

    stdImagePath = "";

    connect(ui->scrollArea->verticalScrollBar(), &QScrollBar::rangeChanged, ui->scrollArea->verticalScrollBar(), [this](int min, int max){
        Q_UNUSED(min);
        ui->scrollArea->verticalScrollBar()->setValue(max);
    });
}

MessageConstructor::~MessageConstructor()
{
    delete ui;
}

void MessageConstructor::on_addNewMessageButton_clicked()
{
    MessageWidget *messageWidget = new MessageWidget(this, stdImagePath);
    QPushButton *deleteMessageButton = new QPushButton("Удалить сообщение", this);

    mwVector.push_back(messageWidget);

    ui->scrollAreaWidgetContents->layout()->addWidget(messageWidget);
    ui->scrollAreaWidgetContents->layout()->addWidget(deleteMessageButton);

    connect(deleteMessageButton, &QPushButton::clicked, this, [this, messageWidget, deleteMessageButton](){
        int i = mwVector.indexOf(messageWidget);
        mwVector.remove(i);
        delete messageWidget;
        delete deleteMessageButton;
    });

    connect(messageWidget, &MessageWidget::newImagePath, this, &MessageConstructor::newImagePath);
}

void MessageConstructor::on_saveDialogButton_clicked()
{
    for (int i = 0; i < mwVector.length(); i++)
    {
        if (mwVector[i]->getText().isEmpty())
        {
            QMessageBox::information(this, "Ошибка", "Заполните все поля сообщений");
            return;
        }
    }

    QString fileName = QFileDialog::getSaveFileName(this, "Сохранить диалог", "Новый диалог.dialog", "Диалог (*.dialog)");

    if (fileName.isEmpty())
        return;

    QFile file(fileName);

    if (!file.open(QIODevice::WriteOnly))
    {
        QMessageBox::information(this, "Невозможно открыть файл", file.errorString());
        return;
    }

    QTextStream out(&file);
    out.setCodec("UTF-8");

    for (int i = 0; i < mwVector.length(); i++)
    {
        out << mwVector[i]->getImagePath() << '|' << mwVector[i]->getText();
        if (i != mwVector.length() - 1)
            out << "#";
    }

    file.flush();
    file.close();
}

void MessageConstructor::newImagePath(QString path)
{
    if (!path.isEmpty())
        stdImagePath = path;
}
