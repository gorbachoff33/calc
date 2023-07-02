/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *calc;
    QWidget *tab;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_iks;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_div;
    QLabel *label_4;
    QLabel *label_3;
    QPushButton *pushButton_9;
    QLabel *label_2;
    QPushButton *pushButton_equel;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_skob;
    QPushButton *pushButton_2;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_3;
    QPushButton *pushButton_log;
    QPushButton *pushButton_6;
    QPushButton *pushButton_skob_2;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_invers;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_tan;
    QLabel *label;
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;
    QLabel *result_show;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_asin;
    QLabel *result_show_2;
    QPushButton *pushButton_toch;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_acos;
    QDoubleSpinBox *oc_x_min;
    QDoubleSpinBox *oc_x_max;
    QDoubleSpinBox *oc_y_min;
    QDoubleSpinBox *oc_y_max;
    QLabel *label_12;
    QLabel *label_22;
    QWidget *tab_3;
    QCustomPlot *widget;
    QWidget *tab_2;
    QLabel *label_5;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QPushButton *itog_aut;
    QDoubleSpinBox *proc_aut;
    QLabel *label_11;
    QLabel *label_10;
    QDoubleSpinBox *srok_kred_aut;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *sum_mes_aut;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *nach_proc_aut;
    QLabel *dolg_aut;
    QLabel *label_26;
    QLabel *label_27;
    QDoubleSpinBox *sum_kred_aut;
    QWidget *tab_5;
    QLabel *label_15;
    QDoubleSpinBox *sum_kred_dif;
    QLabel *label_16;
    QLabel *label_17;
    QDoubleSpinBox *srok_kred_dif;
    QLabel *label_18;
    QLabel *label_19;
    QDoubleSpinBox *proc_dif;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *sum_mes_dif;
    QLabel *label_23;
    QPushButton *itog_dif;
    QLabel *dolg_dif;
    QLabel *nach_proc_dif;
    QLabel *label_30;
    QLabel *label_31;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(672, 507);
        MainWindow->setMinimumSize(QSize(672, 507));
        MainWindow->setMaximumSize(QSize(672, 507));
        QFont font;
        font.setPointSize(11);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        calc = new QTabWidget(centralwidget);
        calc->setObjectName(QString::fromUtf8("calc"));
        calc->setGeometry(QRect(0, 0, 666, 507));
        calc->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
""));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setEnabled(true);
        pushButton_5->setGeometry(QRect(334, 270, 81, 81));
        pushButton_5->setMinimumSize(QSize(61, 61));
        pushButton_5->setBaseSize(QSize(16, 16));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 0, 0);\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: qlineargradient(x1: 0, y1: 0 x: 0, y2: 1,\n"
"														stop: 0 #000000, stop: 1 #000000);\n"
"}"));
        pushButton_8 = new QPushButton(tab);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setEnabled(true);
        pushButton_8->setGeometry(QRect(334, 189, 81, 81));
        pushButton_8->setMinimumSize(QSize(61, 61));
        pushButton_8->setBaseSize(QSize(16, 16));
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 0, 0);\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: qlineargradient(x1: 0, y1: 0 x: 0, y2: 1,\n"
"														stop: 0 #000000, stop: 1 #000000);\n"
"}"));
        pushButton_iks = new QPushButton(tab);
        pushButton_iks->setObjectName(QString::fromUtf8("pushButton_iks"));
        pushButton_iks->setEnabled(true);
        pushButton_iks->setGeometry(QRect(496, 189, 81, 81));
        pushButton_iks->setMinimumSize(QSize(61, 61));
        pushButton_iks->setBaseSize(QSize(16, 16));
        pushButton_iks->setFont(font1);
        pushButton_iks->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 0, 0);\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: qlineargradient(x1: 0, y1: 0 x: 0, y2: 1,\n"
"														stop: 0 #000000, stop: 1 #000000);\n"
"}"));
        pushButton_AC = new QPushButton(tab);
        pushButton_AC->setObjectName(QString::fromUtf8("pushButton_AC"));
        pushButton_AC->setEnabled(true);
        pushButton_AC->setGeometry(QRect(253, 108, 81, 81));
        pushButton_AC->setMinimumSize(QSize(61, 61));
        pushButton_AC->setBaseSize(QSize(16, 16));
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(true);
        pushButton_AC->setFont(font2);
        pushButton_AC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"														stop: 0 #FF0000, stop: 1 #FF0000);\n"
"}"));
        pushButton_div = new QPushButton(tab);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setEnabled(true);
        pushButton_div->setGeometry(QRect(496, 108, 81, 81));
        pushButton_div->setMinimumSize(QSize(61, 61));
        pushButton_div->setBaseSize(QSize(16, 16));
        pushButton_div->setFont(font1);
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"														stop: 0 #FF0000, stop: 1 #FF0000);\n"
"}"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(8, 100, 646, 8));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgb(0, 0, 0);\n"
"	border: 4px solid black;\n"
"}"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(8, 1, 646, 8));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgb(0, 0, 0);\n"
"	border: 4px solid black;\n"
"}"));
        pushButton_9 = new QPushButton(tab);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setEnabled(true);
        pushButton_9->setGeometry(QRect(415, 189, 81, 81));
        pushButton_9->setMinimumSize(QSize(61, 61));
        pushButton_9->setBaseSize(QSize(16, 16));
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 0, 0);\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: qlineargradient(x1: 0, y1: 0 x: 0, y2: 1,\n"
"														stop: 0 #000000, stop: 1 #000000);\n"
"}"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(3, 1, 8, 107));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgb(0, 0, 0);\n"
"	border: 4px solid black;\n"
"}"));
        pushButton_equel = new QPushButton(tab);
        pushButton_equel->setObjectName(QString::fromUtf8("pushButton_equel"));
        pushButton_equel->setEnabled(true);
        pushButton_equel->setGeometry(QRect(577, 351, 81, 81));
        pushButton_equel->setMinimumSize(QSize(61, 61));
        pushButton_equel->setBaseSize(QSize(16, 16));
        pushButton_equel->setFont(font1);
        pushButton_equel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"														stop: 0 #FF0000, stop: 1 #FF0000);\n"
"}"));
        pushButton_plus = new QPushButton(tab);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setEnabled(true);
        pushButton_plus->setGeometry(QRect(577, 270, 81, 81));
        pushButton_plus->setMinimumSize(QSize(61, 61));
        pushButton_plus->setBaseSize(QSize(16, 16));
        pushButton_plus->setFont(font1);
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"														stop: 0 #FF0000, stop: 1 #FF0000);\n"
"}"));
        pushButton_sqrt = new QPushButton(tab);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setEnabled(true);
        pushButton_sqrt->setGeometry(QRect(172, 108, 81, 81));
        pushButton_sqrt->setMinimumSize(QSize(61, 61));
        pushButton_sqrt->setBaseSize(QSize(16, 16));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        pushButton_sqrt->setFont(font3);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"														stop: 0 #FF0000, stop: 1 #FF0000);\n"
"}"));
        pushButton_mul = new QPushButton(tab);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setEnabled(true);
        pushButton_mul->setGeometry(QRect(577, 108, 81, 81));
        pushButton_mul->setMinimumSize(QSize(61, 61));
        pushButton_mul->setBaseSize(QSize(16, 16));
        pushButton_mul->setFont(font2);
        pushButton_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"														stop: 0 #FF0000, stop: 1 #FF0000);\n"
"}"));
        pushButton_mod = new QPushButton(tab);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setEnabled(true);
        pushButton_mod->setGeometry(QRect(91, 108, 81, 81));
        pushButton_mod->setMinimumSize(QSize(61, 61));
        pushButton_mod->setBaseSize(QSize(16, 16));
        pushButton_mod->setFont(font3);
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"														stop: 0 #FF0000, stop: 1 #FF0000);\n"
"}"));
        pushButton_skob = new QPushButton(tab);
        pushButton_skob->setObjectName(QString::fromUtf8("pushButton_skob"));
        pushButton_skob->setEnabled(true);
        pushButton_skob->setGeometry(QRect(334, 108, 81, 81));
        pushButton_skob->setMinimumSize(QSize(61, 61));
        pushButton_skob->setBaseSize(QSize(16, 16));
        pushButton_skob->setFont(font2);
        pushButton_skob->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"														stop: 0 #FF0000, stop: 1 #FF0000);\n"
"}"));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(334, 351, 81, 81));
        pushButton_2->setMinimumSize(QSize(61, 61));
        pushButton_2->setBaseSize(QSize(16, 16));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 0, 0);\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: qlineargradient(x1: 0, y1: 0 x: 0, y2: 1,\n"
"														stop: 0 #000000, stop: 1 #000000);\n"
"}"));
        pushButton_atan = new QPushButton(tab);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setEnabled(true);
        pushButton_atan->setGeometry(QRect(10, 351, 81, 81));
        pushButton_atan->setMinimumSize(QSize(61, 61));
        pushButton_atan->setBaseSize(QSize(16, 16));
        pushButton_atan->setFont(font3);
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"														stop: 0 #FF0000, stop: 1 #FF0000);\n"
"}"));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(true);
        pushButton_3->setGeometry(QRect(415, 351, 81, 81));
        pushButton_3->setMinimumSize(QSize(61, 61));
        pushButton_3->setBaseSize(QSize(16, 16));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 0, 0);\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: qlineargradient(x1: 0, y1: 0 x: 0, y2: 1,\n"
"														stop: 0 #000000, stop: 1 #000000);\n"
"}"));
        pushButton_log = new QPushButton(tab);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setEnabled(true);
        pushButton_log->setGeometry(QRect(172, 351, 81, 81));
        pushButton_log->setMinimumSize(QSize(61, 61));
        pushButton_log->setBaseSize(QSize(16, 16));
        pushButton_log->setFont(font3);
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"														stop: 0 #FF0000, stop: 1 #FF0000);\n"
"}"));
        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setEnabled(true);
        pushButton_6->setGeometry(QRect(415, 270, 81, 81));
        pushButton_6->setMinimumSize(QSize(61, 61));
        pushButton_6->setBaseSize(QSize(16, 16));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 0, 0);\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: qlineargradient(x1: 0, y1: 0 x: 0, y2: 1,\n"
"														stop: 0 #000000, stop: 1 #000000);\n"
"}"));
        pushButton_skob_2 = new QPushButton(tab);
        pushButton_skob_2->setObjectName(QString::fromUtf8("pushButton_skob_2"));
        pushButton_skob_2->setEnabled(true);
        pushButton_skob_2->setGeometry(QRect(415, 108, 81, 81));
        pushButton_skob_2->setMinimumSize(QSize(61, 61));
        pushButton_skob_2->setBaseSize(QSize(16, 16));
        pushButton_skob_2->setFont(font2);
        pushButton_skob_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"														stop: 0 #FF0000, stop: 1 #FF0000);\n"
"}"));
        pushButton_cos = new QPushButton(tab);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setEnabled(true);
        pushButton_cos->setGeometry(QRect(91, 189, 81, 81));
        pushButton_cos->setMinimumSize(QSize(61, 61));
        pushButton_cos->setBaseSize(QSize(16, 16));
        pushButton_cos->setFont(font3);
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"														stop: 0 #FF0000, stop: 1 #FF0000);\n"
"}"));
        pushButton_sin = new QPushButton(tab);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setEnabled(true);
        pushButton_sin->setGeometry(QRect(91, 270, 81, 81));
        pushButton_sin->setMinimumSize(QSize(61, 61));
        pushButton_sin->setBaseSize(QSize(16, 16));
        pushButton_sin->setFont(font3);
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"														stop: 0 #FF0000, stop: 1 #FF0000);\n"
"}"));
        pushButton_invers = new QPushButton(tab);
        pushButton_invers->setObjectName(QString::fromUtf8("pushButton_invers"));
        pushButton_invers->setEnabled(true);
        pushButton_invers->setGeometry(QRect(10, 108, 81, 81));
        pushButton_invers->setMinimumSize(QSize(61, 61));
        pushButton_invers->setBaseSize(QSize(16, 16));
        pushButton_invers->setFont(font2);
        pushButton_invers->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"														stop: 0 #FF0000, stop: 1 #FF0000);\n"
"}"));
        pushButton_minus = new QPushButton(tab);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setEnabled(true);
        pushButton_minus->setGeometry(QRect(577, 189, 81, 81));
        pushButton_minus->setMinimumSize(QSize(61, 61));
        pushButton_minus->setBaseSize(QSize(16, 16));
        pushButton_minus->setFont(font1);
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"														stop: 0 #FF0000, stop: 1 #FF0000);\n"
"}"));
        pushButton_tan = new QPushButton(tab);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setEnabled(true);
        pushButton_tan->setGeometry(QRect(91, 351, 81, 81));
        pushButton_tan->setMinimumSize(QSize(61, 61));
        pushButton_tan->setBaseSize(QSize(16, 16));
        pushButton_tan->setFont(font3);
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"														stop: 0 #FF0000, stop: 1 #FF0000);\n"
"}"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(652, 1, 8, 107));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgb(0, 0, 0);\n"
"	border: 4px solid black;\n"
"}"));
        pushButton_0 = new QPushButton(tab);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setEnabled(true);
        pushButton_0->setGeometry(QRect(496, 351, 81, 81));
        pushButton_0->setMinimumSize(QSize(61, 61));
        pushButton_0->setBaseSize(QSize(16, 16));
        pushButton_0->setFont(font1);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 0, 0);\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: qlineargradient(x1: 0, y1: 0 x: 0, y2: 1,\n"
"														stop: 0 #000000, stop: 1 #000000);\n"
"}"));
        pushButton_1 = new QPushButton(tab);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setEnabled(true);
        pushButton_1->setGeometry(QRect(253, 351, 81, 81));
        pushButton_1->setMinimumSize(QSize(61, 61));
        pushButton_1->setBaseSize(QSize(16, 16));
        pushButton_1->setFont(font1);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 0, 0);\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: qlineargradient(x1: 0, y1: 0 x: 0, y2: 1,\n"
"														stop: 0 #000000, stop: 1 #000000);\n"
"}"));
        result_show = new QLabel(tab);
        result_show->setObjectName(QString::fromUtf8("result_show"));
        result_show->setGeometry(QRect(10, 57, 647, 47));
        result_show->setMinimumSize(QSize(350, 37));
        QFont font4;
        font4.setPointSize(30);
        result_show->setFont(font4);
        result_show->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgb(120, 250, 0);\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	border: 0px solid black;\n"
"}\n"
"\n"
"background-color : white;"));
        pushButton_ln = new QPushButton(tab);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setEnabled(true);
        pushButton_ln->setGeometry(QRect(172, 270, 81, 81));
        pushButton_ln->setMinimumSize(QSize(61, 61));
        pushButton_ln->setBaseSize(QSize(16, 16));
        pushButton_ln->setFont(font2);
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"														stop: 0 #FF0000, stop: 1 #FF0000);\n"
"}"));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setEnabled(true);
        pushButton_4->setGeometry(QRect(253, 270, 81, 81));
        pushButton_4->setMinimumSize(QSize(61, 61));
        pushButton_4->setBaseSize(QSize(16, 16));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 0, 0);\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: qlineargradient(x1: 0, y1: 0 x: 0, y2: 1,\n"
"														stop: 0 #000000, stop: 1 #000000);\n"
"}"));
        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setEnabled(true);
        pushButton_7->setGeometry(QRect(253, 189, 81, 81));
        pushButton_7->setMinimumSize(QSize(61, 61));
        pushButton_7->setBaseSize(QSize(16, 16));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 0, 0);\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: qlineargradient(x1: 0, y1: 0 x: 0, y2: 1,\n"
"														stop: 0 #000000, stop: 1 #000000);\n"
"}"));
        pushButton_asin = new QPushButton(tab);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setEnabled(true);
        pushButton_asin->setGeometry(QRect(10, 270, 81, 81));
        pushButton_asin->setMinimumSize(QSize(61, 61));
        pushButton_asin->setBaseSize(QSize(16, 16));
        pushButton_asin->setFont(font3);
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"														stop: 0 #FF0000, stop: 1 #FF0000);\n"
"}"));
        result_show_2 = new QLabel(tab);
        result_show_2->setObjectName(QString::fromUtf8("result_show_2"));
        result_show_2->setGeometry(QRect(10, 5, 647, 53));
        result_show_2->setMinimumSize(QSize(350, 37));
        QFont font5;
        font5.setPointSize(12);
        result_show_2->setFont(font5);
        result_show_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgb(120, 250, 0);\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	border: 0px solid black;\n"
"}\n"
"\n"
"background-color : white;"));
        result_show_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        pushButton_toch = new QPushButton(tab);
        pushButton_toch->setObjectName(QString::fromUtf8("pushButton_toch"));
        pushButton_toch->setEnabled(true);
        pushButton_toch->setGeometry(QRect(496, 270, 81, 81));
        pushButton_toch->setMinimumSize(QSize(61, 61));
        pushButton_toch->setBaseSize(QSize(16, 16));
        pushButton_toch->setFont(font1);
        pushButton_toch->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 0, 0);\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: qlineargradient(x1: 0, y1: 0 x: 0, y2: 1,\n"
"														stop: 0 #000000, stop: 1 #000000);\n"
"}"));
        pushButton_pow = new QPushButton(tab);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
        pushButton_pow->setEnabled(true);
        pushButton_pow->setGeometry(QRect(172, 189, 81, 81));
        pushButton_pow->setMinimumSize(QSize(61, 61));
        pushButton_pow->setBaseSize(QSize(16, 16));
        pushButton_pow->setFont(font1);
        pushButton_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"														stop: 0 #FF0000, stop: 1 #FF0000);\n"
"}"));
        pushButton_acos = new QPushButton(tab);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setEnabled(true);
        pushButton_acos->setGeometry(QRect(10, 189, 81, 81));
        pushButton_acos->setMinimumSize(QSize(61, 61));
        pushButton_acos->setBaseSize(QSize(16, 16));
        pushButton_acos->setFont(font3);
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"														stop: 0 #FF0000, stop: 1 #FF0000);\n"
"}"));
        oc_x_min = new QDoubleSpinBox(tab);
        oc_x_min->setObjectName(QString::fromUtf8("oc_x_min"));
        oc_x_min->setGeometry(QRect(27, 445, 110, 22));
        QFont font6;
        font6.setPointSize(16);
        oc_x_min->setFont(font6);
        oc_x_min->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 250, 0);\n"
"color:black;\n"
""));
        oc_x_min->setAlignment(Qt::AlignCenter);
        oc_x_min->setDecimals(0);
        oc_x_min->setMinimum(-1000000.000000000000000);
        oc_x_min->setMaximum(1000000.000000000000000);
        oc_x_min->setStepType(QAbstractSpinBox::AdaptiveDecimalStepType);
        oc_x_min->setValue(-10.000000000000000);
        oc_x_max = new QDoubleSpinBox(tab);
        oc_x_max->setObjectName(QString::fromUtf8("oc_x_max"));
        oc_x_max->setGeometry(QRect(197, 445, 110, 22));
        oc_x_max->setFont(font6);
        oc_x_max->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 250, 0);\n"
"color:black;\n"
""));
        oc_x_max->setAlignment(Qt::AlignCenter);
        oc_x_max->setDecimals(0);
        oc_x_max->setMinimum(-1000000.000000000000000);
        oc_x_max->setMaximum(1000000.000000000000000);
        oc_x_max->setValue(10.000000000000000);
        oc_y_min = new QDoubleSpinBox(tab);
        oc_y_min->setObjectName(QString::fromUtf8("oc_y_min"));
        oc_y_min->setGeometry(QRect(364, 445, 110, 22));
        oc_y_min->setFont(font6);
        oc_y_min->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 250, 0);\n"
"color:black;\n"
""));
        oc_y_min->setAlignment(Qt::AlignCenter);
        oc_y_min->setDecimals(0);
        oc_y_min->setMinimum(-1000000.000000000000000);
        oc_y_min->setMaximum(1000000.000000000000000);
        oc_y_min->setValue(-10.000000000000000);
        oc_y_max = new QDoubleSpinBox(tab);
        oc_y_max->setObjectName(QString::fromUtf8("oc_y_max"));
        oc_y_max->setGeometry(QRect(534, 445, 110, 22));
        oc_y_max->setFont(font6);
        oc_y_max->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 250, 0);\n"
"color:black;\n"
""));
        oc_y_max->setAlignment(Qt::AlignCenter);
        oc_y_max->setDecimals(0);
        oc_y_max->setMinimum(-1000000.000000000000000);
        oc_y_max->setMaximum(1000000.000000000000000);
        oc_y_max->setValue(10.000000000000000);
        label_12 = new QLabel(tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(137, 445, 60, 22));
        QFont font7;
        font7.setPointSize(15);
        font7.setBold(true);
        label_12->setFont(font7);
        label_12->setStyleSheet(QString::fromUtf8("color:red;"));
        label_12->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(tab);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(474, 445, 60, 22));
        label_22->setFont(font7);
        label_22->setStyleSheet(QString::fromUtf8("color:red;"));
        label_22->setAlignment(Qt::AlignCenter);
        calc->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        widget = new QCustomPlot(tab_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(15, 0, 636, 461));
        QFont font8;
        font8.setPointSize(13);
        font8.setBold(false);
        widget->setFont(font8);
        widget->setLayoutDirection(Qt::LeftToRight);
        widget->setStyleSheet(QString::fromUtf8(""));
        calc->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(248, 10, 170, 20));
        label_5->setFont(font7);
        label_5->setStyleSheet(QString::fromUtf8("color:red;"));
        label_5->setAlignment(Qt::AlignCenter);
        tabWidget = new QTabWidget(tab_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 40, 652, 431));
        tabWidget->setFocusPolicy(Qt::WheelFocus);
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        itog_aut = new QPushButton(tab_4);
        itog_aut->setObjectName(QString::fromUtf8("itog_aut"));
        itog_aut->setGeometry(QRect(275, 325, 116, 32));
        itog_aut->setFont(font7);
        itog_aut->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 0, 0);\n"
"	color: black;\n"
"	border: 3px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: rgb(120, 250, 0);\n"
"	border: 3px solid red;\n"
"}\n"
""));
        proc_aut = new QDoubleSpinBox(tab_4);
        proc_aut->setObjectName(QString::fromUtf8("proc_aut"));
        proc_aut->setGeometry(QRect(274, 170, 110, 22));
        proc_aut->setFont(font6);
        proc_aut->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 250, 0);\n"
"color:black;\n"
""));
        proc_aut->setAlignment(Qt::AlignCenter);
        proc_aut->setDecimals(2);
        proc_aut->setMinimum(0.010000000000000);
        proc_aut->setMaximum(999.000000000000000);
        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(388, 170, 20, 22));
        label_11->setStyleSheet(QString::fromUtf8("color:white;"));
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(243, 140, 180, 22));
        label_10->setFont(font7);
        label_10->setStyleSheet(QString::fromUtf8("color:red;"));
        label_10->setAlignment(Qt::AlignCenter);
        srok_kred_aut = new QDoubleSpinBox(tab_4);
        srok_kred_aut->setObjectName(QString::fromUtf8("srok_kred_aut"));
        srok_kred_aut->setGeometry(QRect(274, 110, 110, 22));
        srok_kred_aut->setFont(font6);
        srok_kred_aut->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 250, 0);\n"
"color:black;\n"
""));
        srok_kred_aut->setAlignment(Qt::AlignCenter);
        srok_kred_aut->setDecimals(0);
        srok_kred_aut->setMinimum(1.000000000000000);
        srok_kred_aut->setMaximum(600.000000000000000);
        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(388, 110, 30, 22));
        label_9->setStyleSheet(QString::fromUtf8("color:white;"));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(268, 80, 130, 22));
        label_8->setFont(font7);
        label_8->setStyleSheet(QString::fromUtf8("color:red;"));
        label_8->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(tab_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(472, 50, 35, 22));
        label_7->setStyleSheet(QString::fromUtf8("color:white;"));
        label_7->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(tab_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(263, 20, 140, 22));
        label_6->setFont(font7);
        label_6->setStyleSheet(QString::fromUtf8("color:red;"));
        label_6->setAlignment(Qt::AlignCenter);
        sum_mes_aut = new QLabel(tab_4);
        sum_mes_aut->setObjectName(QString::fromUtf8("sum_mes_aut"));
        sum_mes_aut->setGeometry(QRect(61, 270, 150, 22));
        QFont font9;
        font9.setPointSize(20);
        sum_mes_aut->setFont(font9);
        sum_mes_aut->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 250, 0);"));
        sum_mes_aut->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(96, 235, 60, 22));
        label_13->setStyleSheet(QString::fromUtf8("color:white;"));
        label_13->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(tab_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(303, 200, 60, 22));
        label_14->setFont(font7);
        label_14->setStyleSheet(QString::fromUtf8("color:red;"));
        label_14->setAlignment(Qt::AlignCenter);
        nach_proc_aut = new QLabel(tab_4);
        nach_proc_aut->setObjectName(QString::fromUtf8("nach_proc_aut"));
        nach_proc_aut->setGeometry(QRect(261, 270, 150, 22));
        nach_proc_aut->setFont(font9);
        nach_proc_aut->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 250, 0);"));
        nach_proc_aut->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dolg_aut = new QLabel(tab_4);
        dolg_aut->setObjectName(QString::fromUtf8("dolg_aut"));
        dolg_aut->setGeometry(QRect(461, 270, 150, 22));
        dolg_aut->setFont(font9);
        dolg_aut->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 250, 0);"));
        dolg_aut->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_26 = new QLabel(tab_4);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(236, 235, 180, 22));
        label_26->setStyleSheet(QString::fromUtf8("color:white;"));
        label_26->setAlignment(Qt::AlignCenter);
        label_27 = new QLabel(tab_4);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(461, 235, 130, 22));
        label_27->setStyleSheet(QString::fromUtf8("color:white;"));
        label_27->setAlignment(Qt::AlignCenter);
        sum_kred_aut = new QDoubleSpinBox(tab_4);
        sum_kred_aut->setObjectName(QString::fromUtf8("sum_kred_aut"));
        sum_kred_aut->setGeometry(QRect(198, 50, 270, 22));
        sum_kred_aut->setFont(font6);
        sum_kred_aut->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 250, 0);\n"
"color:black;\n"
""));
        sum_kred_aut->setAlignment(Qt::AlignCenter);
        sum_kred_aut->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        sum_kred_aut->setDecimals(2);
        sum_kred_aut->setMinimum(1.000000000000000);
        sum_kred_aut->setMaximum(400000000000.000000000000000);
        sum_kred_aut->setSingleStep(1000.000000000000000);
        sum_kred_aut->setValue(1.000000000000000);
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        label_15 = new QLabel(tab_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(263, 20, 140, 22));
        label_15->setFont(font7);
        label_15->setStyleSheet(QString::fromUtf8("color:red;"));
        label_15->setAlignment(Qt::AlignCenter);
        sum_kred_dif = new QDoubleSpinBox(tab_5);
        sum_kred_dif->setObjectName(QString::fromUtf8("sum_kred_dif"));
        sum_kred_dif->setGeometry(QRect(198, 50, 270, 22));
        sum_kred_dif->setFont(font6);
        sum_kred_dif->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 250, 0);\n"
"color:black;\n"
""));
        sum_kred_dif->setAlignment(Qt::AlignCenter);
        sum_kred_dif->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        sum_kred_dif->setDecimals(2);
        sum_kred_dif->setMinimum(1.000000000000000);
        sum_kred_dif->setMaximum(400000000000.000000000000000);
        sum_kred_dif->setSingleStep(1000.000000000000000);
        sum_kred_dif->setValue(1.000000000000000);
        label_16 = new QLabel(tab_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(472, 50, 35, 22));
        label_16->setStyleSheet(QString::fromUtf8("color:white;"));
        label_16->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(tab_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(268, 80, 130, 22));
        label_17->setFont(font7);
        label_17->setStyleSheet(QString::fromUtf8("color:red;"));
        label_17->setAlignment(Qt::AlignCenter);
        srok_kred_dif = new QDoubleSpinBox(tab_5);
        srok_kred_dif->setObjectName(QString::fromUtf8("srok_kred_dif"));
        srok_kred_dif->setGeometry(QRect(274, 110, 110, 22));
        srok_kred_dif->setFont(font6);
        srok_kred_dif->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 250, 0);\n"
"color:black;\n"
""));
        srok_kred_dif->setAlignment(Qt::AlignCenter);
        srok_kred_dif->setDecimals(0);
        srok_kred_dif->setMinimum(1.000000000000000);
        srok_kred_dif->setMaximum(600.000000000000000);
        label_18 = new QLabel(tab_5);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(388, 110, 30, 22));
        label_18->setStyleSheet(QString::fromUtf8("color:white;"));
        label_19 = new QLabel(tab_5);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(243, 140, 180, 22));
        label_19->setFont(font7);
        label_19->setStyleSheet(QString::fromUtf8("color:red;"));
        label_19->setAlignment(Qt::AlignCenter);
        proc_dif = new QDoubleSpinBox(tab_5);
        proc_dif->setObjectName(QString::fromUtf8("proc_dif"));
        proc_dif->setGeometry(QRect(274, 170, 110, 22));
        proc_dif->setFont(font6);
        proc_dif->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 250, 0);\n"
"color:black;\n"
""));
        proc_dif->setAlignment(Qt::AlignCenter);
        proc_dif->setDecimals(2);
        proc_dif->setMinimum(0.010000000000000);
        proc_dif->setMaximum(999.000000000000000);
        label_20 = new QLabel(tab_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(388, 170, 20, 22));
        label_20->setStyleSheet(QString::fromUtf8("color:white;"));
        label_21 = new QLabel(tab_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(303, 200, 60, 22));
        label_21->setFont(font7);
        label_21->setStyleSheet(QString::fromUtf8("color:red;"));
        label_21->setAlignment(Qt::AlignCenter);
        sum_mes_dif = new QLabel(tab_5);
        sum_mes_dif->setObjectName(QString::fromUtf8("sum_mes_dif"));
        sum_mes_dif->setGeometry(QRect(51, 270, 200, 22));
        sum_mes_dif->setFont(font9);
        sum_mes_dif->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 250, 0);"));
        sum_mes_dif->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_23 = new QLabel(tab_5);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(121, 235, 63, 16));
        label_23->setStyleSheet(QString::fromUtf8("color:white;"));
        label_23->setAlignment(Qt::AlignCenter);
        itog_dif = new QPushButton(tab_5);
        itog_dif->setObjectName(QString::fromUtf8("itog_dif"));
        itog_dif->setGeometry(QRect(275, 325, 116, 32));
        itog_dif->setFont(font7);
        itog_dif->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 0, 0);\n"
"	color: black;\n"
"	border: 3px solid white;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: black;\n"
"	background-color: rgb(120, 250, 0);\n"
"	border: 3px solid red;\n"
"}\n"
""));
        dolg_dif = new QLabel(tab_5);
        dolg_dif->setObjectName(QString::fromUtf8("dolg_dif"));
        dolg_dif->setGeometry(QRect(451, 270, 150, 22));
        dolg_dif->setFont(font9);
        dolg_dif->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 250, 0);"));
        dolg_dif->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        nach_proc_dif = new QLabel(tab_5);
        nach_proc_dif->setObjectName(QString::fromUtf8("nach_proc_dif"));
        nach_proc_dif->setGeometry(QRect(276, 270, 150, 22));
        nach_proc_dif->setFont(font9);
        nach_proc_dif->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 250, 0);"));
        nach_proc_dif->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_30 = new QLabel(tab_5);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(261, 235, 180, 22));
        label_30->setStyleSheet(QString::fromUtf8("color:white;"));
        label_30->setAlignment(Qt::AlignCenter);
        label_31 = new QLabel(tab_5);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(461, 235, 130, 22));
        label_31->setStyleSheet(QString::fromUtf8("color:white;"));
        label_31->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_5, QString());
        calc->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(pushButton_AC, pushButton_skob);
        QWidget::setTabOrder(pushButton_skob, pushButton_mod);
        QWidget::setTabOrder(pushButton_mod, pushButton_div);
        QWidget::setTabOrder(pushButton_div, pushButton_atan);
        QWidget::setTabOrder(pushButton_atan, pushButton_7);
        QWidget::setTabOrder(pushButton_7, pushButton_mul);
        QWidget::setTabOrder(pushButton_mul, pushButton_tan);
        QWidget::setTabOrder(pushButton_tan, pushButton_8);
        QWidget::setTabOrder(pushButton_8, pushButton_9);
        QWidget::setTabOrder(pushButton_9, pushButton_acos);
        QWidget::setTabOrder(pushButton_acos, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pushButton_minus);
        QWidget::setTabOrder(pushButton_minus, pushButton_cos);
        QWidget::setTabOrder(pushButton_cos, pushButton_5);
        QWidget::setTabOrder(pushButton_5, pushButton_6);
        QWidget::setTabOrder(pushButton_6, pushButton_asin);
        QWidget::setTabOrder(pushButton_asin, pushButton_1);
        QWidget::setTabOrder(pushButton_1, pushButton_plus);
        QWidget::setTabOrder(pushButton_plus, pushButton_sin);
        QWidget::setTabOrder(pushButton_sin, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton_log);
        QWidget::setTabOrder(pushButton_log, pushButton_equel);
        QWidget::setTabOrder(pushButton_equel, pushButton_ln);
        QWidget::setTabOrder(pushButton_ln, pushButton_0);
        QWidget::setTabOrder(pushButton_0, pushButton_toch);
        QWidget::setTabOrder(pushButton_toch, pushButton_pow);
        QWidget::setTabOrder(pushButton_pow, pushButton_skob_2);
        QWidget::setTabOrder(pushButton_skob_2, pushButton_iks);
        QWidget::setTabOrder(pushButton_iks, pushButton_invers);
        QWidget::setTabOrder(pushButton_invers, calc);
        QWidget::setTabOrder(calc, itog_aut);
        QWidget::setTabOrder(itog_aut, tabWidget);
        QWidget::setTabOrder(tabWidget, sum_kred_aut);
        QWidget::setTabOrder(sum_kred_aut, srok_kred_aut);
        QWidget::setTabOrder(srok_kred_aut, sum_kred_dif);
        QWidget::setTabOrder(sum_kred_dif, srok_kred_dif);
        QWidget::setTabOrder(srok_kred_dif, proc_dif);
        QWidget::setTabOrder(proc_dif, itog_dif);
        QWidget::setTabOrder(itog_dif, pushButton_sqrt);
        QWidget::setTabOrder(pushButton_sqrt, proc_aut);

        retranslateUi(MainWindow);

        calc->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_iks->setText(QCoreApplication::translate("MainWindow", "(x)", nullptr));
        pushButton_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_equel->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton_skob->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log10", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_skob_2->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_invers->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        result_show->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        result_show_2->setText(QString());
        pushButton_toch->setText(QCoreApplication::translate("MainWindow", ",", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\236\320\241\320\254 \320\245", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\320\236\320\241\320\254 \320\243", nullptr));
        calc->setTabText(calc->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        calc->setTabText(calc->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\265 \320\263\321\200\320\260\321\204\320\270\320\272\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\222\320\220\320\240\320\230\320\220\320\235\320\242 \320\240\320\220\320\241\320\247\320\225\320\242\320\220:", nullptr));
        itog_aut->setText(QCoreApplication::translate("MainWindow", "\320\240\320\220\320\241\320\241\320\247\320\230\320\242\320\220\320\242\320\254", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\237\320\240\320\236\320\246\320\225\320\235\320\242\320\235\320\220\320\257 \320\241\320\242\320\220\320\222\320\232\320\220:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\234\320\225\320\241.", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\241\320\240\320\236\320\232 \320\232\320\240\320\225\320\224\320\230\320\242\320\220:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\240\320\243\320\221.", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\241\320\243\320\234\320\234\320\220 \320\232\320\240\320\225\320\224\320\230\320\242\320\220:", nullptr));
        sum_mes_aut->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\240\320\243\320\221/\320\234\320\225\320\241", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\230\320\242\320\236\320\223\320\236:", nullptr));
        nach_proc_aut->setText(QString());
        dolg_aut->setText(QString());
        label_26->setText(QCoreApplication::translate("MainWindow", "\320\235\320\220\320\247\320\230\320\241\320\233\320\225\320\235\320\235\320\253\320\225 \320\237\320\240\320\236\320\246\320\225\320\235\320\242\320\253", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "\320\224\320\236\320\233\320\223 + \320\237\320\240\320\236\320\246\320\225\320\235\320\242\320\253", nullptr));
        sum_kred_aut->setSuffix(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\320\220\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\265", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\241\320\243\320\234\320\234\320\220 \320\232\320\240\320\225\320\224\320\230\320\242\320\220:", nullptr));
        sum_kred_dif->setSuffix(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\240\320\243\320\221.", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\320\241\320\240\320\236\320\232 \320\232\320\240\320\225\320\224\320\230\320\242\320\220:", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\234\320\225\320\241.", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\320\237\320\240\320\236\320\246\320\225\320\235\320\242\320\235\320\220\320\257 \320\241\320\242\320\220\320\222\320\232\320\220:", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "\320\230\320\242\320\236\320\223\320\236:", nullptr));
        sum_mes_dif->setText(QString());
        label_23->setText(QCoreApplication::translate("MainWindow", "\320\240\320\243\320\221/\320\234\320\225\320\241", nullptr));
        itog_dif->setText(QCoreApplication::translate("MainWindow", "\320\240\320\220\320\241\320\241\320\247\320\230\320\242\320\220\320\242\320\254", nullptr));
        dolg_dif->setText(QString());
        nach_proc_dif->setText(QString());
        label_30->setText(QCoreApplication::translate("MainWindow", "\320\235\320\220\320\247\320\230\320\241\320\233\320\225\320\235\320\235\320\253\320\225 \320\237\320\240\320\236\320\246\320\225\320\235\320\242\320\253", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "\320\224\320\236\320\233\320\223 + \320\237\320\240\320\236\320\246\320\225\320\235\320\242\320\253", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265", nullptr));
        calc->setTabText(calc->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\272\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
