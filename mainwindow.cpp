#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "functions.h"
#include "users.h"
#include <QPixmap>
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/le-mans-24-hours-of-le-mans-20-2.jpg");
    int h = ui->label->height();
    int w = ui->label->width();
    ui->label->setPixmap(pix.scaled(w, h));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Functions f;
    bool check = f.CheckUs(ui->textlogin->toPlainText(), ui->named->toPlainText(), ui->textpass->toPlainText());
    QString name = ui->named->toPlainText();  // Получаем имя из текстового поля
    User user(name);

    if (check){
        newopen = new New(user);
        newopen->show();

    }else {
        QMessageBox::critical(nullptr, "Error", "This is an error message.");
    }
}


void MainWindow::on_actionRegistraion_triggered()
{
    w = new Dialog(this);
    w->show();
}

