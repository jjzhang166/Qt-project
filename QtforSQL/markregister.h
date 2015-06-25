#ifndef MARKREGISTER_H
#define MARKREGISTER_H

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

class markRegister : public QDialog
{
    Q_OBJECT

public:
    markRegister(QWidget *parent = 0);
    ~markRegister();
private:
    QLabel *CnoLabel;
    QLabel *SnoLabel;
    QLabel *MpointLabel;
    QLabel *MsemesterLabel;

    QLineEdit *CnoEdit;
    QLineEdit *SnoEdit;
    QLineEdit *MpointEdit;
    QLineEdit *MsemesterEdit;

    QPushButton *ackBtn;
    QPushButton *quitBtn;

    QGridLayout *gridLayout;
};

#endif // MARKREGISTER_H
