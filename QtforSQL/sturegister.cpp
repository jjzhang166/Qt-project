#include "sturegister.h"

stuRegister::stuRegister(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("学生注册界面"));
    //setMinimumSize(350,175);    //设置固定大小
    //setMaximumSize(350,175);

    SnoLabel = new QLabel;
    SnoLabel->setText(tr("学号:"));
    SnoEdit = new QLineEdit;
    SnoEdit->setText(tr(""));

    SnameLabel = new QLabel;
    SnameLabel->setText(tr("姓名:"));
    SnameEdit = new QLineEdit;
    SnameEdit->setText(tr(""));

    SdateLabel = new QLabel;
    SdateLabel->setText(tr("出生日期:"));
    SdateEdit = new QLineEdit;
    SdateEdit->setText(tr(""));

    SnationLabel = new QLabel;
    SnationLabel->setText(tr("民族:"));
    SnationEdit = new QLineEdit;
    SnationEdit->setText(tr(""));

    SphoneLabel = new QLabel;
    SphoneLabel->setText(tr("联系电话:"));
    SphoneEdit = new QLineEdit;
    SphoneEdit->setText(tr(""));

    SaddressLabel = new QLabel;
    SaddressLabel->setText(tr("家庭住址:"));
    SaddressEdit = new QLineEdit;
    SaddressEdit->setText(tr(""));

    SsexLabel = new QLabel;
    SsexLabel->setText(tr("性别:"));
    SsexComboBox=new QComboBox;
    SsexComboBox->addItem(tr("女"));
    SsexComboBox->addItem(tr("男"));

    CnumLabel = new QLabel;
    CnumLabel->setText(tr("班号:"));
    CnumEdit = new QLineEdit;
    CnumEdit->setText(tr(""));

    GnoLabel = new QLabel;
    GnoLabel->setText(tr("毕业号:"));
    GnoEdit = new QLineEdit;
    GnoEdit->setText(tr(""));

    ackBtn=new QPushButton;
    ackBtn->setText(tr("确认"));
    ackBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");
    quitBtn=new QPushButton;
    quitBtn->setText(tr("退出"));
    quitBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");

    gridLayout = new QGridLayout;
    gridLayout->addWidget(SnameLabel,0,0);
    gridLayout->addWidget(SnameEdit,0,1);
    gridLayout->addWidget(SnoLabel,1,0);
    gridLayout->addWidget(SnoEdit,1,1);
    gridLayout->addWidget(SsexLabel,2,0);
    gridLayout->addWidget(SsexComboBox,2,1);
    gridLayout->addWidget(SnationLabel,3,0);
    gridLayout->addWidget(SnationEdit,3,1);
    gridLayout->addWidget(SdateLabel,4,0);
    gridLayout->addWidget(SdateEdit,4,1);
    gridLayout->addWidget(SphoneLabel,5,0);
    gridLayout->addWidget(SphoneEdit,5,1);
    gridLayout->addWidget(SaddressLabel,6,0);
    gridLayout->addWidget(SaddressEdit,6,1);
    gridLayout->addWidget(CnumLabel,7,0);
    gridLayout->addWidget(CnumEdit,7,1);
    gridLayout->addWidget(GnoLabel,8,0);
    gridLayout->addWidget(GnoEdit,8,1);
    gridLayout->addWidget(quitBtn,9,0);
    gridLayout->addWidget(ackBtn,9,1);

    this->setLayout(gridLayout);
}

stuRegister::~stuRegister()
{

}
