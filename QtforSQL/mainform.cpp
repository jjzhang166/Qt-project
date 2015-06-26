#include "mainform.h"

mainform::mainform(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("中学生档案管理系统界面"));
    //this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);

    stuAddBtn = new QPushButton;
    stuAddBtn->setText(tr("学生注册界面"));
    stuAddBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");

    markAddBtn = new QPushButton;
    markAddBtn->setText(tr("添加成绩界面"));
    markAddBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");

    classAddBtn = new QPushButton;
    classAddBtn->setText(tr("添加班级界面"));
    classAddBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");

    courseAddBtn = new QPushButton;
    courseAddBtn->setText(tr("添加课程界面"));
    courseAddBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");

    vboxLayout = new QVBoxLayout;
    vboxLayout->addWidget(classAddBtn);
    vboxLayout->addWidget(stuAddBtn);
    vboxLayout->addWidget(markAddBtn);
    vboxLayout->addWidget(courseAddBtn);

    gropBox = new QGroupBox;
    gropBox->setTitle(tr("添加界面"));
    gropBox->setLayout(vboxLayout);

    hboxLayout = new QHBoxLayout;
    hboxLayout->addWidget(gropBox);

    this->setLayout(hboxLayout);

    connect(stuAddBtn,SIGNAL(clicked()),this,SLOT(showStuDlg()));
    connect(classAddBtn,SIGNAL(clicked()),this,SLOT(showClassDlg()));
    connect(courseAddBtn,SIGNAL(clicked()),this,SLOT(showCourseDlg()));
    connect(markAddBtn,SIGNAL(clicked()),this,SLOT(showMarkDlg()));
}

mainform::~mainform()
{

}

void mainform::showStuDlg(){
    stuDlg = new stuRegister();
    stuDlg ->show();
}

void mainform::showClassDlg(){
    classDlg =new classRegister();
    classDlg->show();
}

void mainform::showMarkDlg(){
    markDlg =new markRegister();
    markDlg->show();
}

void mainform::showCourseDlg(){
    courseDlg =new courseRegister();
    courseDlg->show();
}
