/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Nov 18 21:35:05 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
//#include <QtGui/QAction>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QLabel *label_back1;
    QWidget *widget;
    QTableView *tableView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_selname;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_selone;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_selall;
    QWidget *tab_2;
    QPushButton *pushButton_addoneinfo;
    QPushButton *pushButton_addcontact;
    QPushButton *pushButton_addgrade;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEdit_addQQ;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEdit_addtelnum;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *lineEdit_sushe;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *lineEdit_addmath;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QLineEdit *lineEdit_addC;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QLineEdit *lineEdit_addenglish;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QLineEdit *lineEdit_addddatabase;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_15;
    QLineEdit *lineEdit_addelec;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_addname;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_addsno;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_addbirth;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_addsdept;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_addhome;
    QWidget *tab;
    QPushButton *pushButton_delete;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_deletename;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(698, 483);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(70, 20, 561, 391));
        tabWidget->setMaximumSize(QSize(561, 16777215));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_back1 = new QLabel(tab_3);
        label_back1->setObjectName(QString::fromUtf8("label_back1"));
        label_back1->setGeometry(QRect(0, 0, 561, 371));
        tabWidget->addTab(tab_3, QString());
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        tableView = new QTableView(widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(35, 111, 451, 231));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 30, 225, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_selname = new QLineEdit(layoutWidget);
        lineEdit_selname->setObjectName(QString::fromUtf8("lineEdit_selname"));

        horizontalLayout->addWidget(lineEdit_selname);

        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 70, 262, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox = new QComboBox(layoutWidget1);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        layoutWidget2 = new QWidget(widget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(350, 20, 130, 78));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_selone = new QPushButton(layoutWidget2);
        pushButton_selone->setObjectName(QString::fromUtf8("pushButton_selone"));

        verticalLayout->addWidget(pushButton_selone);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_selall = new QPushButton(layoutWidget2);
        pushButton_selall->setObjectName(QString::fromUtf8("pushButton_selall"));

        verticalLayout->addWidget(pushButton_selall);

        tabWidget->addTab(widget, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        pushButton_addoneinfo = new QPushButton(tab_2);
        pushButton_addoneinfo->setObjectName(QString::fromUtf8("pushButton_addoneinfo"));
        pushButton_addoneinfo->setGeometry(QRect(90, 180, 111, 23));
        pushButton_addcontact = new QPushButton(tab_2);
        pushButton_addcontact->setObjectName(QString::fromUtf8("pushButton_addcontact"));
        pushButton_addcontact->setGeometry(QRect(70, 320, 121, 23));
        pushButton_addgrade = new QPushButton(tab_2);
        pushButton_addgrade->setObjectName(QString::fromUtf8("pushButton_addgrade"));
        pushButton_addgrade->setGeometry(QRect(360, 260, 121, 23));
        layoutWidget3 = new QWidget(tab_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 220, 263, 80));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        lineEdit_addQQ = new QLineEdit(layoutWidget3);
        lineEdit_addQQ->setObjectName(QString::fromUtf8("lineEdit_addQQ"));

        horizontalLayout_8->addWidget(lineEdit_addQQ);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        lineEdit_addtelnum = new QLineEdit(layoutWidget3);
        lineEdit_addtelnum->setObjectName(QString::fromUtf8("lineEdit_addtelnum"));

        horizontalLayout_9->addWidget(lineEdit_addtelnum);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(layoutWidget3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_10->addWidget(label_10);

        lineEdit_sushe = new QLineEdit(layoutWidget3);
        lineEdit_sushe->setObjectName(QString::fromUtf8("lineEdit_sushe"));

        horizontalLayout_10->addWidget(lineEdit_sushe);


        verticalLayout_3->addLayout(horizontalLayout_10);

        layoutWidget4 = new QWidget(tab_2);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(300, 50, 263, 201));
        verticalLayout_4 = new QVBoxLayout(layoutWidget4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_11 = new QLabel(layoutWidget4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_11->addWidget(label_11);

        lineEdit_addmath = new QLineEdit(layoutWidget4);
        lineEdit_addmath->setObjectName(QString::fromUtf8("lineEdit_addmath"));

        horizontalLayout_11->addWidget(lineEdit_addmath);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_12 = new QLabel(layoutWidget4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_12->addWidget(label_12);

        lineEdit_addC = new QLineEdit(layoutWidget4);
        lineEdit_addC->setObjectName(QString::fromUtf8("lineEdit_addC"));

        horizontalLayout_12->addWidget(lineEdit_addC);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_13 = new QLabel(layoutWidget4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_13->addWidget(label_13);

        lineEdit_addenglish = new QLineEdit(layoutWidget4);
        lineEdit_addenglish->setObjectName(QString::fromUtf8("lineEdit_addenglish"));

        horizontalLayout_13->addWidget(lineEdit_addenglish);


        verticalLayout_4->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_14 = new QLabel(layoutWidget4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_14->addWidget(label_14);

        lineEdit_addddatabase = new QLineEdit(layoutWidget4);
        lineEdit_addddatabase->setObjectName(QString::fromUtf8("lineEdit_addddatabase"));

        horizontalLayout_14->addWidget(lineEdit_addddatabase);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_15 = new QLabel(layoutWidget4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_15->addWidget(label_15);

        lineEdit_addelec = new QLineEdit(layoutWidget4);
        lineEdit_addelec->setObjectName(QString::fromUtf8("lineEdit_addelec"));

        horizontalLayout_15->addWidget(lineEdit_addelec);


        verticalLayout_4->addLayout(horizontalLayout_15);

        layoutWidget5 = new QWidget(tab_2);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(180, 10, 261, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_addname = new QLineEdit(layoutWidget5);
        lineEdit_addname->setObjectName(QString::fromUtf8("lineEdit_addname"));

        horizontalLayout_3->addWidget(lineEdit_addname);

        layoutWidget6 = new QWidget(tab_2);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(20, 60, 263, 108));
        verticalLayout_2 = new QVBoxLayout(layoutWidget6);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget6);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_addsno = new QLineEdit(layoutWidget6);
        lineEdit_addsno->setObjectName(QString::fromUtf8("lineEdit_addsno"));

        horizontalLayout_4->addWidget(lineEdit_addsno);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_addbirth = new QLineEdit(layoutWidget6);
        lineEdit_addbirth->setObjectName(QString::fromUtf8("lineEdit_addbirth"));

        horizontalLayout_5->addWidget(lineEdit_addbirth);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEdit_addsdept = new QLineEdit(layoutWidget6);
        lineEdit_addsdept->setObjectName(QString::fromUtf8("lineEdit_addsdept"));

        horizontalLayout_6->addWidget(lineEdit_addsdept);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        lineEdit_addhome = new QLineEdit(layoutWidget6);
        lineEdit_addhome->setObjectName(QString::fromUtf8("lineEdit_addhome"));

        horizontalLayout_7->addWidget(lineEdit_addhome);


        verticalLayout_2->addLayout(horizontalLayout_7);

        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton_delete = new QPushButton(tab);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(220, 210, 75, 23));
        layoutWidget7 = new QWidget(tab);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(120, 130, 311, 22));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget7);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_16->addWidget(label_16);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer);

        lineEdit_deletename = new QLineEdit(layoutWidget7);
        lineEdit_deletename->setObjectName(QString::fromUtf8("lineEdit_deletename"));

        horizontalLayout_16->addWidget(lineEdit_deletename);

        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 698, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
	//MainWindow->setWindowTitle(QApplication::translate("MainWindow", "10011006\347\217\255\347\217\255\347\272\247\347\256\241\347\220\206\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
	MainWindow->setWindowTitle(QApplication::translate("MainWindow", "10011006\347\217\255\347\217\255\347\272\247\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        label_back1->setText(QString());
	tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "     \347\217\255\347\272\247\351\243\216\351\207\207\345\261\225\347\244\272    ", 0));
	label->setText(QApplication::translate("MainWindow", "\350\246\201\346\237\245\350\257\242\347\232\204\345\247\223\345\220\215\357\274\232", 0));
        lineEdit_selname->setText(QString());
	label_2->setText(QApplication::translate("MainWindow", "\350\246\201\346\237\245\350\257\242\347\232\204\344\277\241\346\201\257\357\274\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
	 << QApplication::translate("MainWindow", "\346\237\245\350\257\242\350\257\245\345\220\214\345\255\246\347\232\204\346\211\200\346\234\211\344\270\252\344\272\272\344\277\241\346\201\257", 0)
	 << QApplication::translate("MainWindow", "\346\237\245\350\257\242\350\257\245\345\220\214\345\255\246\347\232\204\346\211\200\346\234\211\350\201\224\347\263\273\346\226\271\345\274\217", 0)
	 << QApplication::translate("MainWindow", "\346\237\245\350\257\242\350\257\245\345\220\214\345\255\246\347\232\204\346\211\200\346\234\211\350\257\276\347\250\213\346\210\220\347\273\251", 0)
        );
	pushButton_selone->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244\345\215\225\344\272\272\346\237\245\350\257\242", 0));
	pushButton_selall->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244\346\237\245\350\257\242\346\211\200\346\234\211\344\272\272\347\232\204\344\277\241\346\201\257", 0));
	tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("MainWindow", "\346\237\245\350\257\242\347\217\255\347\272\247\344\270\252\344\272\272\344\277\241\346\201\257", 0));
	pushButton_addoneinfo->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244\345\212\240\345\205\245\344\270\252\344\272\272\344\277\241\346\201\257", 0));
	pushButton_addcontact->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244\345\212\240\345\205\245\350\201\224\347\263\273\346\226\271\345\274\217", 0));
	pushButton_addgrade->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244\346\267\273\345\212\240\346\210\220\347\273\251\344\277\241\346\201\257", 0));
	label_8->setText(QApplication::translate("MainWindow", "\350\246\201\345\212\240\345\205\245\346\226\260\345\220\214\345\255\246\347\232\204QQ\357\274\232", 0));
	label_9->setText(QApplication::translate("MainWindow", "\350\246\201\345\212\240\345\205\245\346\226\260\345\220\214\345\255\246\347\232\204\347\224\265\350\257\235\357\274\232", 0));
	label_10->setText(QApplication::translate("MainWindow", "\350\246\201\345\212\240\345\205\245\346\226\260\345\220\214\345\255\246\347\232\204\345\256\277\350\210\215\357\274\232", 0));
	label_11->setText(QApplication::translate("MainWindow", "\346\226\260\345\220\214\345\255\246\347\232\204\346\225\260\345\255\246\346\210\220\347\273\251\357\274\232", 0));
	label_12->setText(QApplication::translate("MainWindow", "\346\226\260\345\220\214\345\255\246\347\232\204C\350\257\255\350\250\200\346\210\220\347\273\251\357\274\232", 0));
	label_13->setText(QApplication::translate("MainWindow", "\346\226\260\345\220\214\345\255\246\347\232\204\350\213\261\350\257\255\346\210\220\347\273\251\357\274\232", 0));
	label_14->setText(QApplication::translate("MainWindow", "\346\226\260\345\220\214\345\255\246\347\232\204\346\225\260\346\215\256\345\272\223\346\210\220\347\273\251\357\274\232", 0));
	label_15->setText(QApplication::translate("MainWindow", "\346\226\260\345\220\214\345\255\246\347\232\204\346\250\241\347\224\265\346\210\220\347\273\251\357\274\232", 0));
	label_3->setText(QApplication::translate("MainWindow", "\350\246\201\345\212\240\345\205\245\346\226\260\345\220\214\345\255\246\347\232\204\345\247\223\345\220\215\357\274\232", 0));
        lineEdit_addname->setText(QString());
	label_4->setText(QApplication::translate("MainWindow", "\350\246\201\345\212\240\345\205\245\346\226\260\345\220\214\345\255\246\347\232\204\345\255\246\345\217\267\357\274\232", 0));
        lineEdit_addsno->setText(QString());
	label_5->setText(QApplication::translate("MainWindow", "\350\246\201\345\212\240\345\205\245\346\226\260\345\220\214\345\255\246\347\232\204\347\224\237\346\227\245\357\274\232", 0));
        lineEdit_addbirth->setText(QString());
	label_6->setText(QApplication::translate("MainWindow", "\350\246\201\345\212\240\345\205\245\346\226\260\345\220\214\345\255\246\347\232\204\347\263\273\345\217\267\357\274\232", 0));
        lineEdit_addsdept->setText(QString());
	label_7->setText(QApplication::translate("MainWindow", "\350\246\201\345\212\240\345\205\245\346\226\260\345\220\214\345\255\246\347\232\204\345\256\266\344\271\241\357\274\232", 0));
        lineEdit_addhome->setText(QString());
	tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\347\217\255\347\272\247\346\234\211\346\226\260\346\210\220\345\221\230\345\212\240\345\205\245", 0));
	pushButton_delete->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244\345\210\240\351\231\244", 0));
	label_16->setText(QApplication::translate("MainWindow", "\346\202\262\345\202\254\344\272\206\357\274\214\350\260\201\350\246\201\350\265\260\344\272\206\357\274\237", 0));
	tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\346\202\262\345\202\254\344\272\206\357\274\214\346\234\211\344\272\272\350\265\260\344\272\206", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
