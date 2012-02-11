/********************************************************************************
** Form generated from reading UI file 'dices.ui'
**
** Created: Fri Nov 25 23:41:51 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DICES_H
#define UI_DICES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dices
{
public:
    QWidget *centralWidget;
    QLabel *labelTitre;
    QTextEdit *textEditResultat;
    QPushButton *pushButtonValider;
    QComboBox *comboBoxNbDices;
    QComboBox *comboBoxNbFaces;
    QLabel *labelDices;
    QLabel *labelFaces;

    void setupUi(QMainWindow *Dices)
    {
        if (Dices->objectName().isEmpty())
            Dices->setObjectName(QString::fromUtf8("Dices"));
        Dices->resize(600, 400);
        centralWidget = new QWidget(Dices);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        labelTitre = new QLabel(centralWidget);
        labelTitre->setObjectName(QString::fromUtf8("labelTitre"));
        labelTitre->setGeometry(QRect(240, 10, 131, 21));
        textEditResultat = new QTextEdit(centralWidget);
        textEditResultat->setObjectName(QString::fromUtf8("textEditResultat"));
        textEditResultat->setGeometry(QRect(33, 113, 531, 261));
        pushButtonValider = new QPushButton(centralWidget);
        pushButtonValider->setObjectName(QString::fromUtf8("pushButtonValider"));
        pushButtonValider->setGeometry(QRect(470, 80, 93, 27));
        comboBoxNbDices = new QComboBox(centralWidget);
        comboBoxNbDices->setObjectName(QString::fromUtf8("comboBoxNbDices"));
        comboBoxNbDices->setGeometry(QRect(150, 80, 89, 31));
        comboBoxNbFaces = new QComboBox(centralWidget);
        comboBoxNbFaces->setObjectName(QString::fromUtf8("comboBoxNbFaces"));
        comboBoxNbFaces->setGeometry(QRect(360, 80, 89, 31));
        labelDices = new QLabel(centralWidget);
        labelDices->setObjectName(QString::fromUtf8("labelDices"));
        labelDices->setGeometry(QRect(40, 80, 111, 31));
        labelFaces = new QLabel(centralWidget);
        labelFaces->setObjectName(QString::fromUtf8("labelFaces"));
        labelFaces->setGeometry(QRect(240, 80, 121, 31));
        Dices->setCentralWidget(centralWidget);

        retranslateUi(Dices);

        QMetaObject::connectSlotsByName(Dices);
    } // setupUi

    void retranslateUi(QMainWindow *Dices)
    {
        Dices->setWindowTitle(QApplication::translate("Dices", "Dices", 0, QApplication::UnicodeUTF8));
        labelTitre->setText(QApplication::translate("Dices", "Simulateur de d\303\251s", 0, QApplication::UnicodeUTF8));
        pushButtonValider->setText(QApplication::translate("Dices", "Valider", 0, QApplication::UnicodeUTF8));
        comboBoxNbDices->clear();
        comboBoxNbDices->insertItems(0, QStringList()
         << QApplication::translate("Dices", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "17", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "19", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "20", 0, QApplication::UnicodeUTF8)
        );
        comboBoxNbFaces->clear();
        comboBoxNbFaces->insertItems(0, QStringList()
         << QApplication::translate("Dices", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "24", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "30", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "36", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "40", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "48", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "64", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "80", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dices", "100", 0, QApplication::UnicodeUTF8)
        );
        labelDices->setText(QApplication::translate("Dices", "Nombre de d\303\251s:", 0, QApplication::UnicodeUTF8));
        labelFaces->setText(QApplication::translate("Dices", "Nombre de faces:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dices: public Ui_Dices {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DICES_H
