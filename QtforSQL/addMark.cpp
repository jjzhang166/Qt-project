#include "addMark.h"

addMark::addMark(QWidget *parent)
    : QDialog(parent)
{
    sql.isLinkToSql();

    setWindowTitle(tr("添加成绩界面"));
    this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);

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
    MsemesterBox = new QComboBox;
    MsemesterBox->addItem(tr("期中"));
    MsemesterBox->addItem(tr("期末"));

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
    gridLayout->addWidget(SnoLabel,0,0);
    gridLayout->addWidget(SnoEdit,0,1);
    gridLayout->addWidget(CnoLabel,1,0);
    gridLayout->addWidget(CnoEdit,1,1);
    gridLayout->addWidget(MpointLabel,2,0);
    gridLayout->addWidget(MpointEdit,2,1);
    gridLayout->addWidget(MsemesterLabel,3,0);
    gridLayout->addWidget(MsemesterBox,3,1);
    gridLayout->addWidget(quitBtn,4,2);
    gridLayout->addWidget(ackBtn,4,1);
    gridLayout->addWidget(cleanBtn,4,0);

    this->setLayout(gridLayout);

    connect(ackBtn,SIGNAL(clicked()), this, SLOT(onAckBtn()));
    connect(quitBtn,SIGNAL(clicked()), this, SLOT(onQuitBtn()));
    connect(cleanBtn,SIGNAL(clicked()), this, SLOT(onCleanBtn()));
}

addMark::~addMark()
{

}

void addMark::onQuitBtn(){
    this->close();
}

void addMark::onCleanBtn(){
    CnoEdit->clear();
    SnoEdit->clear();
    MpointEdit->clear();
}

void addMark::onAckBtn(){
    QStringList list;
    if(CnoEdit->text().isEmpty()||SnoEdit->text().isEmpty()||MpointEdit->text().isEmpty()||MsemesterBox->currentText().isEmpty()){
        QMessageBox msg;
        msg.setText("Please enter the whole information!");
        msg.exec();
        return;
    }
    QString str1,str2,str3,str4;
    str1 = CnoEdit ->text();
    str2 = SnoEdit ->text();
    str3 = MpointEdit ->text();
    str4 = MsemesterBox->currentText();

    list<<str1<<str2<<str3<<str4;
    query=sql.addToMark(list);
}