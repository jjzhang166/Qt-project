#ifndef MAINFORM_H
#define MAINFORM_H

#include <QDialog>
#include <QPushButton>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QToolBox>
#include <QComboBox>
#include <QSpacerItem>
#include <QTableView>
#include <QPixmap>

#include "addGrade.h"
#include "addStudent.h"
#include "addCourse.h"
#include "addMark.h"
#include "addFamily.h"

#include "linksql.h"

class mainform : public QDialog
{
    Q_OBJECT

public:
    mainform(QWidget *parent = 0);
    ~mainform();
    LinkSql sql;
    QSqlQuery query;

private:
    QLabel *inputLabel;
    QLabel *pictureLabel;
    QLabel *textLabel;
    QLabel *vLineLabel;
    QLineEdit *inputEdit;

    QPushButton *gradeAddBtn;
    QPushButton *stuAddBtn;
    QPushButton *markAddBtn;
    QPushButton *courseAddBtn;
    QPushButton *familyAddBtn;
    QPushButton *searchBtn;
    QPushButton *allSearchBtn;
    QPushButton *quitBtn;

    QGroupBox *groupBox;

    QComboBox *typeCombo;
    QComboBox *itemCombo;

    QToolBox *toolBox;

    QWidget *widge;
    QWidget *appendWidget;
    QWidget *aboutWidge;

    QTableView *tView;

    QString textStr;

    QVBoxLayout *groupLayout;
    QVBoxLayout *addLayout;
    QHBoxLayout *hboxLayout;
    QGridLayout *gridLayout;
    QGridLayout *selectGridLayout2;
    QVBoxLayout *addVBoxLayout;
    QVBoxLayout *aboutLVBoxLayout;
    QVBoxLayout *aboutRVBoxLayout;
    QHBoxLayout *aboutHBoxLayout;

    addStudent *stuDlg;
    addMark *markDlg;
    addCourse *courseDlg;
    addFamily *familyDlg;
    addGrade *gradeDlg;

private slots:
    void showStuDlg();
    void showGradeDlg();
    void showMarkDlg();
    void showCourseDlg();
    void showFamilyDlg();
    void onQuitBtn();
    void OnComboIndexChanged();
    void selectAll();
    void selectSql();
    QString cnToen(QString str);
};

#endif // MAINFORM_H
