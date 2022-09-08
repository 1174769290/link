//
// Created by junjie on 2022/8/31.
//

#ifndef RUN_SANJIAO_H
#define RUN_SANJIAO_H
#include "mainwind.h"
#include <QWidget>
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
#include "error.h"
#include <ctype.h>
#include "ios"

QT_BEGIN_NAMESPACE
namespace Ui { class sanjiao; }
QT_END_NAMESPACE

class sanjiao : public QWidget {
Q_OBJECT

public:
    explicit sanjiao(QWidget *parent = nullptr);

    ~sanjiao() override;


 private slots:
     void textEdit();
     void lineEdit_2();
     void lineEdit();
     void pushButton();
//     void lineEdit_8();

private:
    Ui::sanjiao *ui;
    struct number{
        QString dx,fx,field_of_view,gg;
        double cx,end,high,num=0.5,size=2,one_hundred=100;

    };
    number str;
    bool ok;




};


#endif //RUN_SANJIAO_H
