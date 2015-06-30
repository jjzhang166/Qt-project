#include "addStudent.h"

addStudent::addStudent(QWidget *parent)
    : QDialog(parent)
{
    sql.isLinkToSql();

    setWindowTitle(tr("学生注册界面"));
    this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);

    SnoLabel = new QLabel;
    SnoLabel->setText(tr("学号:"));
    SnoEdit = new QLineEdit;
    SnoEdit->setText(tr(""));

    SnameLabel = new QLabel;
    SnameLabel->setText(tr("姓名:"));
    SnameEdit = new QLineEdit;
    SnameEdit->setText(tr(""));

    SsexLabel = new QLabel;
    SsexLabel->setText(tr("性别:"));
    SsexComboBox=new QComboBox;
    SsexComboBox->addItem(tr("女"));
    SsexComboBox->addItem(tr("男"));

    SdateLabel = new QLabel;
    SdateLabel->setText(tr("出生日期:"));
    SdateEdit = new QLineEdit;
    SdateEdit->setText(tr(""));

    SnationLabel = new QLabel;
    SnationLabel->setText(tr("民族:"));
    SnationEdit = new QLineEdit;
    SnationEdit->setText(tr(""));

    SphoneLabel = new QLabel;
    SphoneLabel->setText(tr("手机号码:"));
    SphoneEdit = new QLineEdit;
    SphoneEdit->setText(tr(""));

    SaddressLabel = new QLabel;
    SaddressLabel->setText(tr("家庭住址:"));
    SaddressEdit = new QLineEdit;
    SaddressEdit->setText(tr(""));

    SgraduateLabel = new QLabel;
    SgraduateLabel->setText(tr("毕业去向:"));
    SgraduateEdit = new QLineEdit;
    SgraduateEdit->setText(tr(""));

    GnoLabel = new QLabel;
    GnoLabel->setText(tr("班号:"));
    GnoEdit = new QLineEdit;
    GnoEdit->setText(tr(""));

    ackBtn=new QPushButton;
    ackBtn->setText(tr("确认"));
    quitBtn=new QPushButton;
    quitBtn->setText(tr("退出"));
    cleanBtn=new QPushButton;
    cleanBtn->setText(tr("清空"));

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
    gridLayout->addWidget(SgraduateLabel,7,0);
    gridLayout->addWidget(SgraduateEdit,7,1);
    gridLayout->addWidget(GnoLabel,8,0);
    gridLayout->addWidget(GnoEdit,8,1);
    gridLayout->addWidget(quitBtn,9,2);
    gridLayout->addWidget(ackBtn,9,1);
    gridLayout->addWidget(cleanBtn,9,0);

    this->setLayout(gridLayout);

    connect(ackBtn,SIGNAL(clicked()), this, SLOT(onAckBtn()));
    connect(quitBtn,SIGNAL(clicked()), this, SLOT(onQuitBtn()));
    connect(cleanBtn,SIGNAL(clicked()), this, SLOT(onCleanBtn()));
}

addStudent::~addStudent(){

}

void addStudent::onQuitBtn(){
    this->close();
}

void addStudent::onCleanBtn(){
    SnoEdit->clear();
    SnameEdit->clear();
    SdateEdit->clear();
    SnationEdit->clear();
    SphoneEdit->clear();
    SaddressEdit->clear();
    SgraduateEdit->clear();
    GnoEdit->clear();
}
void addStudent::onAckBtn(){
    QStringList list;
    if(SnoEdit->text().isEmpty()||SnameEdit->text().isEmpty()||SsexComboBox->currentText().isEmpty()||SdateEdit->text().isEmpty()||SnationEdit->text().isEmpty()
            ||SphoneEdit->text().isEmpty()||SaddressEdit->text().isEmpty()||SgraduateEdit->text().isEmpty()||GnoEdit->text().isEmpty()){
        QMessageBox msg;
        msg.setText("Please enter the whole information!");
        msg.exec();
        return;
    }
    QString str1,str2,str3,str4,str5,str6,str7,str8,str9;
    str1 = SnoEdit ->text();
    str2 = SnameEdit ->text();
    str3 = SsexComboBox ->currentText();
    str4 = SdateEdit->text();
    str5 = SnationEdit->text();
    str6 = SphoneEdit->text();
    str7 = SaddressEdit->text();
    str8 = SgraduateEdit->text();
    str9 = GnoEdit->text();

    list<<str1<<str2<<str3<<str4<<str5<<str6<<str7<<str8<<str9;
    query=sql.addToStudent(list);
}
