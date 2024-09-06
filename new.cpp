#include "new.h"
#include "functions.h"
#include "ui_new.h"
#include "users.h"
#include <QDebug>

New::New(const User &user, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::New)
    , user(user)
{
    ui->setupUi(this);
    events_show(user.getName());
    ui->hellous->setText("User Name: " + user.getName());
}

New::~New()
{
    delete ui;
}



void New::on_addbtn_clicked()
{
    Functions event;
    event.InsertUsEv(ui->datelabel->text(), ui->lineEdit->text(), user.getName());
    ui->eventlabel->setText(ui->lineEdit->text());
    //events_show(user.getName());
}


void New::on_calendarWidget_clicked(const QDate &date)
{
     ui->datelabel->setText(ui->calendarWidget->selectedDate().toString());

}

void New::events_show(QString name){
    Functions ev;
    QVector<QPair<QString, QString>> events = ev.ShowUsEvent(name);
    for (const auto& event : events) {
        QString itemText = "Date: " + event.first + ", Bio: " + event.second;
        ui->listWidget->addItem(itemText);
    }
    // QString events = ev.ShowEv();
    // QString evBio = ev.ShowEvBio();
    // qDebug()<<events;
    // ui->listWidget->addItem(events);
    // ui->listWidget->addItem(evBio);
    // if (events.empty()) {
    //     qDebug() << "No events found for user:" << name;
    // }
}


