#ifndef CLASSREGISTER_H
#define CLASSREGISTER_H

#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
//#include <QVBoxLayout>
//#include <QHBoxLayout>
#include <QGridLayout>
#include <QSpacerItem>
#include <QMessageBox>
//#include <Qstring>

class classRegister : public QWidget
{
    Q_OBJECT

public:
    classRegister(QWidget *parent = 0);
    ~classRegister();
private:
    QLabel *CnumLabel;
    QLabel *CperiodLabel;
    QLabel *CgradeLabel;
    QLabel *CstunumLabel;
    QLabel *CchargeLabel;

    QLineEdit *CnumEdit;
    QLineEdit *CperiodEdit;
    QLineEdit *CgradeEdit;
    QLineEdit *CstunumEdit;
    QLineEdit *CchargeEdit;

    QPushButton *ackBtn;
    QPushButton *quitBtn;

    QGridLayout *gridLayout;
};

#endif // CLASSREGISTER_H
