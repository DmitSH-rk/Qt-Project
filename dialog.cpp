#include "dialog.h"
#include "ui_dialog.h"
#include "functions.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_regbtn_clicked()
{
    Functions fun;
    fun.InsertDb(ui->logedit->text(), ui->passedit->text(), ui->nameedit->text());
}

