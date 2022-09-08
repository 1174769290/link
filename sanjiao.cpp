//
// Created by junjie on 2022/8/31.
//

// You may need to build the project (run Qt uic code generator) to get "ui_sanjiao.h" resolved

#include "sanjiao.h"
#include "ui_sanjiao.h"
#include <cmath>
#include <iostream>
#include "QErrorMessage"

using namespace std;
//三次测试
//四次测试
sanjiao::sanjiao(QWidget *parent) :
    QWidget(parent), ui(new Ui::sanjiao) {
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), SLOT(pushButton()));

}
void sanjiao::pushButton() {

    str.dx = ui->lineEdit->text();
    if (str.dx>='a'&&str.dx<='z'){
        QErrorMessage *myerrorDlg = new QErrorMessage(this);
        myerrorDlg->setWindowTitle(QString::fromLocal8Bit("错误信息对话框"));
        //显示非模态对话框
        myerrorDlg->showMessage(QString::fromLocal8Bit("底出现输出英文，请检查输入是否正常"));
    }
    if (str.dx.isEmpty()) {

        QErrorMessage *myerrorDlg = new QErrorMessage(this);
        myerrorDlg->setWindowTitle(QString::fromLocal8Bit("错误信息对话框"));
        //显示非模态对话框；
        myerrorDlg->showMessage(QString::fromLocal8Bit("底出现输出空白，请检查输入是否正常"));
    } else{};

    str.fx = ui->lineEdit_2->text();
    if (str.fx>='a'&&str.dx<='z') {
        QErrorMessage *myerrorDlg = new QErrorMessage(this);
        myerrorDlg->setWindowTitle(QString::fromLocal8Bit("错误信息对话框"));
        //显示非模态对话框；
        myerrorDlg->showMessage(QString::fromLocal8Bit("高出现输出英文，请检查输入是否正常"));
    }
    if (str.fx.isEmpty())
    {
        QErrorMessage* myerrorDlg=new QErrorMessage(this);
        myerrorDlg->setWindowTitle(QString::fromLocal8Bit("错误信息对话框"));
        //显示非模态对话框；
        myerrorDlg->showMessage(QString::fromLocal8Bit("高出现输出非数字，请检查输入是否正常"));

    }
    else{};
     str.end = str.dx.toDouble(&ok) ;
     str.end = str.end * str.num; 
     str.high = str.fx.toDouble(&ok);
     str.cx =  str.size * atan(str.end/str.high);
     str.field_of_view = QString::number(str.cx * str.one_hundred,'f',2);
     ui->textEdit->setText(str.field_of_view);

}

void sanjiao::textEdit() {}
void sanjiao::lineEdit_2() {}
void sanjiao::lineEdit() {}

sanjiao::~sanjiao() {
    delete ui;
}

