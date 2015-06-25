#include "courseregister.h"

courseRegister::courseRegister(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("添加课程界面"));
    //setMinimumSize(350,175);    //设置固定大小
    //setMaximumSize(350,175);

    CnoLabel = new QLabel;
    CnoLabel->setText(tr("课程号:"));
    CnoEdit = new QLineEdit;
    CnoEdit->setText(tr(""));

    CnameLabel = new QLabel;
    CnameLabel->setText(tr("课程名:"));
    CnameEdit = new QLineEdit;
    CnameEdit->setText(tr(""));

    CteacherLabel = new QLabel;
    CteacherLabel->setText(tr("任课教师:"));
    CteacherEdit = new QLineEdit;
    CteacherEdit->setText(tr(""));

    ackBtn=new QPushButton;
    ackBtn->setText(tr("确认"));
    ackBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");
    quitBtn=new QPushButton;
    quitBtn->setText(tr("退出"));
    quitBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");

    gridLayout = new QGridLayout;
    gridLayout->addWidget(CnoLabel,0,0);
    gridLayout->addWidget(CnoEdit,0,1);
    gridLayout->addWidget(CnameLabel,1,0);
    gridLayout->addWidget(CnameEdit,1,1);
    gridLayout->addWidget(CteacherLabel,2,0);
    gridLayout->addWidget(CteacherEdit,2,1);
    gridLayout->addWidget(quitBtn,5,0);
    gridLayout->addWidget(ackBtn,5,1);

    this->setLayout(gridLayout);
}

courseRegister::~courseRegister()
{

}
