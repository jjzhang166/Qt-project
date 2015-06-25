#ifndef STUREGISTER_H
#define STUREGISTER_H

#include <QDialog>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
//#include <QVBoxLayout>
//#include <QHBoxLayout>
#include <QGridLayout>
#include <QSpacerItem>
#include <QMessageBox>
#include <Qstring>
#include <QComboBox>

class stuRegister : public QDialog
{
    Q_OBJECT

public:
    stuRegister(QWidget *parent = 0);
    ~stuRegister();
private:
    QLabel *SnameLabel;
    QLabel *SnoLabel;
    QLabel *SsexLabel;
    QLabel *SdateLabel;
    QLabel *SnationLabel;
    QLabel *SphoneLabel;
    QLabel *SaddressLabel;
    QLabel *CnumLabel;
    QLabel *GnoLabel;

    QLineEdit *SnameEdit;
    QLineEdit *SnoEdit;
    QComboBox *SsexComboBox;
    QLineEdit *SdateEdit;
    QLineEdit *SnationEdit;
    QLineEdit *SphoneEdit;
    QLineEdit *SaddressEdit;
    QLineEdit *CnumEdit;
    QLineEdit *GnoEdit;

    QPushButton *ackBtn;
    QPushButton *quitBtn;

    QGridLayout *gridLayout;
};

#endif // STUREGISTER_H
