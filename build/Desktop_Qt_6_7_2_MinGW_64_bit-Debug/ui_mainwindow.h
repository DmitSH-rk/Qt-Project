/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRegistraion;
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *passlabel;
    QLabel *loglabel;
    QTextEdit *textpass;
    QTextEdit *textlogin;
    QLabel *label_2;
    QTextEdit *named;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuLogin;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(758, 347);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:1, y1:1, x2:0, y2:0, stop:0 rgba(81, 0, 135, 255), stop:0.427447 rgba(41, 61, 132, 235), stop:1 rgba(155, 79, 165, 255));"));
        actionRegistraion = new QAction(MainWindow);
        actionRegistraion->setObjectName("actionRegistraion");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 10, 731, 302));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(gridLayoutWidget);
        groupBox->setObjectName("groupBox");
        gridLayoutWidget_2 = new QWidget(groupBox);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(80, 80, 291, 101));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        passlabel = new QLabel(gridLayoutWidget_2);
        passlabel->setObjectName("passlabel");

        gridLayout_2->addWidget(passlabel, 2, 0, 1, 1);

        loglabel = new QLabel(gridLayoutWidget_2);
        loglabel->setObjectName("loglabel");

        gridLayout_2->addWidget(loglabel, 0, 0, 1, 1);

        textpass = new QTextEdit(gridLayoutWidget_2);
        textpass->setObjectName("textpass");

        gridLayout_2->addWidget(textpass, 2, 1, 1, 1);

        textlogin = new QTextEdit(gridLayoutWidget_2);
        textlogin->setObjectName("textlogin");
        textlogin->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        textlogin->setStyleSheet(QString::fromUtf8(""));
        textlogin->setFrameShadow(QFrame::Shadow::Raised);

        gridLayout_2->addWidget(textlogin, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        named = new QTextEdit(gridLayoutWidget_2);
        named->setObjectName("named");

        gridLayout_2->addWidget(named, 1, 1, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 200, 171, 24));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"font-family: \"Segoe UI\", Tahoma, Geneva, Verdana, sans-serif;\n"
"border-radius: 10px;\n"
""));

        gridLayout->addWidget(groupBox, 0, 1, 1, 2);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(250, 300));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 5);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 758, 21));
        menuLogin = new QMenu(menubar);
        menuLogin->setObjectName("menuLogin");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuLogin->menuAction());
        menuLogin->addAction(actionRegistraion);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionRegistraion->setText(QCoreApplication::translate("MainWindow", "Registraion", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Authorization", nullptr));
        passlabel->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        loglabel->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        textpass->setPlaceholderText(QCoreApplication::translate("MainWindow", "Type Password", nullptr));
        textlogin->setPlaceholderText(QCoreApplication::translate("MainWindow", "Type Login", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        named->setPlaceholderText(QCoreApplication::translate("MainWindow", "Type Name", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menuLogin->setTitle(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
