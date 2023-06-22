#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/PROGRAMMING/Second Semester/C++/Project/db.db");
    db.open();
}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
}
void MainWindow::on_stackedWidget_currentChanged(int arg1)
{

}
void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_pushButton_32_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_pushButton_47_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_33_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    name=ui->name_box->text();
    mail=ui->mail_box->text();
    phone=ui->phnnum_box->text();
    password=ui->pass_box->text();
    Deposite_money=QString::number(0);
    QSqlQuery query;
    query.exec("INSERT INTO User(Name, Email, Phone, Password,Taka) VALUES ('"+name+"', '"+mail+"', '"+phone+"', '"+password+"','"+Deposite_money+"')");
    ui->name_box->clear();
    ui->mail_box->clear();
    ui->phnnum_box->clear();
    ui->pass_box->clear();
}

void MainWindow::on_pushButton_45_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_18_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_46_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_11_clicked()
{
    log_name=ui->lineEdit_5->text();
    log_Email=ui->lineEdit_6->text();
    log_Password=ui->lineEdit_7->text();
   // Current_Mail = log_Email;
    QSqlQuery query;
    query.exec("SELECT * FROM User WHERE Email='"+log_Email+"' AND Password ='"+log_Password+"'");
    if(query.next()){
        ui->stackedWidget->setCurrentIndex(5);
    }
    else{
        ui->stackedWidget->setCurrentIndex(4);
        QMessageBox msgBox;
        msgBox.setText("Please insert your correct information");
        msgBox.exec();
    }
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
}
void MainWindow::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
   QSqlQuery query;
   query.prepare("SELECT Email,Taka FROM User WHERE Email = '"+log_Email+"'");
   if(query.exec())
   {
       while(query.next())
       {
           show_m = query.value("Taka").toString();
           qDebug() << show_m;
           //show_m =QString::number(show_m2);
           ui->label->setText(show_m);
           // qDebug() <<show_m;
       }
   }
  // ui->label->clear();


}

void MainWindow::on_pushButton_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
    QSqlQuery query;
    query.prepare("SELECT Email,Taka FROM User WHERE Email = '"+log_Email+"'");
    if(query.exec())
    {
        while(query.next())
        {
            show_m = query.value("Taka").toString();
            qDebug() << show_m;
            //show_m =QString::number(show_m2);
            ui->label_3->setText(show_m);
            // qDebug() <<show_m;
        }
    }
   // ui->label_3->clear();

}



void MainWindow::on_pushButton_14_clicked()
{
  ui->stackedWidget->setCurrentIndex(10);
}


void MainWindow::on_pushButton_48_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_49_clicked()
{
  ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_50_clicked()
{
  ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_23_clicked()
{
  ui->stackedWidget->setCurrentIndex(11);
}


void MainWindow::on_pushButton_51_clicked()
{
  ui->stackedWidget->setCurrentIndex(10);
}


void MainWindow::on_pushButton_24_clicked()
{
   ui->stackedWidget->setCurrentIndex(12);
}


void MainWindow::on_pushButton_15_clicked()
{
  ui->stackedWidget->setCurrentIndex(13);
}


void MainWindow::on_pushButton_52_clicked()
{
 ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_26_clicked()
{
 ui->stackedWidget->setCurrentIndex(14);
}


void MainWindow::on_pushButton_53_clicked()
{
  ui->stackedWidget->setCurrentIndex(13);
}


void MainWindow::on_pushButton_27_clicked()
{
  ui->stackedWidget->setCurrentIndex(15);
}


void MainWindow::on_pushButton_34_clicked()
{
 ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_25_clicked()
{
  ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_16_clicked()
{
  ui->stackedWidget->setCurrentIndex(16);
}


void MainWindow::on_pushButton_54_clicked()
{
   ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_28_clicked()
{
 ui->stackedWidget->setCurrentIndex(17);
}


void MainWindow::on_pushButton_17_clicked()
{
     ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_35_clicked()
{
  ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_20_clicked()
{
 ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_4_clicked()
{
  ui->stackedWidget->setCurrentIndex(18);
}


void MainWindow::on_pushButton_29_clicked()
{
   ui->stackedWidget->setCurrentIndex(19);
}


void MainWindow::on_pushButton_30_clicked()
{
   ui->stackedWidget->setCurrentIndex(20);
}


void MainWindow::on_pushButton_31_clicked()
{
  ui->stackedWidget->setCurrentIndex(21);
}


void MainWindow::on_pushButton_55_clicked()
{
  ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_pushButton_56_clicked()
{
   ui->stackedWidget->setCurrentIndex(18);
}


void MainWindow::on_pushButton_58_clicked()
{
  ui->stackedWidget->setCurrentIndex(18);
}


void MainWindow::on_pushButton_59_clicked()
{
  ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_pushButton_36_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);
}


void MainWindow::on_pushButton_37_clicked()
{
   ui->stackedWidget->setCurrentIndex(18);
}


void MainWindow::on_pushButton_5_clicked()
{
 ui->stackedWidget->setCurrentIndex(22);
}


void MainWindow::on_pushButton_38_clicked()
{
   ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_pushButton_39_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(23);
}


void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(24);
}


void MainWindow::on_pushButton_41_clicked()
{
   ui->stackedWidget->setCurrentIndex(25);
}


void MainWindow::on_pushButton_40_clicked()
{
    ui->stackedWidget->setCurrentIndex(26);
}


void MainWindow::on_pushButton_44_clicked()
{
  ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_pushButton_42_clicked()
{
  ui->stackedWidget->setCurrentIndex(27);
}


void MainWindow::on_pushButton_19_clicked()
{
    ui->stackedWidget->setCurrentIndex(28);
   Dep_Email=ui->lineEdit->text();
   Deposite=ui->lineEdit_10->text().toInt();
   //qDebug() <<"YES";
   //Deposite_money=QString::number(Deposite);
  // qDebug() <<Deposite_money;
   //QSqlQuery query;
   //query.prepare("SELECT Email,Taka FROM User WHERE Email ='mail'");
   //qDebug() <<query.exec("SELECT * FROM User");
   QSqlQuery query;
       query.prepare("SELECT Email,Taka FROM User WHERE Email = '"+Dep_Email+"'");
       if(query.exec()){
           while(query.next()){
               //qDebug() <<"success";
              Balance = query.value("Taka").toInt();
             // Balance = Balance.toInt();
               //qDebug() << Balance;
              // qDebug() <<Deposite;
               Balance = Balance + Deposite;
               Deposite_money=QString::number(Balance);
               //qDebug() <<Balance;
               QSqlQuery query1;
               query1.prepare("UPDATE User SET Taka=:Taka WHERE Email = '"+Dep_Email+"'");
                query1.bindValue(":Taka",Deposite_money);
              //qDebug() <<Deposite_money;
               query1.exec();
               query1.next();


           }
       }
       else{
           qDebug() <<"YES";
           ui->stackedWidget->setCurrentIndex(4);
           QMessageBox msgBox;
           msgBox.setText("Please insert your correct information");
           msgBox.exec();
       }

       ui->lineEdit->clear();
       ui->lineEdit_10->clear();
  // qDebug() << query.value("Email");
//   Balance = query.value("Taka").toInt();
//   Deposite = Balance + Deposite;
//   qDebug() << Balance;
//   Deposite_money=QString::number(Deposite);
//   if(query.next()){
//       QSqlQuery query1;
//         query1.prepare("UPDATE User SET Taka=:Taka WHERE Email = '"+Dep_Email+"'");
//         query1.bindValue(":Taka",Deposite_money);
//       qDebug() <<Deposite_money;
//         query1.exec();

//         query1.next();
//
}


void MainWindow::on_pushButton_21_clicked()
{
    ui->stackedWidget->setCurrentIndex(29);
    Withdraw_mail = ui->lineEdit_2->text();
    Withdraw_money = ui->lineEdit_11->text().toInt();
    QSqlQuery query;
        query.prepare("SELECT Email,Taka FROM User WHERE Email = '"+Withdraw_mail+"'");
        if(query.exec()){
            while(query.next()){
                //qDebug() <<"success";
                WBalance=query.value("Taka").toInt();
                WBalance = WBalance - Withdraw_money;
                WDeposite_money=QString::number(WBalance);
                //qDebug() <<WDeposite_money;
                QSqlQuery query2;
                query2.prepare("UPDATE User SET Taka=:Taka WHERE Email = '"+Withdraw_mail+"'");
                query2.bindValue(":Taka",WDeposite_money);
                query2.exec();
                query2.next();

            }
        }
        else{

            QMessageBox msgBox;
            msgBox.setText("Please insert your correct information");
            msgBox.exec();
           // ui->stackedWidget->setCurrentIndex(4);
        }
        ui->lineEdit_2->clear();
        ui->lineEdit_11->clear();

}


void MainWindow::on_pushButton_22_clicked()
{
   ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_57_clicked()
{
  ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_43_clicked()
{
  ui->stackedWidget->setCurrentIndex(24);
}


void MainWindow::on_Pay_Bill_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);
    Pay_Bill_Email = ui->lineEdit_3->text();
    Pay_Bill_ID = ui->lineEdit_16->text();
    Pay_Bill_Tk = ui->lineEdit_17->text().toInt();
    QSqlQuery query;
        query.prepare("SELECT Email,Taka FROM User WHERE Email = '"+Pay_Bill_Email+"'");
        if(query.exec()){
            while(query.next()){
                //qDebug() <<"success";
                Pay_Balance =query.value("Taka").toInt();
                Pay_Balance = Pay_Balance - Pay_Bill_Tk;
                //qDebug() <<Pay_Balance;
                Pay_Deposite_money=QString::number(Pay_Balance);
                QSqlQuery query2;
                query2.prepare("UPDATE User SET Taka=:Taka WHERE Email = '"+Pay_Bill_Email+"'");
                query2.bindValue(":Taka", Pay_Deposite_money);
                query2.exec();
                query2.next();

}
}
        else{
                        QMessageBox msgBox;
                        msgBox.setText("Please insert your correct information");
                        msgBox.exec();
                        //ui->stackedWidget->setCurrentIndex(4);
        }
        ui->lineEdit_3->clear();
        ui->lineEdit_16->clear();
        ui->lineEdit_17->clear();
}


void MainWindow::on_Deposit_clicked()
{
         QSqlQuery query;
        query.prepare("SELECT Email , Taka FROM User WHERE Email = '"+Current_Mail+"'");
//        //query.value("Taka").toInt();
//        ui->label_2->setText(query.value("Taka").toString());
//       // qDebug() <<query.value("Taka");
}


void MainWindow::on_education_clicked()
{
    ui->stackedWidget->setCurrentIndex(30);
}


void MainWindow::on_pushButton_61_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

