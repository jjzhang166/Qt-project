#include "addGrade.h"

addGrade::addGrade(QWidget *parent)
    : QWidget(parent)
{
    sql.isLinkToSql();

    setWindowTitle(tr("添加班级界面"));
    this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);

    GnoLabel = new QLabel;
    GnoLabel->setText(tr("班号:"));
    GnoEdit = new QLineEdit;
    GnoEdit->setText(tr(""));

    GperiodLabel = new QLabel;
    GperiodLabel->setText(tr("所在届:"));
    GperiodEdit = new QLineEdit;
    GperiodEdit->setText(tr(""));

    GgradeLabel = new QLabel;
    GgradeLabel->setText(tr("年级:"));
    GgradeEdit = new QLineEdit;
    GgradeEdit->setText(tr(""));

    GstunumLabel = new QLabel;
    GstunumLabel->setText(tr("学生人数:"));
    GstunumEdit = new QLineEdit;
    GstunumEdit->setText(tr(""));

    GchargeLabel = new QLabel;
    GchargeLabel->setText(tr("班主任:"));
    GchargeEdit = new QLineEdit;
    GchargeEdit->setText(tr(""));

    ackBtn=new QPushButton;
    ackBtn->setText(tr("确认"));
    ackBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");
    quitBtn=new QPushButton;
    quitBtn->setText(tr("退出"));
    quitBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");
    cleanBtn=new QPushButton;
    cleanBtn->setText(tr("清空"));
    cleanBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");

    gridLayout = new QGridLayout;
    gridLayout->addWidget(GnoLabel,0,0);
    gridLayout->addWidget(GnoEdit,0,1);
    gridLayout->addWidget(GperiodLabel,1,0);
    gridLayout->addWidget(GperiodEdit,1,1);
    gridLayout->addWidget(GgradeLabel,2,0);
    gridLayout->addWidget(GgradeEdit,2,1);
    gridLayout->addWidget(GstunumLabel,3,0);
    gridLayout->addWidget(GstunumEdit,3,1);
    gridLayout->addWidget(GchargeLabel,4,0);
    gridLayout->addWidget(GchargeEdit,4,1);
    gridLayout->addWidget(quitBtn,5,2);
    gridLayout->addWidget(ackBtn,5,1);
    gridLayout->addWidget(cleanBtn,5,0);


    this->setLayout(gridLayout);

    connect(ackBtn,SIGNAL(clicked()), this, SLOT(onAckBtn()));
    connect(quitBtn,SIGNAL(clicked()), this, SLOT(onQuitBtn()));
    connect(cleanBtn,SIGNAL(clicked()), this, SLOT(onCleanBtn()));
}

addGrade::~addGrade()
{

}

void addGrade::onQuitBtn(){
    this->close();
}

void addGrade::onCleanBtn(){
    GnoEdit->clear();
    GperiodEdit->clear();
    GgradeEdit->clear();
    GstunumEdit->clear();
    GchargeEdit->clear();
}

void addGrade::onAckBtn(){
    QStringList list;
    if(GnoEdit->text().isEmpty()||GperiodEdit->text().isEmpty()||GgradeEdit->text().isEmpty()||GstunumEdit->text().isEmpty()||GchargeEdit->text().isEmpty()){
        QMessageBox msg;
        msg.setText("Please enter the whole information!");
        msg.exec();
        return;
    }
    QString str1,str2,str3,str4,str5;
    str1 = GnoEdit ->text();
    str2 = GperiodEdit ->text();
    str3 = GgradeEdit ->text();
    str4 = GstunumEdit->text();
    str5 = GchargeEdit->text();

    list<<str1<<str2<<str3<<str4<<str5;
    query=sql.addToGrade(list);
}

