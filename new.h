#ifndef NEW_H
#define NEW_H
#include <QDialog>
#include <QListWidget>
#include "users.h"
namespace Ui {
class New;
}

class New : public QDialog
{
    Q_OBJECT

public:
    explicit New(const User &user, QWidget *parent = nullptr);
    ~New();

private slots:

    void on_addbtn_clicked();

    void on_calendarWidget_clicked(const QDate &date);

    void events_show(QString name);


private:
    Ui::New *ui;
    User user;

};

#endif // NEW_H
