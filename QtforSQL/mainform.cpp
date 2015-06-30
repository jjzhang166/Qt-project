#include "mainform.h"

mainform::mainform(QWidget *parent)
    : QDialog(parent)
{
    sql.isLinkToSql();

    setWindowTitle(tr("中学生档案管理系统界面"));
    setFixedSize(620,420);
    //this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);
    this->setWindowOpacity(1);
    //this->setWindowFlags(Qt::FramelessWindowHint);
    //this->setAttribute(Qt::WA_TranslucentBackground);


    //"关于界面"
    QString textStr;
    textStr="                  中学生档案管理系统\n\n         ";
    textStr.append("           作者：徐秀天\n\n");
    textStr.append("             工具：Qt SDK and Qt Creator \n\n");
    textStr.append("                    版本：终极版 \n\n");

    aboutVLineLabel = new QLabel;
    aboutVLineLabel->setFrameStyle(QFrame::VLine | QFrame::Raised);
    aboutHLineLabel = new QLabel;
    aboutHLineLabel->setFrameStyle(QFrame::HLine | QFrame::Raised);
    aboutPictureLabel = new QLabel;
    aboutPictureLabel->setFrameStyle(QFrame::WinPanel | QFrame::Raised);
    QPixmap pix(":/1.jpg");
    aboutPictureLabel->setPixmap(pix);
    aboutTextLabel = new QLabel;
    aboutTextLabel->setFrameStyle(QFrame::Box | QFrame::Raised);
    aboutTextLabel->setWordWrap(true);
    aboutTextLabel->setText(textStr);

    quitBtn = new QPushButton;
    quitBtn->setText(tr("退出"));

    connect(quitBtn,SIGNAL(clicked()),this,SLOT(onQuitBtn()));

    aboutLeftVBoxLayout = new QVBoxLayout;
    aboutLeftVBoxLayout->addWidget(aboutPictureLabel);
    aboutLeftVBoxLayout->addStretch(1);
    aboutRightVBoxLayout = new QVBoxLayout;
    aboutRightVBoxLayout->addWidget(aboutTextLabel);
    aboutRightVBoxLayout->addWidget(aboutHLineLabel);
    aboutRightVBoxLayout->addWidget(quitBtn);
    aboutRightVBoxLayout->setStretch(0,9);
    aboutRightVBoxLayout->setStretch(1,2);
    aboutRightVBoxLayout->setStretch(2,2);
    aboutHBoxLayout = new QHBoxLayout;
    aboutHBoxLayout->addLayout(aboutLeftVBoxLayout);
    aboutHBoxLayout->addWidget(aboutVLineLabel);
    aboutHBoxLayout->addLayout(aboutRightVBoxLayout);
    aboutHBoxLayout->setStretch(0,5);
    aboutHBoxLayout->setStretch(1,1);
    aboutHBoxLayout->setStretch(2,11);

    aboutToolBoxWidget = new QWidget;
    aboutToolBoxWidget->setLayout(aboutHBoxLayout);


    //"添加界面"
    studentAddBtn = new QPushButton;
    studentAddBtn->setText(tr("学生注册界面"));
    studentAddBtn->setStyleSheet("width: 40px;height:20px;padding:2 2px;");

    markAddBtn = new QPushButton;
    markAddBtn->setText(tr("添加成绩界面"));
    markAddBtn->setStyleSheet("width: 40px;height:20px;padding:2 2px;");

    gradeAddBtn = new QPushButton;
    gradeAddBtn->setText(tr("添加班级界面"));
    gradeAddBtn->setStyleSheet("width: 40px;height:20px;padding:2 2px;");

    courseAddBtn = new QPushButton;
    courseAddBtn->setText(tr("添加课程界面"));
    courseAddBtn->setStyleSheet("width: 40px;height:20px;padding:2 2px;");

    familyAddBtn = new QPushButton;
    familyAddBtn->setText(tr("添加家庭成员信息界面"));
    familyAddBtn->setStyleSheet("width: 40px;height:20px;padding:2 2px;");

    appendGroupBoxVLayout = new QVBoxLayout;
    appendGroupBoxVLayout->addWidget(gradeAddBtn);
    appendGroupBoxVLayout->addWidget(studentAddBtn);
    appendGroupBoxVLayout->addWidget(markAddBtn);
    appendGroupBoxVLayout->addWidget(courseAddBtn);
    appendGroupBoxVLayout->addWidget(familyAddBtn);

    groupBox = new QGroupBox;
    groupBox->setTitle(tr("'添加'界面"));
    groupBox->setStyleSheet("height:280;width:230");
    groupBox->setLayout(appendGroupBoxVLayout);

    connect(studentAddBtn,SIGNAL(clicked()),this,SLOT(showStuDlg()));
    connect(gradeAddBtn,SIGNAL(clicked()),this,SLOT(showGradeDlg()));
    connect(courseAddBtn,SIGNAL(clicked()),this,SLOT(showCourseDlg()));
    connect(markAddBtn,SIGNAL(clicked()),this,SLOT(showMarkDlg()));
    connect(familyAddBtn,SIGNAL(clicked()),this,SLOT(showFamilyDlg()));

    appendToolBoxWidget = new QWidget;
    appendGroupToolHLayout = new QHBoxLayout;
    appendGroupToolHLayout->addWidget(groupBox);
    appendGroupToolHLayout->addStretch(1);
    appendToolBoxWidget->setLayout(appendGroupToolHLayout);


    //"查找界面"
    searchInputLabel =new QLabel;
    searchInputLabel->setText(tr("输入你选定查找的数据"));
    seachInputEdit= new QLineEdit;
    seachInputEdit->setText(tr(""));

    selectSearchBtn = new QPushButton;
    selectSearchBtn->setText(tr("查找"));
    connect(selectSearchBtn,SIGNAL(clicked()),this,SLOT(selectSql()));
    selectAllSearchBtn = new QPushButton;
    selectAllSearchBtn->setText(tr("查找全部"));
    connect(selectAllSearchBtn,SIGNAL(clicked()),this,SLOT(selectAll()));

    selectToolBoxWidget = new QWidget;
    appendGridLayout = new QGridLayout;
    tView = new QTableView;

    //一下是默认的QComboxBox显示的数据
    selectComboBox=new QComboBox;
    selectComboBox->addItem(tr("课程"));
    selectComboBox->addItem(tr("家庭信息"));
    selectComboBox->addItem(tr("班级"));
    selectComboBox->addItem(tr("成绩"));
    selectComboBox->addItem(tr("学生"));
    selectItemCombo=new QComboBox;
    selectItemCombo->addItem(tr("课程号"));
    selectItemCombo->addItem(tr("课程名"));
    selectItemCombo->addItem(tr("任课教师"));
    connect(selectComboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(OnComboIndexChanged()));

    appendGridLayout->setColumnStretch(0,1);
    appendGridLayout->setColumnStretch(1,1);
    appendGridLayout->setColumnStretch(2,1);
    appendGridLayout->addWidget(selectComboBox,0,0);
    appendGridLayout->addWidget(selectItemCombo,0,1);
    appendGridLayout->addWidget(selectSearchBtn,0,2);
    appendGridLayout->addWidget(searchInputLabel,1,0);
    appendGridLayout->addWidget(seachInputEdit,1,1);
    appendGridLayout->addWidget(selectAllSearchBtn,1,2);

    appendVBoxLayout= new QVBoxLayout;
    appendVBoxLayout->addLayout(appendGridLayout);
    appendVBoxLayout->addWidget(tView);
    selectToolBoxWidget->setLayout(appendVBoxLayout);

    //"删除*修改 界面"
    //删除
    deleteComboBox=new QComboBox;
    deleteComboBox->addItem(tr("课程"));
    deleteComboBox->addItem(tr("家庭信息"));
    deleteComboBox->addItem(tr("班级"));
    deleteComboBox->addItem(tr("成绩"));
    deleteComboBox->addItem(tr("学生"));
    deleteItemCombo=new QComboBox;
    deleteItemCombo->addItem(tr("课程号"));
    deleteItemCombo->addItem(tr("课程名"));
    deleteItemCombo->addItem(tr("任课教师"));
    connect(deleteComboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(OnComboIndexChanged2()));

    deleteAckBtn = new QPushButton;
    deleteAckBtn->setText(tr("删除"));
    connect(deleteAckBtn,SIGNAL(clicked()),this,SLOT(delectSql()));

    deleteConditionLabel = new QLabel;
    deleteConditionLabel->setText(tr("删除条件："));
    deleteConditionLabel->setAlignment(Qt::AlignCenter);
    deleteConditionEdit = new QLineEdit;

    deleteInTopGridLayout = new QGridLayout;
    deleteInTopGridLayout->addWidget(deleteComboBox,0,0);
    deleteInTopGridLayout->addWidget(deleteItemCombo,0,1);
    deleteInTopGridLayout->addWidget(deleteAckBtn,0,2);
    deleteInTopGridLayout->addWidget(deleteConditionLabel,1,0);
    deleteInTopGridLayout->addWidget(deleteConditionEdit,1,1);
    deleteInTopGridLayout->setColumnStretch(0,1);
    deleteInTopGridLayout->setColumnStretch(1,1);
    deleteInTopGridLayout->setColumnStretch(2,1);

    //修改
    updateTableLabel = new QLabel;
    updateTableLabel->setText(tr("要更新的表："));
    updateTableLabel->setAlignment(Qt::AlignCenter);
    updateTableComboBox = new QComboBox;
    updateTableComboBox->addItem(tr("课程"));
    updateTableComboBox->addItem(tr("家庭信息"));
    updateTableComboBox->addItem(tr("班级"));
    updateTableComboBox->addItem(tr("成绩"));
    updateTableComboBox->addItem(tr("学生"));
    updateAckBtn = new QPushButton;
    updateAckBtn->setText(tr("确认更新"));
    connect(updateAckBtn,SIGNAL(clicked()),this,SLOT(updateSql()));
    updateSetLabel = new QLabel;
    updateSetLabel->setText(tr("set"));
    updateSetLabel->setAlignment(Qt::AlignCenter);
    updateSetComboBox=new QComboBox;
    updateSetComboBox->addItem(tr("课程号"));
    updateSetComboBox->addItem(tr("课程名"));
    updateSetComboBox->addItem(tr("任课教师"));
    connect(updateTableComboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(OnComboIndexChanged3()));
    updateSetEdit = new QLineEdit;
    updateWhereLabel = new QLabel;
    updateWhereLabel->setText(tr("where"));
    updateWhereLabel->setAlignment(Qt::AlignCenter);
    updateWhereComboBox = new QComboBox;
    updateWhereComboBox->addItem(tr("课程"));
    updateWhereComboBox->addItem(tr("家庭信息"));
    updateWhereComboBox->addItem(tr("班级"));
    updateWhereComboBox->addItem(tr("成绩"));
    updateWhereComboBox->addItem(tr("学生"));
    updateWhereItemCombo4=new QComboBox;
    updateWhereItemCombo4->addItem(tr("课程号"));
    updateWhereItemCombo4->addItem(tr("课程名"));
    updateWhereItemCombo4->addItem(tr("任课教师"));
    connect(updateWhereComboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(OnComboIndexChanged4()));
    updateWhereEdit = new QLineEdit;
    updateWhereEdit->setText(tr(""));

    updateInDownGridLayout = new QGridLayout;
    updateInDownGridLayout->addWidget(updateTableLabel,0,0);
    updateInDownGridLayout->addWidget(updateTableComboBox,0,1);
    updateInDownGridLayout->addWidget(updateAckBtn,0,3);
    updateInDownGridLayout->addWidget(updateSetLabel,1,0);
    updateInDownGridLayout->addWidget(updateSetComboBox,1,1);
    updateInDownGridLayout->addWidget(updateSetEdit,1,2);
    updateInDownGridLayout->addWidget(updateWhereLabel,2,0);
    updateInDownGridLayout->addWidget(updateWhereComboBox,2,1);
    updateInDownGridLayout->addWidget(updateWhereItemCombo4,2,2);
    updateInDownGridLayout->addWidget(updateWhereEdit,2,3);
    updateInDownGridLayout->setColumnStretch(0,1);
    updateInDownGridLayout->setColumnStretch(1,1);
    updateInDownGridLayout->setColumnStretch(2,1);
    updateInDownGridLayout->setColumnStretch(3,1);

    deleteHLineLabel = new QLabel;
    deleteHLineLabel->setFrameStyle(QFrame::HLine | QFrame::Raised);

    deleteVBoxLayout = new QVBoxLayout;
    deleteVBoxLayout->addLayout(deleteInTopGridLayout);
    deleteVBoxLayout->addWidget(deleteHLineLabel);
    deleteVBoxLayout->addLayout(updateInDownGridLayout);
    deleteVBoxLayout->setStretch(0,5);
    deleteVBoxLayout->setStretch(1,1);
    deleteVBoxLayout->setStretch(2,5);

    deleteToolBoxWidget = new QWidget;
    deleteToolBoxWidget->setLayout(deleteVBoxLayout);

    //"总界面按QToolBox布局"//
    toolBox = new QToolBox(this);
    toolBox->layout()->setSpacing(5);
    toolBox->addItem(selectToolBoxWidget,"查找");
    toolBox->addItem(appendToolBoxWidget,"添加");
    toolBox->addItem(deleteToolBoxWidget,"删除*修改");
    toolBox->addItem(aboutToolBoxWidget,"关于");

    gridLayout = new QGridLayout;
    gridLayout->addWidget(toolBox,0,0);

    this->setLayout(gridLayout);
}

mainform::~mainform()
{

}

void mainform::showStudentDlg(){
    studentDlg = new addStudent();
    studentDlg ->show();
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

void mainform::delectSql(){
    QString str1,str2,str3;
    str1 = cnToen(deleteComboBox->currentText());
    str2 = cnToen(deleteItemCombo->currentText());
    str3 = deleteConditionEdit->text();
    sql.deleteFromSql(str1,str2,str3);
}

void mainform::updateSql(){
    QString str1,str2,str3,str4,str5,str6;
    str1=cnToen(updateTableComboBox->currentText());
    str2=cnToen(updateSetComboBox->currentText());
    str3=cnToen(updateSetEdit->text());
    str4=cnToen(updateWhereComboBox->currentText());
    str5=cnToen(updateWhereItemCombo4->currentText());
    str6=cnToen(updateWhereEdit->text());
    sql.updateFromSql(str1,str2,str3,str4,str5,str6);
}

void mainform::selectSql(){
    QString str1,str2,str3;
    str1 = cnToen(selectComboBox->currentText());
    str2 = cnToen(selectItemCombo->currentText());
    str3 = seachInputEdit->text();
    tView->clearFocus();
    sql.selectFromSql(str1,str2,str3);
    tView->setModel(&sql.model);
}

void mainform::selectAll()
{
    tView->clearFocus();
    sql.selectAllInf(selectComboBox->currentIndex());
    tView->setModel(&sql.model);
}

void mainform::OnComboIndexChanged(){
    int i = selectComboBox->currentIndex();
    selectItemCombo->clear();
    switch(i){
    case 0:
        selectItemCombo->addItem(tr("课程号"));
        selectItemCombo->addItem(tr("课程名"));
        selectItemCombo->addItem(tr("任课教师"));
        break;
    case 1:
        selectItemCombo->addItem(tr("家庭信息号"));
        selectItemCombo->addItem(tr("家属姓名"));
        selectItemCombo->addItem(tr("联系电话"));
        selectItemCombo->addItem(tr("与本人关系"));
        selectItemCombo->addItem(tr("学号"));
        break;
    case 3:
        selectItemCombo->addItem(tr("学号"));
        selectItemCombo->addItem(tr("课程号"));
        selectItemCombo->addItem(tr("学期"));
        selectItemCombo->addItem(tr("分数"));
        break;
    case 2:
        selectItemCombo->addItem(tr("班号"));
        selectItemCombo->addItem(tr("所在届"));
        selectItemCombo->addItem(tr("年级"));
        selectItemCombo->addItem(tr("班主任"));
        selectItemCombo->addItem(tr("人数"));
        break;
    case 4:
        selectItemCombo->addItem(tr("学号"));
        selectItemCombo->addItem(tr("学生姓名"));
        selectItemCombo->addItem(tr("性别"));
        selectItemCombo->addItem(tr("出生日期"));
        selectItemCombo->addItem(tr("民族"));
        selectItemCombo->addItem(tr("家庭住址"));
        selectItemCombo->addItem(tr("手机号码"));
        selectItemCombo->addItem(tr("毕业去向"));
        selectItemCombo->addItem(tr("班号"));
        break;
    }
}

void mainform::OnComboIndexChanged2(){
    int i = deleteComboBox->currentIndex();
    deleteItemCombo->clear();
    switch(i){
    case 0:
        deleteItemCombo->addItem(tr("课程号"));
        deleteItemCombo->addItem(tr("课程名"));
        deleteItemCombo->addItem(tr("任课教师"));
        break;
    case 1:
        deleteItemCombo->addItem(tr("家庭信息号"));
        deleteItemCombo->addItem(tr("家属姓名"));
        deleteItemCombo->addItem(tr("联系电话"));
        deleteItemCombo->addItem(tr("与本人关系"));
        deleteItemCombo->addItem(tr("学号"));
        break;
    case 3:
        deleteItemCombo->addItem(tr("学号"));
        deleteItemCombo->addItem(tr("课程号"));
        deleteItemCombo->addItem(tr("学期"));
        deleteItemCombo->addItem(tr("分数"));
        break;
    case 2:
        deleteItemCombo->addItem(tr("班号"));
        deleteItemCombo->addItem(tr("所在届"));
        deleteItemCombo->addItem(tr("年级"));
        deleteItemCombo->addItem(tr("班主任"));
        deleteItemCombo->addItem(tr("人数"));
        break;
    case 4:
        deleteItemCombo->addItem(tr("学号"));
        deleteItemCombo->addItem(tr("学生姓名"));
        deleteItemCombo->addItem(tr("性别"));
        deleteItemCombo->addItem(tr("出生日期"));
        deleteItemCombo->addItem(tr("民族"));
        deleteItemCombo->addItem(tr("家庭住址"));
        deleteItemCombo->addItem(tr("手机号码"));
        deleteItemCombo->addItem(tr("毕业去向"));
        deleteItemCombo->addItem(tr("班号"));
        break;
    }
}

void mainform::OnComboIndexChanged3(){
    int i = updateTableComboBox->currentIndex();
    updateSetComboBox->clear();
    switch(i){
    case 0:
        updateSetComboBox->addItem(tr("课程号"));
        updateSetComboBox->addItem(tr("课程名"));
        updateSetComboBox->addItem(tr("任课教师"));
        break;
    case 1:
        updateSetComboBox->addItem(tr("家庭信息号"));
        updateSetComboBox->addItem(tr("家属姓名"));
        updateSetComboBox->addItem(tr("联系电话"));
        updateSetComboBox->addItem(tr("与本人关系"));
        updateSetComboBox->addItem(tr("学号"));
        break;
    case 3:
        updateSetComboBox->addItem(tr("学号"));
        updateSetComboBox->addItem(tr("课程号"));
        updateSetComboBox->addItem(tr("学期"));
        updateSetComboBox->addItem(tr("分数"));
        break;
    case 2:
        updateSetComboBox->addItem(tr("班号"));
        updateSetComboBox->addItem(tr("所在届"));
        updateSetComboBox->addItem(tr("年级"));
        updateSetComboBox->addItem(tr("班主任"));
        updateSetComboBox->addItem(tr("人数"));
        break;
    case 4:
        updateSetComboBox->addItem(tr("学号"));
        updateSetComboBox->addItem(tr("学生姓名"));
        updateSetComboBox->addItem(tr("性别"));
        updateSetComboBox->addItem(tr("出生日期"));
        updateSetComboBox->addItem(tr("民族"));
        updateSetComboBox->addItem(tr("家庭住址"));
        updateSetComboBox->addItem(tr("手机号码"));
        updateSetComboBox->addItem(tr("毕业去向"));
        updateSetComboBox->addItem(tr("班号"));
        break;
    }
}

void mainform::OnComboIndexChanged4(){
    int i = updateWhereComboBox->currentIndex();
    updateWhereItemCombo4->clear();
    switch(i){
    case 0:
        updateWhereItemCombo4->addItem(tr("课程号"));
        updateWhereItemCombo4->addItem(tr("课程名"));
        updateWhereItemCombo4->addItem(tr("任课教师"));
        break;
    case 1:
        updateWhereItemCombo4->addItem(tr("家庭信息号"));
        updateWhereItemCombo4->addItem(tr("家属姓名"));
        updateWhereItemCombo4->addItem(tr("联系电话"));
        updateWhereItemCombo4->addItem(tr("与本人关系"));
        updateWhereItemCombo4->addItem(tr("学号"));
        break;
    case 3:
        updateWhereItemCombo4->addItem(tr("学号"));
        updateWhereItemCombo4->addItem(tr("课程号"));
        updateWhereItemCombo4->addItem(tr("学期"));
        updateWhereItemCombo4->addItem(tr("分数"));
        break;
    case 2:
        updateWhereItemCombo4->addItem(tr("班号"));
        updateWhereItemCombo4->addItem(tr("所在届"));
        updateWhereItemCombo4->addItem(tr("年级"));
        updateWhereItemCombo4->addItem(tr("班主任"));
        updateWhereItemCombo4->addItem(tr("人数"));
        break;
    case 4:
        updateWhereItemCombo4->addItem(tr("学号"));
        updateWhereItemCombo4->addItem(tr("学生姓名"));
        updateWhereItemCombo4->addItem(tr("性别"));
        updateWhereItemCombo4->addItem(tr("出生日期"));
        updateWhereItemCombo4->addItem(tr("民族"));
        updateWhereItemCombo4->addItem(tr("家庭住址"));
        updateWhereItemCombo4->addItem(tr("手机号码"));
        updateWhereItemCombo4->addItem(tr("毕业去向"));
        updateWhereItemCombo4->addItem(tr("班号"));
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
        return "Mark";
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
    else if(str=="分数")
        return "Mpoint";
    else return "";
}
