/********************************************************************************
** Form generated from reading UI file 'janelalogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELALOGIN_H
#define UI_JANELALOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JanelaLogin
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *txt_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *txt_senha;
    QPushButton *btn_login;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *JanelaLogin)
    {
        if (JanelaLogin->objectName().isEmpty())
            JanelaLogin->setObjectName(QString::fromUtf8("JanelaLogin"));
        JanelaLogin->resize(400, 194);
        centralWidget = new QWidget(JanelaLogin);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 120, 361, 16));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 381, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        txt_username = new QLineEdit(layoutWidget);
        txt_username->setObjectName(QString::fromUtf8("txt_username"));

        horizontalLayout->addWidget(txt_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        txt_senha = new QLineEdit(layoutWidget);
        txt_senha->setObjectName(QString::fromUtf8("txt_senha"));
        txt_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(txt_senha);


        verticalLayout->addLayout(horizontalLayout_2);

        btn_login = new QPushButton(layoutWidget);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));

        verticalLayout->addWidget(btn_login);

        JanelaLogin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(JanelaLogin);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        JanelaLogin->setMenuBar(menuBar);
        mainToolBar = new QToolBar(JanelaLogin);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        JanelaLogin->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(JanelaLogin);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        JanelaLogin->setStatusBar(statusBar);

        retranslateUi(JanelaLogin);

        QMetaObject::connectSlotsByName(JanelaLogin);
    } // setupUi

    void retranslateUi(QMainWindow *JanelaLogin)
    {
        JanelaLogin->setWindowTitle(QApplication::translate("JanelaLogin", "JanelaLogin", nullptr));
        label->setText(QApplication::translate("JanelaLogin", "...", nullptr));
        label_2->setText(QApplication::translate("JanelaLogin", "username", nullptr));
        txt_username->setText(QApplication::translate("JanelaLogin", "cfbcursos", nullptr));
        label_3->setText(QApplication::translate("JanelaLogin", "senha", nullptr));
        txt_senha->setText(QApplication::translate("JanelaLogin", "123", nullptr));
        btn_login->setText(QApplication::translate("JanelaLogin", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaLogin: public Ui_JanelaLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELALOGIN_H
