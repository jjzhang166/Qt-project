/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created: Sun Nov 18 21:35:08 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H
/*
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
*/
#include <QtWidgets>
QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_user;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_pwd;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_enter;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_cancel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_out;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(400, 300);
        label_2 = new QLabel(Login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 20, 168, 16));
        layoutWidget = new QWidget(Login);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(81, 52, 231, 131));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_user = new QLineEdit(layoutWidget);
        lineEdit_user->setObjectName(QString::fromUtf8("lineEdit_user"));

        horizontalLayout->addWidget(lineEdit_user);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_pwd = new QLineEdit(layoutWidget);
        lineEdit_pwd->setObjectName(QString::fromUtf8("lineEdit_pwd"));

        horizontalLayout_2->addWidget(lineEdit_pwd);


        verticalLayout->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(Login);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 220, 331, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_enter = new QPushButton(layoutWidget1);
        pushButton_enter->setObjectName(QString::fromUtf8("pushButton_enter"));

        horizontalLayout_3->addWidget(pushButton_enter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_cancel = new QPushButton(layoutWidget1);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));

        horizontalLayout_3->addWidget(pushButton_cancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton_out = new QPushButton(layoutWidget1);
        pushButton_out->setObjectName(QString::fromUtf8("pushButton_out"));

        horizontalLayout_3->addWidget(pushButton_out);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
    Login->setWindowTitle(QApplication::translate("Login", "10011006\347\217\255\347\217\255\347\272\247\347\256\241\347\220\206\347\263\273\347\273\237\347\231\273\351\231\206\347\225\214\351\235\242", 0));
    label_2->setText(QApplication::translate("Login", "  10011006\347\217\255\350\265\204\346\226\231\346\237\245\350\257\242\347\231\273\351\231\206\347\225\214\351\235\242", 0));
    label->setText(QApplication::translate("Login", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
    lineEdit_user->setText(QApplication::translate("Login", "10011006", 0));
    label_3->setText(QApplication::translate("Login", "\345\257\206  \347\240\201\357\274\232", 0));
    lineEdit_pwd->setText(QApplication::translate("Login", "0", 0));
    pushButton_enter->setText(QApplication::translate("Login", "\347\241\256\350\256\244\347\231\273\351\231\206", 0));
    pushButton_cancel->setText(QApplication::translate("Login", "\346\270\205\347\251\272\347\231\273\351\231\206", 0));
    pushButton_out->setText(QApplication::translate("Login", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
