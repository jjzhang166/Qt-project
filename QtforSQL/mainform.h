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
    QLabel *searchInputLabel;
    QLabel *aboutPictureLabel;
    QLabel *aboutTextLabel;
    QLabel *aboutVLineLabel;
    QLabel *aboutHLineLabel;
    QLineEdit *seachInputEdit;
    QLabel *deleteConditionLabel;
    QLineEdit *deleteConditionEdit;
    QLabel *deleteHLineLabel;
    QLabel *updateTableLabel;
    QLabel *updateSetLabel;
    QLineEdit *updateSetEdit;
    QLabel *updateWhereLabel;
    QLineEdit *updateWhereEdit;

    QPushButton *gradeAddBtn;
    QPushButton *studentAddBtn;
    QPushButton *markAddBtn;
    QPushButton *courseAddBtn;
    QPushButton *familyAddBtn;
    QPushButton *selectSearchBtn;
    QPushButton *selectAllSearchBtn;
    QPushButton *quitBtn;
    QPushButton *deleteAckBtn;
    QPushButton *updateAckBtn;

    QGroupBox *groupBox;

    QComboBox *selectComboBox;
    QComboBox *selectItemCombo;
    QComboBox *deleteComboBox;
    QComboBox *deleteItemCombo;
    QComboBox *updateTableComboBox;
    QComboBox *updateSetComboBox;
    QComboBox *updateWhereComboBox;
    QComboBox *updateWhereItemCombo4;

    QToolBox *toolBox;

    QWidget *selectToolBoxWidget;
    QWidget *deleteToolBoxWidget;
    QWidget *appendToolBoxWidget;
    QWidget *aboutToolBoxWidget;

    QTableView *tView;

    QGridLayout *gridLayout;
    QVBoxLayout *appendGroupBoxVLayout;
    QHBoxLayout *appendGroupToolHLayout;
    QGridLayout *appendGridLayout;
    QVBoxLayout *appendVBoxLayout;
    QVBoxLayout *aboutLeftVBoxLayout;
    QVBoxLayout *aboutRightVBoxLayout;
    QHBoxLayout *aboutHBoxLayout;
    QVBoxLayout *deleteVBoxLayout;
    QGridLayout *deleteInTopGridLayout;
    QGridLayout *updateInDownGridLayout;

    addStudent *studentDlg;
    addMark *markDlg;
    addCourse *courseDlg;
    addFamily *familyDlg;
    addGrade *gradeDlg;

private slots:
    void showStudentDlg();
    void showGradeDlg();
    void showMarkDlg();
    void showCourseDlg();
    void showFamilyDlg();
    void onQuitBtn();
    void OnComboIndexChanged();
    void OnComboIndexChanged2();
    void OnComboIndexChanged3();
    void OnComboIndexChanged4();
    void selectAll();
    void selectSql();
    void delectSql();
    void updateSql();
    QString cnToen(QString str);
};

#endif // MAINFORM_H
