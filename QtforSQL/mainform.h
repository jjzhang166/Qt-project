#ifndef MAINFORM_H
#define MAINFORM_H

#include <QDialog>
#include <QPushButton>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QHBoxLayout>

#include "classregister.h"
#include "sturegister.h"
#include "courseregister.h"
#include "markregister.h"

class mainform : public QDialog
{
    Q_OBJECT

public:
    mainform(QWidget *parent = 0);
    ~mainform();
private:
    QPushButton *classAddBtn;
    QPushButton *stuAddBtn;
    QPushButton *markAddBtn;
    QPushButton *courseAddBtn;

    QGroupBox *gropBox;

    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;

    stuRegister *stuDlg;
    markRegister *markDlg;
    courseRegister *courseDlg;
    classRegister *classDlg;

private slots:
    void showStuDlg();
    void showClassDlg();
    void showMarkDlg();
    void showCourseDlg();
};

#endif // MAINFORM_H
