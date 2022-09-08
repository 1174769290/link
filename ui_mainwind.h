/********************************************************************************
** Form generated from reading UI file 'mainwind.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIND_H
#define UI_MAINWIND_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwind
{
public:
    QWidget *centralWidget;
    QLabel *b_3;
    QTextEdit *poin_cloud_thickess;
    QTextEdit *focal_length;
    QLineEdit *dis;
    QTextEdit *pixel;
    QLabel *b;
    QTextEdit *distance_ceiling;
    QTextEdit *distance;
    QLabel *b_7;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *baseline;
    QLabel *b_5;
    QLabel *b_8;
    QLineEdit *errordis;
    QTextEdit *distance_lower_limit;
    QLabel *b_2;
    QLabel *b_4;
    QLabel *label_2;
    QLabel *b_6;
    QPushButton *pushButton;
    QLineEdit *hfov;
    QLabel *f;
    QTextEdit *range;
    QPushButton *gagaga;
    QToolBar *toolBar;

    void setupUi(QMainWindow *mainwind)
    {
        if (mainwind->objectName().isEmpty())
            mainwind->setObjectName(QString::fromUtf8("mainwind"));
        mainwind->setWindowModality(Qt::NonModal);
        mainwind->setEnabled(true);
        mainwind->resize(501, 705);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(238, 238, 236, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(246, 246, 245, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(119, 119, 118, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(159, 159, 157, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        mainwind->setPalette(palette);
        mainwind->setCursor(QCursor(Qt::UpArrowCursor));
        mainwind->setTabletTracking(false);
        mainwind->setLayoutDirection(Qt::RightToLeft);
        mainwind->setAutoFillBackground(false);
        mainwind->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        mainwind->setDocumentMode(false);
        mainwind->setDockNestingEnabled(false);
        mainwind->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        mainwind->setUnifiedTitleAndToolBarOnMac(true);
        centralWidget = new QWidget(mainwind);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        b_3 = new QLabel(centralWidget);
        b_3->setObjectName(QString::fromUtf8("b_3"));
        b_3->setGeometry(QRect(450, 330, 30, 23));
        b_3->setAlignment(Qt::AlignCenter);
        poin_cloud_thickess = new QTextEdit(centralWidget);
        poin_cloud_thickess->setObjectName(QString::fromUtf8("poin_cloud_thickess"));
        poin_cloud_thickess->setEnabled(false);
        poin_cloud_thickess->setGeometry(QRect(40, 300, 151, 91));
        focal_length = new QTextEdit(centralWidget);
        focal_length->setObjectName(QString::fromUtf8("focal_length"));
        focal_length->setEnabled(false);
        focal_length->setGeometry(QRect(300, 130, 141, 71));
        dis = new QLineEdit(centralWidget);
        dis->setObjectName(QString::fromUtf8("dis"));
        dis->setGeometry(QRect(250, 600, 142, 25));
        pixel = new QTextEdit(centralWidget);
        pixel->setObjectName(QString::fromUtf8("pixel"));
        pixel->setEnabled(false);
        pixel->setGeometry(QRect(300, 210, 141, 81));
        b = new QLabel(centralWidget);
        b->setObjectName(QString::fromUtf8("b"));
        b->setGeometry(QRect(450, 240, 30, 23));
        b->setAlignment(Qt::AlignCenter);
        distance_ceiling = new QTextEdit(centralWidget);
        distance_ceiling->setObjectName(QString::fromUtf8("distance_ceiling"));
        distance_ceiling->setEnabled(false);
        distance_ceiling->setGeometry(QRect(39, 129, 151, 71));
        distance = new QTextEdit(centralWidget);
        distance->setObjectName(QString::fromUtf8("distance"));
        distance->setEnabled(false);
        distance->setGeometry(QRect(140, 400, 201, 51));
        b_7 = new QLabel(centralWidget);
        b_7->setObjectName(QString::fromUtf8("b_7"));
        b_7->setGeometry(QRect(210, 240, 60, 23));
        b_7->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 80, 180, 30));
        QPalette palette1;
        QBrush brush8(QColor(138, 226, 52, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush9(QColor(255, 255, 255, 127));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        label->setPalette(palette1);
        QFont font;
        font.setFamily(QString::fromUtf8("Sans"));
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 490, 65, 23));
        label_3->setAlignment(Qt::AlignCenter);
        baseline = new QLineEdit(centralWidget);
        baseline->setObjectName(QString::fromUtf8("baseline"));
        baseline->setGeometry(QRect(70, 600, 142, 25));
        b_5 = new QLabel(centralWidget);
        b_5->setObjectName(QString::fromUtf8("b_5"));
        b_5->setGeometry(QRect(290, 490, 53, 23));
        b_5->setAlignment(Qt::AlignCenter);
        b_8 = new QLabel(centralWidget);
        b_8->setObjectName(QString::fromUtf8("b_8"));
        b_8->setGeometry(QRect(210, 330, 60, 23));
        b_8->setAlignment(Qt::AlignCenter);
        errordis = new QLineEdit(centralWidget);
        errordis->setObjectName(QString::fromUtf8("errordis"));
        errordis->setGeometry(QRect(250, 530, 142, 25));
        distance_lower_limit = new QTextEdit(centralWidget);
        distance_lower_limit->setObjectName(QString::fromUtf8("distance_lower_limit"));
        distance_lower_limit->setEnabled(false);
        distance_lower_limit->setGeometry(QRect(40, 210, 151, 81));
        b_2 = new QLabel(centralWidget);
        b_2->setObjectName(QString::fromUtf8("b_2"));
        b_2->setGeometry(QRect(300, 570, 30, 23));
        b_2->setAlignment(Qt::AlignCenter);
        b_4 = new QLabel(centralWidget);
        b_4->setObjectName(QString::fromUtf8("b_4"));
        b_4->setGeometry(QRect(220, 460, 30, 23));
        b_4->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 570, 30, 23));
        label_2->setAlignment(Qt::AlignCenter);
        b_6 = new QLabel(centralWidget);
        b_6->setObjectName(QString::fromUtf8("b_6"));
        b_6->setGeometry(QRect(200, 160, 60, 23));
        b_6->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 640, 80, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 154, 6);"));
        hfov = new QLineEdit(centralWidget);
        hfov->setObjectName(QString::fromUtf8("hfov"));
        hfov->setGeometry(QRect(70, 530, 142, 25));
        f = new QLabel(centralWidget);
        f->setObjectName(QString::fromUtf8("f"));
        f->setGeometry(QRect(450, 160, 30, 23));
        f->setAlignment(Qt::AlignCenter);
        range = new QTextEdit(centralWidget);
        range->setObjectName(QString::fromUtf8("range"));
        range->setEnabled(false);
        range->setGeometry(QRect(300, 300, 141, 91));
        gagaga = new QPushButton(centralWidget);
        gagaga->setObjectName(QString::fromUtf8("gagaga"));
        gagaga->setGeometry(QRect(10, -10, 80, 31));
        gagaga->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 185, 110);"));
        mainwind->setCentralWidget(centralWidget);
        toolBar = new QToolBar(mainwind);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        mainwind->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(mainwind);

        QMetaObject::connectSlotsByName(mainwind);
    } // setupUi

    void retranslateUi(QMainWindow *mainwind)
    {
        mainwind->setWindowTitle(QApplication::translate("mainwind", "mainwind", nullptr));
        b_3->setText(QApplication::translate("mainwind", "\351\207\217\347\250\213", nullptr));
        b->setText(QApplication::translate("mainwind", "\345\203\217\347\264\240", nullptr));
        b_7->setText(QApplication::translate("mainwind", "\350\267\235\347\246\273\344\270\213\351\231\220", nullptr));
        label->setText(QApplication::translate("mainwind", "\345\217\214\347\233\256\346\221\204\345\203\217\345\244\264\350\257\257\345\267\256\350\256\241\347\256\227", nullptr));
        label_3->setText(QApplication::translate("mainwind", "\350\247\206\345\234\272\350\247\222\345\272\246\302\260", nullptr));
        b_5->setText(QApplication::translate("mainwind", "\350\257\257\345\267\256DIS", nullptr));
        b_8->setText(QApplication::translate("mainwind", "\347\202\271\344\272\221\345\216\232\345\272\246", nullptr));
        b_2->setText(QApplication::translate("mainwind", "\350\247\206\345\267\256", nullptr));
        b_4->setText(QApplication::translate("mainwind", "\350\267\235\347\246\273", nullptr));
        label_2->setText(QApplication::translate("mainwind", "\345\237\272\347\272\277", nullptr));
        b_6->setText(QApplication::translate("mainwind", "\350\267\235\347\246\273\344\270\212\351\231\220", nullptr));
        pushButton->setText(QApplication::translate("mainwind", "\345\274\200\345\247\213\350\256\241\347\256\227", nullptr));
        f->setText(QApplication::translate("mainwind", "\347\204\246\350\267\235", nullptr));
        gagaga->setText(QApplication::translate("mainwind", "\345\215\225FOV\350\256\241\347\256\227", nullptr));
        toolBar->setWindowTitle(QApplication::translate("mainwind", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwind: public Ui_mainwind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIND_H
