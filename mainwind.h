//
// Created by junjie on 2022/8/19.
//

#ifndef UNTITLED_MAINWIND_H
#define UNTITLED_MAINWIND_H
#include <QMainWindow>
#include <QDialog>
#include<QLabel>
#include<QPushButton>
#include<QLineEdit> //行编辑控件
#include<QHBoxLayout> //水平布局器
#include<QDoubleValidator>//验证器
#include <QString>
#include <string>
#include<QString>
#include<QDebug>
#include <cmath>
#include<QFileDialog>
#include<QFile>
#include<QKeyEvent>
#include "sanjiao.h"
#include "error.h"
#include "QErrorMessage"
QT_BEGIN_NAMESPACE
namespace Ui { class mainwind; }
QT_END_NAMESPACE

class mainwind : public QMainWindow {
Q_OBJECT


public:
    explicit mainwind(QWidget *parent = nullptr);

    ~mainwind() override;
//    QString number1,number2,number3,number4,b,range1,distance1,distance_ceiling1,bad,distance_lower_limit1,poin_cloud_thickess1;
//    double pixelsize,numbertan,one_thousand,focal_length1,range2,distance2,baseline,dis1,errordis,number;
//    bool ok;

 private slots:
    void focal_length();//
    void hfov();//
    void dis();//
    void pixel();//
    void poin_cloud_thickess();
    void range();//
    void distance();//
    void distance_ceiling2();
    void distance_lower_limit2();
    void errordis3();
    void pushButtun();
    void baseline3();//
    void gagaga();



private:
    Ui::mainwind *ui;
    QString number1,number2,number3,number4,b,range1,distance1,distance_ceiling1,bad,distance_lower_limit1,poin_cloud_thickess1;
    double pixelsize,numbertan,one_thousand,focal_length1,range2,distance2,baseline,dis1,errordis,number;
    bool ok;


};


#endif //UNTITLED_MAINWIND_H
