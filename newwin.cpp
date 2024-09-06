#include "newwin.h"
#include "ui_newwin.h"

NewWin::NewWin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NewWin)
{
    ui->setupUi(this);
}

NewWin::~NewWin()
{
    delete ui;
}
