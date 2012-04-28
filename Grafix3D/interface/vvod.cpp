#include "vvod.h"
#include "ui_vvod.h"
#include "mainwindow.h"
#include "dialog.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QThread>
#include "postfix_result_and_stroka_postfix.cpp"
#include "text_analiz.cpp"
#include <fstream>
#include "OGLGelikoid.h"
#include "spravka.h"

vvod::vvod(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vvod)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(nazad()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(dalee()));
    connect(ui->radioButton,SIGNAL(clicked(bool)),this,SLOT(one()));
    connect(ui->radioButton_2,SIGNAL(clicked(bool)),this,SLOT(two()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(sprav()));
    connect(ui->radioButton_3,SIGNAL(clicked(bool)),this,SLOT(color1()));
    connect(ui->radioButton_4,SIGNAL(clicked(bool)),this,SLOT(color7()));
    connect(ui->radioButton_5,SIGNAL(clicked(bool)),this,SLOT(color3()));
    connect(ui->radioButton_6,SIGNAL(clicked(bool)),this,SLOT(color4()));
    connect(ui->radioButton_7,SIGNAL(clicked(bool)),this,SLOT(color5()));
    connect(ui->radioButton_8,SIGNAL(clicked(bool)),this,SLOT(color6()));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(gran()));


    ui->lineEdit_7->setHidden(true);
    ui->label_2->setHidden(true);
    setlocale( LC_ALL,"Russian" );

}

vvod::~vvod()
{
    delete ui;
}

void vvod::one()
{
    ui->lineEdit_7->setHidden(false);
    ui->label_2->setHidden(false);
    std::ofstream out;
    out.open ("dannee.txt");
    out << 1 << std::endl;
}

void vvod::two()
{
    ui->lineEdit_7->setHidden(false);
    ui->label_2->setHidden(false);
    std::ofstream out;
    out.open ("dannee.txt");
    out << 2 << std::endl;
    out.close();
}


void vvod::gran()

{
    QString str1,str2,str3,str4;
    float x,y,x1,y1;
    bool ok1,ok2,ok3,ok4;
    str1=ui->lineEdit->text();
    str2=ui->lineEdit_2->text();
    str3=ui->lineEdit_3->text();
    str4=ui->lineEdit_4->text();
    x=str1.toFloat(&ok1);
    y=str3.toFloat(&ok3);
    x1=str2.toFloat(&ok2);
    y1=str4.toFloat(&ok4);
    if ((ok1==false)  || (ok2==false) ||  (ok3==false) ||  (ok4==false) || (x>7) || (x1<-7) || (y<-7) || (y1>7)  || (x1>7) || (x<-7) || (y1<-7) || (y>7) || (x1>x) || (y>y1)|| (str1 == "") || (str2 == "") || (str3 == "") || (str4 == ""))
      {
          QMessageBox msgBox(QMessageBox::Information,
            ("Error"),
            ("You have made mistake in input.\n Please rewrite numbers again."),
            QMessageBox::Ok);
        msgBox.exec();
      }
    else
    {
    std::ofstream out;
    out.open ("koeff.txt");
    out << x1  << " " << x << std::endl;
    out << y  << " " << y1 << std::endl;
    out.close();
    }

}


void vvod::nazad()
{
     MainWindow *x =new MainWindow();
    x->show();
    vvod::close();
}

void vvod::sprav()
{
     spravka *x =new spravka();
    x->show();
    vvod::close();
}

void vvod::color1()

{
    std::ofstream out;
    out.open ("color.txt");
    out << 1  << std::endl;
    out.close();

}


void vvod::color3()

{
    std::ofstream out;
    out.open ("color.txt");
    out << 3  << std::endl;
    out.close();

}

void vvod::color4()

{
    std::ofstream out;
    out.open ("color.txt");
    out << 4  << std::endl;
    out.close();

}

void vvod::color5()

{
    std::ofstream out;
    out.open ("color.txt");
    out << 5  << std::endl;
    out.close();

}

void vvod::color6()

{
    std::ofstream out;
    out.open ("color.txt");
    out << 6  << std::endl;
    out.close();

}

void vvod::color7()

{
    std::ofstream out;
    out.open ("color.txt");
    out << 7  << std::endl;
    out.close();

}

void vvod::dalee()
{

    QString str;
    std::ifstream in;
    in.open ("dannee.txt");
    int l;
    in >> l;
    in.close();
    remove ("dannee.txt");
    std::ifstream in2;
    in2.open ("koeff.txt");
    float begin1,end1,begin2,end2;
    in2 >> begin1 >> end1;
    in2 >> begin2 >> end2;
    in2.close();
    remove ("koeff.txt");
    str =ui->lineEdit_7->text();
        char* value=new char[100];
        QByteArray ar = str.toAscii();
        char* sometext=ar.data();
        value=sometext;
        char *input1, *output1 ;
        input1 = output1 = new char [100];
        input1 = value;
        input1 = proobraz(input1);
        input1 = len(input1,value);
        output1=vixod(input1);
        if ((output1 == "Error") || (str == "") )
           {
               QMessageBox msgBox(QMessageBox::Information,
                   ("Error"),
                   ("You have made mistake in input.\n Please rewrite numbers again."),
                   QMessageBox::Ok);
               msgBox.exec();
               ui->lineEdit_7->setText("Error!!");
           }

        else

        {
        dialog *x =new dialog();
        x->show();
        vvod::close();
        std::ofstream out;
        out.open ("points.txt");
        if (l==1)
        {
          for (float x = begin1; x < end1; x += V_STEP)
               for (float y = begin2; y < end2; y += V_STEP)
               {
                   if ((polka(vixod(input1),x,y)<25) && (polka(vixod(input1),(x+0.05),y)<25)  && (polka(vixod(input1),(x-0.05),y)<25) && (polka(vixod(input1),x,(y+0.05))<25) && (polka(vixod(input1),x,(y-0.05))<25))

                                  {
                                      out << x  << " " << polka(vixod(input1),x,y) << " " << y << std::endl;
                                      out << x+0.05  << " " << polka(vixod(input1),(x+0.05),y) << " " << y << std::endl;
                                      out << x-0.05  << " " << polka(vixod(input1),(x-0.05),y) << " " << y << std::endl;
                                      out << x  << " " << polka(vixod(input1),x,(y+0.05)) << " " << (y+0.05) << std::endl;
                                      out << x  << " " << polka(vixod(input1),x,(y-0.05)) << " " << (y-0.05) << std::endl;
                                  }
               }





          }

        if (l==2)
        {
          for (float x = begin1; x < end1; x += V_STEP)
               for (float y = begin2; y < end2; y += V_STEP)
               {
                   if ((polka(vixod(input1),x,y)<25) && (polka(vixod(input1),(x+0.05),y)<25)  && (polka(vixod(input1),(x-0.05),y)<25) && (polka(vixod(input1),x,(y+0.05))<25) && (polka(vixod(input1),x,(y-0.05))<25))
                                    {
                                        out << x  << " " << polka(vixod(input1),x,y) << " " << y << std::endl;
                                        out << x+0.05  << " " << polka(vixod(input1),(x+0.05),y) << " " << y << std::endl;
                                        out << x-0.05  << " " << polka(vixod(input1),(x-0.05),y) << " " << y << std::endl;
                                        out << x  << " " << polka(vixod(input1),x,(y+0.05)) << " " << (y+0.05) << std::endl;
                                        out << x  << " " << polka(vixod(input1),x,(y-0.05)) << " " << (y-0.05) << std::endl;
                                        out << x  << " " << -polka(vixod(input1),x,y) << " " << y << std::endl;
                                        out << x+0.05  << " " << -polka(vixod(input1),(x+0.05),y) << " " << y << std::endl;
                                        out << x-0.05  << " " << -polka(vixod(input1),(x-0.05),y) << " " << y << std::endl;
                                        out << x  << " " << -polka(vixod(input1),x,(y+0.05)) << " " << (y+0.05) << std::endl;
                                        out << x  << " " << -polka(vixod(input1),x,(y-0.05)) << " " << (y-0.05) << std::endl;
                                  }
               }





          }



    out.close();
    Thread1 *t = new Thread1;
    t->run();
        }
}

void Thread1::run()

{
    OGLGelikoid oglGelikoid;
    oglGelikoid.resize(400, 400);
    oglGelikoid.show();
    exec();

}
