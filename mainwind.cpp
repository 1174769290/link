//
// Created by junjie on 2022/8/19.
//

// You may need to build the project (run Qt uic code generator) to get "ui_mainwind.h" resolved
#include "mainwind.h"
#include "ui_mainwind.h"
#include <cmath>




using namespace std;

mainwind::mainwind(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::mainwind) {

    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), SLOT(focal_length()));
    connect(ui->pushButton, SIGNAL(clicked()), SLOT(pixel()));
    connect(ui->pushButton, SIGNAL(clicked()), SLOT(range()));
    connect(ui->gagaga, SIGNAL(clicked()), SLOT(gagaga()));
    connect(ui->pushButton, SIGNAL(clicked()), SLOT(pushButtun()));
    connect(ui->pushButton, SIGNAL(clicked()), SLOT(distance()));


}
void mainwind::pushButtun() {

    number1 = ui->hfov->text();
    if (number1>='a'&&number1 <='z'){
        QErrorMessage* myerrorDlg=new QErrorMessage(this);
        myerrorDlg->setWindowTitle(QString::fromLocal8Bit("错误信息对话框"));
        //显示非模态对话框；
        myerrorDlg->showMessage(QString::fromLocal8Bit("视场角度出现输出英文，请检查输入是否正常"));

    }
    else if (number1.isEmpty())
    {
        QErrorMessage* myerrorDlg=new QErrorMessage(this);
        myerrorDlg->setWindowTitle(QString::fromLocal8Bit("错误信息对话框"));
        //显示非模态对话框；
        myerrorDlg->showMessage(QString::fromLocal8Bit("视场角度出现输出空白，请检查输入是否正常"));

    }
    else{};
    number2 = ui->dis->text();
    if (number2>='a'&&number1 <='z'){
        QErrorMessage* myerrorDlg=new QErrorMessage(this);
        myerrorDlg->setWindowTitle(QString::fromLocal8Bit("错误信息对话框"));
        //显示非模态对话框；
        myerrorDlg->showMessage(QString::fromLocal8Bit("视差出现输出英文，请检查输入是否正常"));

    }
    else if (number2.isEmpty())
    {
        QErrorMessage* myerrorDlg=new QErrorMessage(this);
        myerrorDlg->setWindowTitle(QString::fromLocal8Bit("错误信息对话框"));
        //显示非模态对话框；
        myerrorDlg->showMessage(QString::fromLocal8Bit("视差出现输出空白，请检查输入是否正常"));

    }
    else{};
    number3 = ui->baseline->text();
    if (number3>='a'&&number3 <='z'){
        QErrorMessage* myerrorDlg=new QErrorMessage(this);
        myerrorDlg->setWindowTitle(QString::fromLocal8Bit("错误信息对话框"));
        //显示非模态对话框；
        myerrorDlg->showMessage(QString::fromLocal8Bit("基线出现输出英文，请检查输入是否正常"));

    }
    else if (number3.isEmpty())
    {
        QErrorMessage* myerrorDlg=new QErrorMessage(this);
        myerrorDlg->setWindowTitle(QString::fromLocal8Bit("错误信息对话框"));
        //显示非模态对话框；
        myerrorDlg->showMessage(QString::fromLocal8Bit("基线出现输出空白，请检查输入是否正常"));

    }
    else{};
    number4 = ui->errordis->text();
    if (number4>='a'&&number4 <='z'){
        QErrorMessage* myerrorDlg=new QErrorMessage(this);
        myerrorDlg->setWindowTitle(QString::fromLocal8Bit("错误信息对话框"));
        //显示非模态对话框；
        myerrorDlg->showMessage(QString::fromLocal8Bit("误差出现输出英文，请检查输入是否正常"));

    }
    else
    if (number4.isEmpty())
    {
        QErrorMessage* myerrorDlg=new QErrorMessage(this);
        myerrorDlg->setWindowTitle(QString::fromLocal8Bit("错误信息对话框"));
        //显示非模态对话框；
        myerrorDlg->showMessage(QString::fromLocal8Bit("误差出现输出空白，请检查输入是否正常"));

    }
    else{};
    pixelsize = 3.444 * 0.001;
    one_thousand = 1000;
    baseline = number3.toDouble(&ok);

    dis1 = number2.toDouble(&ok);
    errordis = number4.toDouble(&ok);


    double distance_ceiling = focal_length1 * baseline / (pixelsize * (dis1 + errordis)) / one_thousand;
    distance_ceiling1 = QString::number(distance_ceiling);
    ui->distance_ceiling->setText(distance_ceiling1);//距离上限

    double distance_lower_limit = focal_length1 * baseline / (pixelsize * (dis1 - errordis)) / one_thousand;
    distance_lower_limit1 = QString::number(distance_lower_limit);
    ui->distance_lower_limit->setText(distance_lower_limit1);//距离下限

    double poin_cloud_thickess = distance_lower_limit - distance_ceiling;
    poin_cloud_thickess1 = QString::number(poin_cloud_thickess);
    ui->poin_cloud_thickess->setText(poin_cloud_thickess1);

    }

 void mainwind::hfov()  {

 }
 void mainwind::focal_length() {
    number = number1.toDouble();//转换为数值
    numbertan = number / 2 / 180 * M_PI;
    focal_length1 = 0.003444 * 320 / tan(numbertan);
    bad = QString::number(focal_length1);
    ui->focal_length->setText(bad);//焦距
 }
 void mainwind::dis() {
 }
 void mainwind::pixel() {

     b = QString::number(pixelsize);
     ui->pixel->setText(b);

 }
 void mainwind::poin_cloud_thickess() {

}
 void mainwind::range() {
    range2 = focal_length1 * baseline / pixelsize /one_thousand ;
    range1 =QString::number(range2);
    ui->range->setText(range1);//量程
 }
 void mainwind::distance(){
     distance2 = focal_length1 * baseline / (pixelsize * dis1 ) / one_thousand;
     distance1 = QString::number(distance2);
     ui->distance->setText(distance1);//距离


 }
 void mainwind::distance_ceiling2() {

 }
 void mainwind::distance_lower_limit2() {

 }
 void mainwind::errordis3() {
 }
 void mainwind::baseline3(){
}
void mainwind::gagaga() {
    this->close();
    sanjiao *pis = new sanjiao();
    pis->show();
}
mainwind::~mainwind() {

    delete ui;

}