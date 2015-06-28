#include "mainform.h"

mainform::mainform(QWidget *parent)
    : QDialog(parent)
{
    sql.isLinkToSql();

    setWindowTitle(tr("中学生档案管理系统界面"));
    setFixedSize(620,420);
    this->setStyleSheet("border-color：rgb(3,168,158)");
    //this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);

    //"关于界面"
    textStr="                  中学生档案管理系统\n\n         ";
    textStr.append("           作者：徐秀天\n\n");
    textStr.append("             工具：Qt SDK and Qt Creator \n");
    //textStr.append("作者：徐秀天\n");
    //textStr.append("作者：徐秀天\n");
    //textStr.append("作者：徐秀天\n");

    vLineLabel = new QLabel;
    vLineLabel->setFrameStyle(QFrame::VLine | QFrame::Raised);
    pictureLabel = new QLabel;
    pictureLabel->setFrameStyle(QFrame::WinPanel | QFrame::Raised);
    QPixmap pix(":/1.jpg");
    pictureLabel->setPixmap(pix);
    textLabel = new QLabel;
    textLabel->setFrameStyle(QFrame::StyledPanel | QFrame::Raised);
    textLabel->setWordWrap(true);
    textLabel->setText(textStr);

    quitBtn = new QPushButton;
    quitBtn->setText(tr("退出"));
    quitBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");
    connect(quitBtn,SIGNAL(clicked()),this,SLOT(onQuitBtn()));

    aboutLVBoxLayout = new QVBoxLayout;
    aboutLVBoxLayout->addWidget(pictureLabel);
    aboutLVBoxLayout->addStretch(1);
    aboutRVBoxLayout = new QVBoxLayout;
    aboutRVBoxLayout->addWidget(textLabel);
    aboutRVBoxLayout->addWidget(quitBtn);
    aboutHBoxLayout = new QHBoxLayout;
    aboutHBoxLayout->addLayout(aboutLVBoxLayout);
    aboutHBoxLayout->addWidget(vLineLabel);
    aboutHBoxLayout->addLayout(aboutRVBoxLayout);
    aboutHBoxLayout->setStretch(0,5);
    aboutHBoxLayout->setStretch(1,1);
    aboutHBoxLayout->setStretch(2,11);

    aboutWidge = new QWidget;
    aboutWidge->setLayout(aboutHBoxLayout);

    //"添加界面"
    stuAddBtn = new QPushButton;
    stuAddBtn->setText(tr("学生注册界面"));
    stuAddBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");

    markAddBtn = new QPushButton;
    markAddBtn->setText(tr("添加成绩界面"));
    markAddBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");

    gradeAddBtn = new QPushButton;
    gradeAddBtn->setText(tr("添加班级界面"));
    gradeAddBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");

    courseAddBtn = new QPushButton;
    courseAddBtn->setText(tr("添加课程界面"));
    courseAddBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");

    familyAddBtn = new QPushButton;
    familyAddBtn->setText(tr("添加家庭成员信息界面"));
    familyAddBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");

    groupLayout = new QVBoxLayout;
    groupLayout->addWidget(gradeAddBtn);
    groupLayout->addWidget(stuAddBtn);
    groupLayout->addWidget(markAddBtn);
    groupLayout->addWidget(courseAddBtn);
    groupLayout->addWidget(familyAddBtn);

    groupBox = new QGroupBox;
    groupBox->setTitle(tr("'添加'界面"));
    groupBox->setStyleSheet("height:300;width:140");
    groupBox->setLayout(groupLayout);

    connect(stuAddBtn,SIGNAL(clicked()),this,SLOT(showStuDlg()));
    connect(gradeAddBtn,SIGNAL(clicked()),this,SLOT(showGradeDlg()));
    connect(courseAddBtn,SIGNAL(clicked()),this,SLOT(showCourseDlg()));
    connect(markAddBtn,SIGNAL(clicked()),this,SLOT(showMarkDlg()));
    connect(familyAddBtn,SIGNAL(clicked()),this,SLOT(showFamilyDlg()));

    appendWidget = new QWidget;
    addLayout = new QVBoxLayout;
    addLayout->addWidget(groupBox);
    appendWidget->setLayout(addLayout);

    //"查找界面"
    inputLabel =new QLabel;
    inputLabel->setText(tr("输入你选定查找的数据"));
    inputEdit= new QLineEdit;
    inputEdit->setText(tr(""));

    searchBtn = new QPushButton;
    searchBtn->setText(tr("查找"));
    searchBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");
    connect(searchBtn,SIGNAL(clicked()),this,SLOT(selectSql()));
    allSearchBtn = new QPushButton;
    allSearchBtn->setText(tr("查找全部"));
    allSearchBtn->setStyleSheet("background-color:#E6E6FA;border: 1px solid #AAB4C4; width: 40px;height:20px;padding:0 0px;border-radius:1px;");
    connect(allSearchBtn,SIGNAL(clicked()),this,SLOT(selectAll()));

    widge = new QWidget;
    selectGridLayout2 = new QGridLayout;
    tView = new QTableView;

    //一下是默认的QComboxBox显示的数据
    typeCombo=new QComboBox;
    typeCombo->addItem(tr("课程"));
    typeCombo->addItem(tr("家庭信息"));
    typeCombo->addItem(tr("班级"));
    typeCombo->addItem(tr("成绩"));
    typeCombo->addItem(tr("学生"));
    itemCombo=new QComboBox;
    itemCombo->addItem(tr("课程号"));
    itemCombo->addItem(tr("课程名"));
    itemCombo->addItem(tr("任课教师"));
    connect(typeCombo,SIGNAL(currentIndexChanged(int)),this,SLOT(OnComboIndexChanged()));

    selectGridLayout2->setColumnStretch(0,1);
    selectGridLayout2->setColumnStretch(1,1);
    selectGridLayout2->setColumnStretch(2,1);
    selectGridLayout2->addWidget(typeCombo,0,0);
    selectGridLayout2->addWidget(itemCombo,0,1);
    selectGridLayout2->addWidget(searchBtn,0,2);
    selectGridLayout2->addWidget(inputLabel,1,0);
    selectGridLayout2->addWidget(inputEdit,1,1);
    selectGridLayout2->addWidget(allSearchBtn,1,2);

    addVBoxLayout= new QVBoxLayout;
    addVBoxLayout->addLayout(selectGridLayout2);
    addVBoxLayout->addWidget(tView);
    widge->setLayout(addVBoxLayout);

    //"总界面按QToolBox布局"//
    toolBox = new QToolBox(this);
    toolBox->layout()->setSpacing(5);
    toolBox->addItem(widge,"查找");
    toolBox->addItem(appendWidget,"添加");
    toolBox->addItem(aboutWidge,"关于");

    gridLayout = new QGridLayout;
    gridLayout->addWidget(toolBox,0,0);

    this->setLayout(gridLayout);
}

mainform::~mainform()
{

}

void mainform::showStuDlg(){
    stuDlg = new addStudent();
    stuDlg ->show();
}

void mainform::showGradeDlg(){
    gradeDlg =new addGrade();
    gradeDlg->show();
}

void mainform::showMarkDlg(){
    markDlg =new addMark();
    markDlg->show();
}

void mainform::showCourseDlg(){
    courseDlg =new addCourse();
    courseDlg->show();
}

void mainform::showFamilyDlg(){
    familyDlg =new addFamily();
    familyDlg->show();
}

void mainform::onQuitBtn(){
    this->close();
}

void mainform::selectSql(){
    QString str1,str2,str3;
    str1 = cnToen(typeCombo->currentText());
    str2 = cnToen(itemCombo->currentText());
    str3 = inputEdit->text();
    tView->clearFocus();
    sql.selectFromSql(str1,str2,str3);
    tView->setModel(&sql.model);
}

void mainform::selectAll()
{
    tView->clearFocus();
    sql.selectAllInf(typeCombo->currentIndex());
    tView->setModel(&sql.model);
}

void mainform::OnComboIndexChanged(){
    int i = typeCombo->currentIndex();
    itemCombo->clear();
    switch(i){
    case 0:
        itemCombo->addItem(tr("课程号"));
        itemCombo->addItem(tr("课程名"));
        itemCombo->addItem(tr("任课教师"));
        break;
    case 1:
        itemCombo->addItem(tr("家庭信息号"));
        itemCombo->addItem(tr("家属姓名"));
        itemCombo->addItem(tr("联系电话"));
        itemCombo->addItem(tr("与本人关系"));
        itemCombo->addItem(tr("学号"));
        break;
    case 3:
        itemCombo->addItem(tr("学号"));
        itemCombo->addItem(tr("课程号"));
        itemCombo->addItem(tr("学期"));
        itemCombo->addItem(tr("成绩"));
        break;
    case 2:
        itemCombo->addItem(tr("班号"));
        itemCombo->addItem(tr("所在届"));
        itemCombo->addItem(tr("年级"));
        itemCombo->addItem(tr("班主任"));
        itemCombo->addItem(tr("人数"));
        break;
    case 4:
        itemCombo->addItem(tr("学号"));
        itemCombo->addItem(tr("学生姓名"));
        itemCombo->addItem(tr("性别"));
        itemCombo->addItem(tr("出生日期"));
        itemCombo->addItem(tr("民族"));
        itemCombo->addItem(tr("家庭住址"));
        itemCombo->addItem(tr("手机号码"));
        itemCombo->addItem(tr("毕业去向"));
        itemCombo->addItem(tr("班号"));
        break;
    }
}

QString mainform::cnToen(QString str){
    if(str=="课程号")
        return "Cno";
    else if(str=="课程名")
        return "Cname";
    else if(str=="任课教师")
        return "Cteacher";
    else if(str=="家庭信息号")
        return "Fno";
    else if(str=="家属姓名")
        return "Fname";
    else if(str=="联系电话")
        return "Fphone";
    else if(str=="与本人关系")
        return "Frelation";
    else if(str=="学期")
        return "Msemester";
    else if(str=="成绩")
        return "Mpoint";
    else if(str=="班号")
        return "Gno";
    else if(str=="所在届")
        return "Gperiod";
    else if(str=="年级")
        return "Ggrade";
    else if(str=="班主任")
        return "Gcharge";
    else if(str=="人数")
        return "Gstunum";
    else if(str=="学号")
        return "Sno";
    else if(str=="学生姓名")
        return "Sname";
    else if(str=="性别")
        return "Ssex";
    else if(str=="出生日期")
        return "Sdate";
    else if(str=="民族")
        return "Snation";
    else if(str=="家庭住址")
        return "Saddress";
    else if(str=="手机号码")
        return "Sphone";
    else if(str=="毕业去向")
        return "Sgraduate";
    else if(str=="学生")
        return "Student";
    else if(str=="课程")
        return "Course";
    else if(str=="家庭信息")
        return "Family";
    else if(str=="班级")
        return "Grade";
    else if(str=="成绩")
        return "Mark";
    else return "";
}
