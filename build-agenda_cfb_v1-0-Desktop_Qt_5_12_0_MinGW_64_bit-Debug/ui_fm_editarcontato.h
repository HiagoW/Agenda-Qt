/********************************************************************************
** Form generated from reading UI file 'fm_editarcontato.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_EDITARCONTATO_H
#define UI_FM_EDITARCONTATO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_editarcontato
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *txt_id;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *txt_nome;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_telefone;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *txt_email;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btn_gravar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *fm_editarcontato)
    {
        if (fm_editarcontato->objectName().isEmpty())
            fm_editarcontato->setObjectName(QString::fromUtf8("fm_editarcontato"));
        fm_editarcontato->resize(400, 300);
        widget = new QWidget(fm_editarcontato);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 361, 139));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        txt_id = new QLabel(widget);
        txt_id->setObjectName(QString::fromUtf8("txt_id"));

        horizontalLayout->addWidget(txt_id);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        txt_nome = new QLineEdit(widget);
        txt_nome->setObjectName(QString::fromUtf8("txt_nome"));

        horizontalLayout_2->addWidget(txt_nome);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        txt_telefone = new QLineEdit(widget);
        txt_telefone->setObjectName(QString::fromUtf8("txt_telefone"));

        horizontalLayout_3->addWidget(txt_telefone);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        txt_email = new QLineEdit(widget);
        txt_email->setObjectName(QString::fromUtf8("txt_email"));

        horizontalLayout_4->addWidget(txt_email);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        btn_gravar = new QPushButton(widget);
        btn_gravar->setObjectName(QString::fromUtf8("btn_gravar"));

        horizontalLayout_5->addWidget(btn_gravar);

        btn_cancelar = new QPushButton(widget);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));

        horizontalLayout_5->addWidget(btn_cancelar);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(fm_editarcontato);

        QMetaObject::connectSlotsByName(fm_editarcontato);
    } // setupUi

    void retranslateUi(QDialog *fm_editarcontato)
    {
        fm_editarcontato->setWindowTitle(QApplication::translate("fm_editarcontato", "Dialog", nullptr));
        label->setText(QApplication::translate("fm_editarcontato", "ID", nullptr));
        txt_id->setText(QApplication::translate("fm_editarcontato", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("fm_editarcontato", "Nome", nullptr));
        label_3->setText(QApplication::translate("fm_editarcontato", "Telefone", nullptr));
        label_4->setText(QApplication::translate("fm_editarcontato", "E-Mail", nullptr));
        btn_gravar->setText(QApplication::translate("fm_editarcontato", "Gravar", nullptr));
        btn_cancelar->setText(QApplication::translate("fm_editarcontato", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_editarcontato: public Ui_fm_editarcontato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_EDITARCONTATO_H
