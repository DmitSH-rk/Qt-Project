/********************************************************************************
** Form generated from reading UI file 'new.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_H
#define UI_NEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_New
{
public:
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout;
    QCalendarWidget *calendarWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *addbtn;
    QGridLayout *gridLayout;
    QLabel *datelabel;
    QLabel *eventlabel;
    QLabel *hellous;

    void setupUi(QDialog *New)
    {
        if (New->objectName().isEmpty())
            New->setObjectName("New");
        New->resize(666, 360);
        New->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:0, y2:0, stop:0 rgba(81, 0, 135, 255), stop:0.427447 rgba(41, 61, 132, 235), stop:1 rgba(155, 79, 165, 255));"));
        gridLayout_2 = new QGridLayout(New);
        gridLayout_2->setObjectName("gridLayout_2");
        listWidget = new QListWidget(New);
        listWidget->setObjectName("listWidget");
        listWidget->setStyleSheet(QString::fromUtf8(" border: 1px solid rgb(60, 60, 60);\n"
"    border-radius: 10px\n"
""));
        listWidget->setWordWrap(true);

        gridLayout_2->addWidget(listWidget, 3, 0, 2, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        calendarWidget = new QCalendarWidget(New);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color:white"));

        verticalLayout->addWidget(calendarWidget);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 2, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEdit = new QLineEdit(New);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(lineEdit);

        addbtn = new QPushButton(New);
        addbtn->setObjectName("addbtn");
        addbtn->setMinimumSize(QSize(0, 0));
        addbtn->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"font-family: \"Segoe UI\", Tahoma, Geneva, Verdana, sans-serif;\n"
"border:1px solid;\n"
"border-radius: 10px;"));

        verticalLayout_2->addWidget(addbtn);


        gridLayout_2->addLayout(verticalLayout_2, 1, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        datelabel = new QLabel(New);
        datelabel->setObjectName("datelabel");
        datelabel->setStyleSheet(QString::fromUtf8(" border: 1px solid rgb(60, 60, 60);\n"
"    border-radius: 10px\n"
""));
        datelabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(datelabel, 0, 0, 1, 1);

        eventlabel = new QLabel(New);
        eventlabel->setObjectName("eventlabel");
        eventlabel->setStyleSheet(QString::fromUtf8(" border: 1px solid rgb(60, 60, 60);\n"
"    border-radius: 10px"));
        eventlabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eventlabel->setWordWrap(true);

        gridLayout->addWidget(eventlabel, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 4);

        gridLayout_2->addLayout(gridLayout, 2, 1, 3, 1);

        hellous = new QLabel(New);
        hellous->setObjectName("hellous");
        QFont font;
        font.setFamilies({QString::fromUtf8("Swis721 BlkEx BT")});
        font.setPointSize(10);
        hellous->setFont(font);
        hellous->setStyleSheet(QString::fromUtf8(" border: 1px solid rgb(60, 60, 60);\n"
"  border-radius: 10px"));
        hellous->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(hellous, 0, 0, 1, 2);


        retranslateUi(New);

        QMetaObject::connectSlotsByName(New);
    } // setupUi

    void retranslateUi(QDialog *New)
    {
        New->setWindowTitle(QCoreApplication::translate("New", "Dialog", nullptr));
        addbtn->setText(QCoreApplication::translate("New", "Add Event", nullptr));
        datelabel->setText(QCoreApplication::translate("New", "Your Date", nullptr));
        eventlabel->setText(QCoreApplication::translate("New", "Your Event", nullptr));
        hellous->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class New: public Ui_New {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_H
