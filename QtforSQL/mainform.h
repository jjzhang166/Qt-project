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
    QLabel *hLineLabel;
    QLineEdit *inputEdit;
    QLabel *conditionLabel;
    QLineEdit *conditionEdit;
    QLabel *deleteHLineLabel;

    QPushButton *gradeAddBtn;
    QPushButton *stuAddBtn;
    QPushButton *markAddBtn;
    QPushButton *courseAddBtn;
    QPushButton *familyAddBtn;
    QPushButton *searchBtn;
    QPushButton *allSearchBtn;
    QPushButton *quitBtn;
    QPushButton *deleteAckBtn;

    QGroupBox *groupBox;

    QComboBox *typeCombo;
    QComboBox *typeCombo2;
    QComboBox *itemCombo;
    QComboBox *itemCombo2;

    QToolBox *toolBox;

    QWidget *widge;
    QWidget *deleteWidget;
    QWidget *appendWidget;
    QWidget *aboutWidge;

    QTableView *tView;

    QString textStr;

    QVBoxLayout *groupLayout;
    QHBoxLayout *addLayout;
    QHBoxLayout *hboxLayout;
    QGridLayout *gridLayout;
    QGridLayout *selectGridLayout2;
    QVBoxLayout *addVBoxLayout;
    QVBoxLayout *aboutLVBoxLayout;
    QVBoxLayout *aboutRVBoxLayout;
    QHBoxLayout *aboutHBoxLayout;
    QVBoxLayout *deleteVBoxLayout;
    QGridLayout *topGridLayout;
    QGridLayout *downGridLayout;

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
    void OnComboIndexChanged2();
    void selectAll();
    void selectSql();
    void delectSql();
    QString cnToen(QString str);
};

#endif // MAINFORM_H
