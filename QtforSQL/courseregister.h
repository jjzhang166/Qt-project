#ifndef COURSEREGISTER_H
#define COURSEREGISTER_H

#include <QDialog>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
//#include <QVBoxLayout>
//#include <QHBoxLayout>
#include <QGridLayout>
//#include <QSpacerItem>
#include <QMessageBox>
//#include <Qstring>

class courseRegister : public QDialog
{
    Q_OBJECT

public:
    courseRegister(QWidget *parent = 0);
    ~courseRegister();
private:
    QLabel *CnoLabel;
    QLabel *CnameLabel;
    QLabel *CteacherLabel;

    QLineEdit *CnoEdit;
    QLineEdit *CnameEdit;
    QLineEdit *CteacherEdit;

    QPushButton *ackBtn;
    QPushButton *quitBtn;

    QGridLayout *gridLayout;
};

#endif // COURSEREGISTER_H
