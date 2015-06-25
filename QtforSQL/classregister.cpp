#include "classregister.h"

classRegister::classRegister(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle(tr("班级注册界面"));
    //setMinimumSize(350,175);    //设置固定大小
    //setMaximumSize(350,175);

    CnumLabel = new QLabel;
    CnumLabel->setText(tr("班号:"));
    CnumEdit = new QLineEdit;
    CnumEdit->setText(tr(""));

    CperiodLabel = new QLabel;
    CperiodLabel->setText(tr("所在届:"));
    CperiodEdit = new QLineEdit;
    CperiodEdit->setText(tr(""));

    CgradeLabel = new QLabel;
    CgradeLabel->setText(tr("年级:"));
    CgradeEdit = new QLineEdit;
    CgradeEdit->setText(tr(""));

    CstunumLabel = new QLabel;
    CstunumLabel->setText(tr("学生人数:"));
    CstunumEdit = new QLineEdit;
    CstunumEdit->setText(tr(""));

    CchargeLabel = new QLabel;
    CchargeLabel->setText(tr("班主任:"));
    CchargeEdit = new QLineEdit;
    CchargeEdit->setText(tr(""));

    ackBtn=new QPushButton;
    ackBtn->setText(tr("确认"));
    ackBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");
    quitBtn=new QPushButton;
    quitBtn->setText(tr("退出"));
    quitBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");

    gridLayout = new QGridLayout;
    gridLayout->addWidget(CnumLabel,0,0);
    gridLayout->addWidget(CnumEdit,0,1);
    gridLayout->addWidget(CperiodLabel,1,0);
    gridLayout->addWidget(CperiodEdit,1,1);
    gridLayout->addWidget(CgradeLabel,2,0);
    gridLayout->addWidget(CgradeEdit,2,1);
    gridLayout->addWidget(CstunumLabel,3,0);
    gridLayout->addWidget(CstunumEdit,3,1);
    gridLayout->addWidget(CchargeLabel,4,0);
    gridLayout->addWidget(CchargeEdit,4,1);
    gridLayout->addWidget(quitBtn,5,0);
    gridLayout->addWidget(ackBtn,5,1);

    this->setLayout(gridLayout);
}

classRegister::~classRegister()
{

}
