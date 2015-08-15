#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    int argc=0;
    LPWSTR *argv=::CommandLineToArgvW(::GetCommandLineW(),&argc);

    shortcutLabel=new QLabel;
    shortcutLabel->setText("dkjf");
    shortcutEdit=new QLineEdit;
    shortcutEdit->setText( QString::fromWCharArray(argv[1]));
    layout=new QGridLayout;
    layout->addWidget(shortcutLabel,0,0);
    layout->addWidget(shortcutEdit,0,1);


    this->setLayout(layout);
}

Widget::~Widget()
{

}
