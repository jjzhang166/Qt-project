#include "addFamily.h"

addFamily::addFamily(QWidget *parent)
    : QDialog(parent)
{
    sql.isLinkToSql();

    setWindowTitle(tr("添加家庭成员信息界面"));
    this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);

    FnoLabel = new QLabel;
    FnoLabel->setText(tr("家庭信息号:"));
    FnoEdit = new QLineEdit;
    FnoEdit->setText(tr(""));

    FnameLabel = new QLabel;
    FnameLabel->setText(tr("家属姓名:"));
    FnameEdit = new QLineEdit;
    FnameEdit->setText(tr(""));

    FphoneLabel = new QLabel;
    FphoneLabel->setText(tr("联系电话:"));
    FphoneEdit = new QLineEdit;
    FphoneEdit->setText(tr(""));

    FrelationLabel = new QLabel;
    FrelationLabel->setText(tr("与本人关系:"));
    FrelationEdit = new QLineEdit;
    FrelationEdit->setText(tr(""));

    SnoLabel = new QLabel;
    SnoLabel->setText(tr("学号:"));
    SnoEdit = new QLineEdit;
    SnoEdit->setText(tr(""));

    ackBtn=new QPushButton;
    ackBtn->setText(tr("确认"));
    quitBtn=new QPushButton;
    quitBtn->setText(tr("退出"));
    cleanBtn=new QPushButton;
    cleanBtn->setText(tr("清空"));


    gridLayout = new QGridLayout;
    gridLayout->addWidget(FnoLabel,0,0);
    gridLayout->addWidget(FnoEdit,0,1);
    gridLayout->addWidget(FnameLabel,1,0);
    gridLayout->addWidget(FnameEdit,1,1);
    gridLayout->addWidget(FphoneLabel,2,0);
    gridLayout->addWidget(FphoneEdit,2,1);
    gridLayout->addWidget(FrelationLabel,3,0);
    gridLayout->addWidget(FrelationEdit,3,1);
    gridLayout->addWidget(SnoLabel,4,0);
    gridLayout->addWidget(SnoEdit,4,1);
    gridLayout->addWidget(cleanBtn,5,0);
    gridLayout->addWidget(ackBtn,5,1);
    gridLayout->addWidget(quitBtn,5,2);

    this->setLayout(gridLayout);

    connect(ackBtn,SIGNAL(clicked()), this, SLOT(onAckBtn()));
    connect(quitBtn,SIGNAL(clicked()), this, SLOT(onQuitBtn()));
    connect(cleanBtn,SIGNAL(clicked()), this, SLOT(onCleanBtn()));
}

addFamily::~addFamily(){

}

void addFamily::onQuitBtn(){
    this->close();
}

void addFamily::onCleanBtn(){
    FnoEdit->clear();
    FnameEdit->clear();
    FphoneEdit->clear();
    FrelationEdit->clear();
    SnoEdit->clear();
}

void addFamily::onAckBtn(){
    QStringList list;
    if(FnoEdit->text().isEmpty()||FnameEdit->text().isEmpty()||FphoneEdit->text().isEmpty()||FrelationEdit->text().isEmpty()||SnoEdit->text().isEmpty()){
        QMessageBox msg;
        msg.setText("Please enter the whole information!");
        msg.exec();
        return;
    }
    QString str1,str2,str3,str4,str5;
    str1 = FnoEdit ->text();
    str2 = FnameEdit ->text();
    str3 = FphoneEdit ->text();
    str4 = FrelationEdit->text();
    str5 = SnoEdit->text();

    list<<str1<<str2<<str3<<str4<<str5;
    query=sql.addToFamily(list);
}
