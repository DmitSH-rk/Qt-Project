#ifndef NEWWIN_H
#define NEWWIN_H

#include <QMainWindow>

namespace Ui {
class NewWin;
}

class NewWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit NewWin(QWidget *parent = nullptr);
    ~NewWin();

private:
    Ui::NewWin *ui;
};

#endif // NEWWIN_H
