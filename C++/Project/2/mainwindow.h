#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include<QDebug>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_stackedWidget_currentChanged(int arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    //void on_pushButton_32_clicked();

   // void on_pushButton_47_clicked();

  //  void on_pushButton_33_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_47_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_45_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_46_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_48_clicked();

    void on_pushButton_49_clicked();

    void on_pushButton_50_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_51_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_52_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_53_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_54_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_55_clicked();

    void on_pushButton_56_clicked();

    void on_pushButton_58_clicked();

    void on_pushButton_59_clicked();

    void on_pushButton_36_clicked();

    void on_pushButton_37_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_44_clicked();

    void on_pushButton_42_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_57_clicked();

    void on_pushButton_43_clicked();

    void on_Pay_Bill_2_clicked();

    void on_Deposit_clicked();

    void on_education_clicked();

    void on_pushButton_61_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QString name, mail, phone, password,log_name,log_Email,log_Password,Dep_Email,Deposit_mail,Current_Mail,
    Deposite_money,Withdraw_mail,Dep_Balance, WDeposite_money,Pay_Bill_ID,Pay_Bill_Email, Pay_Deposite_money,show_m;
    qint32 Deposite,Balance,WBalance,Withdraw_money,Pay_Bill_Tk,Pay_Balance,show_m2;
};
#endif // MAINWINDOW_H
