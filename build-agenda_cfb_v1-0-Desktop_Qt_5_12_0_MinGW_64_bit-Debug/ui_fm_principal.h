/********************************************************************************
** Form generated from reading UI file 'fm_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PRINCIPAL_H
#define UI_FM_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_fm_principal
{
public:
    QPushButton *btn_novocontato;
    QPushButton *btn_pesquisarcontato;

    void setupUi(QDialog *fm_principal)
    {
        if (fm_principal->objectName().isEmpty())
            fm_principal->setObjectName(QString::fromUtf8("fm_principal"));
        fm_principal->resize(555, 332);
        btn_novocontato = new QPushButton(fm_principal);
        btn_novocontato->setObjectName(QString::fromUtf8("btn_novocontato"));
        btn_novocontato->setGeometry(QRect(10, 10, 111, 31));
        btn_pesquisarcontato = new QPushButton(fm_principal);
        btn_pesquisarcontato->setObjectName(QString::fromUtf8("btn_pesquisarcontato"));
        btn_pesquisarcontato->setGeometry(QRect(130, 10, 111, 31));

        retranslateUi(fm_principal);

        QMetaObject::connectSlotsByName(fm_principal);
    } // setupUi

    void retranslateUi(QDialog *fm_principal)
    {
        fm_principal->setWindowTitle(QApplication::translate("fm_principal", "Dialog", nullptr));
        btn_novocontato->setText(QApplication::translate("fm_principal", "Adicionar contato", nullptr));
        btn_pesquisarcontato->setText(QApplication::translate("fm_principal", "Pesquisar contato", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_principal: public Ui_fm_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PRINCIPAL_H
