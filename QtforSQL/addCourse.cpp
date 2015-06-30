#include "addCourse.h"

addCourse::addCourse(QWidget *parent)
    : QDialog(parent)
{
    sql.isLinkToSql();

    setWindowTitle(tr("添加课程界面"));
    this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);

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
    quitBtn=new QPushButton;
    quitBtn->setText(tr("退出"));
    cleanBtn=new QPushButton;
    cleanBtn->setText(tr("清空"));

    gridLayout = new QGridLayout;
    gridLayout->addWidget(CnoLabel,0,0);
    gridLayout->addWidget(CnoEdit,0,1);
    gridLayout->addWidget(CnameLabel,1,0);
    gridLayout->addWidget(CnameEdit,1,1);
    gridLayout->addWidget(CteacherLabel,2,0);
    gridLayout->addWidget(CteacherEdit,2,1);
    gridLayout->addWidget(cleanBtn,5,0);
    gridLayout->addWidget(ackBtn,5,1);
    gridLayout->addWidget(quitBtn,5,2);

    this->setLayout(gridLayout);

    connect(ackBtn,SIGNAL(clicked()), this, SLOT(onAckBtn()));
    connect(quitBtn,SIGNAL(clicked()), this, SLOT(onQuitBtn()));
    connect(cleanBtn,SIGNAL(clicked()), this, SLOT(onCleanBtn()));
}

addCourse::~addCourse()
{

}

void addCourse::onQuitBtn(){
    this->close();
}

void addCourse::onCleanBtn(){
    CnoEdit->clear();
    CnameEdit->clear();
    CteacherEdit->clear();
}

void addCourse::onAckBtn(){
    QStringList list;
    if(CnoEdit->text().isEmpty()||CnameEdit->text().isEmpty()||CteacherEdit->text().isEmpty()){
        QMessageBox msg;
        msg.setText("Please enter the whole information!");
        msg.exec();
        return;
    }
    QString str1,str2,str3;
    str1 = CnoEdit ->text();
    str2 = CnameEdit ->text();
    str3 = CteacherEdit ->text();
    list<<str1<<str2<<str3;
    query=sql.addToCourse(list);
}
