/********************************************************************************
** Form generated from reading UI file 'fm_pesquisacontatos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PESQUISACONTATOS_H
#define UI_FM_PESQUISACONTATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_pesquisacontatos
{
public:
    QTableWidget *tw_contatos;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_pesquisanome;
    QPushButton *btn_pesquisar;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_excluir;
    QPushButton *btn_editar;

    void setupUi(QDialog *fm_pesquisacontatos)
    {
        if (fm_pesquisacontatos->objectName().isEmpty())
            fm_pesquisacontatos->setObjectName(QString::fromUtf8("fm_pesquisacontatos"));
        fm_pesquisacontatos->resize(579, 304);
        tw_contatos = new QTableWidget(fm_pesquisacontatos);
        tw_contatos->setObjectName(QString::fromUtf8("tw_contatos"));
        tw_contatos->setGeometry(QRect(10, 60, 561, 191));
        widget = new QWidget(fm_pesquisacontatos);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 561, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        txt_pesquisanome = new QLineEdit(widget);
        txt_pesquisanome->setObjectName(QString::fromUtf8("txt_pesquisanome"));
        txt_pesquisanome->setMinimumSize(QSize(400, 0));

        horizontalLayout->addWidget(txt_pesquisanome);

        btn_pesquisar = new QPushButton(widget);
        btn_pesquisar->setObjectName(QString::fromUtf8("btn_pesquisar"));

        horizontalLayout->addWidget(btn_pesquisar);

        widget1 = new QWidget(fm_pesquisacontatos);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 260, 158, 25));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_excluir = new QPushButton(widget1);
        btn_excluir->setObjectName(QString::fromUtf8("btn_excluir"));

        horizontalLayout_2->addWidget(btn_excluir);

        btn_editar = new QPushButton(widget1);
        btn_editar->setObjectName(QString::fromUtf8("btn_editar"));

        horizontalLayout_2->addWidget(btn_editar);


        retranslateUi(fm_pesquisacontatos);

        QMetaObject::connectSlotsByName(fm_pesquisacontatos);
    } // setupUi

    void retranslateUi(QDialog *fm_pesquisacontatos)
    {
        fm_pesquisacontatos->setWindowTitle(QApplication::translate("fm_pesquisacontatos", "Dialog", nullptr));
        label->setText(QApplication::translate("fm_pesquisacontatos", "Pesquisar nome", nullptr));
        btn_pesquisar->setText(QApplication::translate("fm_pesquisacontatos", "Pesquisar", nullptr));
        btn_excluir->setText(QApplication::translate("fm_pesquisacontatos", "Excluir", nullptr));
        btn_editar->setText(QApplication::translate("fm_pesquisacontatos", "Editar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_pesquisacontatos: public Ui_fm_pesquisacontatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PESQUISACONTATOS_H
