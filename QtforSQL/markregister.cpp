#include "markregister.h"

markRegister::markRegister(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("添加成绩界面"));
    //setMinimumSize(350,175);    //设置固定大小
    //setMaximumSize(350,175);
    //this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint);

    SnoLabel = new QLabel;
    SnoLabel->setText(tr("学  号:"));
    SnoEdit = new QLineEdit;
    SnoEdit->setText(tr(""));

    CnoLabel = new QLabel;
    CnoLabel->setText(tr("课程号:"));
    CnoEdit = new QLineEdit;
    CnoEdit->setText(tr(""));

    MpointLabel = new QLabel;
    MpointLabel->setText(tr("成  绩:"));
    MpointEdit = new QLineEdit;
    MpointEdit->setText(tr(""));

    MsemesterLabel = new QLabel;
    MsemesterLabel->setText(tr("学  期:"));
    MsemesterEdit = new QLineEdit;
    MsemesterEdit->setText(tr(""));

    ackBtn=new QPushButton;
    ackBtn->setText(tr("确认"));
    ackBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");
    quitBtn=new QPushButton;
    quitBtn->setText(tr("退出"));
    quitBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");

    gridLayout = new QGridLayout;
    gridLayout->addWidget(SnoLabel,0,0);
    gridLayout->addWidget(SnoEdit,0,1);
    gridLayout->addWidget(CnoLabel,1,0);
    gridLayout->addWidget(CnoEdit,1,1);
    gridLayout->addWidget(MpointLabel,2,0);
    gridLayout->addWidget(MpointEdit,2,1);
    gridLayout->addWidget(MsemesterLabel,3,0);
    gridLayout->addWidget(MsemesterEdit,3,1);
    gridLayout->addWidget(quitBtn,4,0);
    gridLayout->addWidget(ackBtn,4,1);

    this->setLayout(gridLayout);
}

markRegister::~markRegister()
{

}
