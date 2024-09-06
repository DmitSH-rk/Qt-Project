/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QPushButton *regbtn;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *loginlab;
    QLineEdit *logedit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *namelab;
    QLineEdit *nameedit;
    QHBoxLayout *horizontalLayout;
    QLabel *passlab;
    QLineEdit *passedit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(400, 300);
        Dialog->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:1, y1:1, x2:0, y2:0, stop:0 rgba(81, 0, 135, 255), stop:0.427447 rgba(41, 61, 132, 235), stop:1 rgba(155, 79, 165, 255));"));
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 381, 211));
        regbtn = new QPushButton(groupBox);
        regbtn->setObjectName("regbtn");
        regbtn->setGeometry(QRect(150, 170, 80, 24));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 51, 341, 111));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        loginlab = new QLabel(layoutWidget);
        loginlab->setObjectName("loginlab");

        horizontalLayout_3->addWidget(loginlab);

        logedit = new QLineEdit(layoutWidget);
        logedit->setObjectName("logedit");

        horizontalLayout_3->addWidget(logedit);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 5);

        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        namelab = new QLabel(layoutWidget);
        namelab->setObjectName("namelab");

        horizontalLayout_2->addWidget(namelab);

        nameedit = new QLineEdit(layoutWidget);
        nameedit->setObjectName("nameedit");

        horizontalLayout_2->addWidget(nameedit);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 5);

        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        passlab = new QLabel(layoutWidget);
        passlab->setObjectName("passlab");

        horizontalLayout->addWidget(passlab);

        passedit = new QLineEdit(layoutWidget);
        passedit->setObjectName("passedit");

        horizontalLayout->addWidget(passedit);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "Registration", nullptr));
        regbtn->setText(QCoreApplication::translate("Dialog", "Registration", nullptr));
        loginlab->setText(QCoreApplication::translate("Dialog", "Login", nullptr));
        logedit->setPlaceholderText(QCoreApplication::translate("Dialog", "Set Login", nullptr));
        namelab->setText(QCoreApplication::translate("Dialog", "Name", nullptr));
        nameedit->setPlaceholderText(QCoreApplication::translate("Dialog", "Set Name", nullptr));
        passlab->setText(QCoreApplication::translate("Dialog", "Password", nullptr));
        passedit->setPlaceholderText(QCoreApplication::translate("Dialog", "Set Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
