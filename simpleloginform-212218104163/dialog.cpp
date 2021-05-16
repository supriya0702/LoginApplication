#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_CONFIRM_clicked()
{
    QString usmail=ui->emaillineEdit->text();
        QString uspass=ui->passwordlineedit->text();
        QString uscpass=ui->confirmpasswordlineEdit->text();
        qDebug()<<"Email:"<<usmail;
        qDebug()<<"Password:"<<uspass;
        qDebug()<<"Confirm Password:"<<uscpass;
        if(!usmail.isEmpty() && !uspass.isEmpty() && !uscpass.isEmpty())
        {

        }
        else
        {
            qDebug()<<"One field is empty!!";
        }
}

void Dialog::on_EXIT_clicked()
{
    QApplication::quit();
}

