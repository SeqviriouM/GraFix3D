#include "dannie.h"
#include "ui_dannie.h"
#include "vibor.h"
#include "postroenye.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QThread>
#include "OGLGelikoid.h"
#include <math.h>
#include "Infix_postfix.h"
#include "postfix_result_and_stroka_postfix.h"
#include <QtGui>
#include "mainwindow.h"
#include "vibor.h"
#include <stdio.h>



dannie::dannie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dannie)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(nazad()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(post()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(nacsmesh()));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(koef()));
    connect(ui->radioButton,SIGNAL(clicked(bool)),this,SLOT(color1()));
    connect(ui->radioButton_2,SIGNAL(clicked(bool)),this,SLOT(color2()));
    connect(ui->radioButton_3,SIGNAL(clicked(bool)),this,SLOT(color3()));
    connect(ui->radioButton_4,SIGNAL(clicked(bool)),this,SLOT(color4()));
    connect(ui->radioButton_5,SIGNAL(clicked(bool)),this,SLOT(color5()));
    connect(ui->radioButton_6,SIGNAL(clicked(bool)),this,SLOT(color6()));
    connect(ui->radioButton_7,SIGNAL(clicked(bool)),this,SLOT(color7()));
    connect(ui->radioButton_8,SIGNAL(clicked(bool)),this,SLOT(color8()));
    connect(ui->radioButton_9,SIGNAL(clicked(bool)),this,SLOT(color9()));
    connect(ui->radioButton_10,SIGNAL(clicked(bool)),this,SLOT(color10()));
    std::ifstream in;
    in.open ("dannee.txt");
    int l;
    in >> l;
    in.close();
     if ((l==2) || (l==3) || (l==4))
     {
         ui->lineEdit_3->setHidden(true);
         ui->lineEdit_6->setHidden(true);
         ui->label_4->setHidden(true);
         ui->label_7->setHidden(true);
     }
     if ((l==7) || (l==8))
     {
         ui->lineEdit_6->setHidden(true);
         ui->label_7->setHidden(true);
     }
     if (l==6)
     {
         ui->lineEdit_5->setHidden(true);
         ui->lineEdit_6->setHidden(true);
         ui->label_6->setHidden(true);
         ui->label_7->setHidden(true);
         ui->label_8->setText("Radius");
     }


}

dannie::~dannie()
{
    delete ui;

}
void dannie::nazad()
{
     vibor *x =new vibor();
    x->show();
   dannie::close();
}

void dannie::post()
{
    postroenye *x =new postroenye();
     x->show();
    dannie::close();
    Thread *t = new Thread;
    t->run();

}

void dannie::nacsmesh()

{
    QString str1,str2,str3;
    float x,y,z;
    bool ok1,ok2,ok3;
    str1=ui->lineEdit->text();
    str2=ui->lineEdit_2->text();
    str3=ui->lineEdit_3->text();
    x=str1.toFloat(&ok1);
    y=str2.toFloat(&ok2);
    z=str3.toFloat(&ok3);
    if ((ok1==false)  || (ok2==false) ||  (ok3==false) || (str1 == "") || (str2 == "") || (str3 == "") )
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
    out.open ("nashsmesh.txt");
    out << x  << " " << y << " " << z << std::endl;
    out.close();
    }

}

void dannie::color1()

{
    std::ofstream out;
    out.open ("color.txt");
    out << 1  << std::endl;
    out.close();
    ui->pushButton_2->setFocus();

}

void dannie::color2()

{
    std::ofstream out;
    out.open ("color.txt");
    out << 2  << std::endl;
    out.close();
    ui->pushButton_2->setFocus();

}

void dannie::color3()

{
    std::ofstream out;
    out.open ("color.txt");
    out << 3  << std::endl;
    out.close();
    ui->pushButton_2->setFocus();


}

void dannie::color4()

{
    std::ofstream out;
    out.open ("color.txt");
    out << 4  << std::endl;
    out.close();
    ui->pushButton_2->setFocus();


}

void dannie::color5()

{
    std::ofstream out;
    out.open ("color.txt");
    out << 5  << std::endl;
    out.close();
    ui->pushButton_2->setFocus();


}

void dannie::color6()

{
    std::ofstream out;
    out.open ("color.txt");
    out << 6  << std::endl;
    out.close();
    ui->pushButton_2->setFocus();


}

void dannie::color7()

{
    std::ofstream out;
    out.open ("color.txt");
    out << 7  << std::endl;
    out.close();
    ui->pushButton_2->setFocus();


}

void dannie::color8()

{
    std::ofstream out;
    out.open ("color.txt");
    out << 8  << std::endl;
    out.close();
    ui->pushButton_2->setFocus();


}

void dannie::color9()

{
    std::ofstream out;
    out.open ("color.txt");
    out << 9  << std::endl;
    out.close();
    ui->pushButton_2->setFocus();


}

void dannie::color10()

{
    std::ofstream out;
    out.open ("color.txt");
    out << 10  << std::endl;
    out.close();
    ui->pushButton_2->setFocus();


}

void dannie::koef()

{
    QString str1,str2,str3;
    float x,y,z;
    bool ok1,ok2,ok3;
    str1=ui->lineEdit_4->text();
    str2=ui->lineEdit_5->text();
    str3=ui->lineEdit_6->text();
    x=str1.toFloat(&ok1);
    y=str2.toFloat(&ok2);
    z=str3.toFloat(&ok3);
    if ((ok1==false)  || (ok2==false) ||  (ok3==false) || (x==0) || (y==0) || (z==0) || (str1 == "") || (str2 == "") || (str3 == "") )
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
    out << x  << " " << y << " " << z << std::endl;
    out.close();
    }

}

void Thread::run()
{

    std::ifstream in;
    in.open ("dannee.txt");
    int l;
    in >> l;
    in.close();
    std::ifstream in1;
    in1.open ("nashsmesh.txt");
    float x1,y1,z1;
    in1 >> x1 >> y1 >> z1;
    in1.close();
    remove ("nashsmesh.txt");
    std::ifstream in2;
    in2.open ("koeff.txt");
    float a,b,c;
    in2 >> a >> b >> c;
    in2.close();
    remove ("koeff.txt");
    std::ofstream out;
    out.open ("points.txt");
    if (l==0)
    {

      for (float x = V_BEGIN; x < V_END; x += 0.01)
           for (float y = V_BEGIN; y < V_END; y += 0.01)
           {
               if ((1-(x-x1)*(x-x1)/(a*a)-(y-y1)*(y-y1)/(b*b))>=0)
                                {
                               out << x  << " " << c*sqrt(1-(x-x1)*(x-x1)/(a*a)-(y-y1)*(y-y1)/(b*b)) + z1 << " " << y << std::endl;                  
                               out << x  << " " << -c*sqrt(1-(x-x1)*(x-x1)/(a*a)-(y-y1)*(y-y1)/(b*b)) + z1 << " " << y << std::endl;
                              }
           }




}
    if (l==5)
    {
      for (float x = -5; x < 5; x += V_STEP)
           for (float y = -5; y < 5; y += V_STEP)
           {
               if ((((x-x1)*(x-x1)/(a*a)+(y-y1)*(y-y1)/(b*b))>0) && (((x-x1-0.05)*(x-x1-0.05)/(a*a)+(y-y1)*(y-y1)/(b*b))>0) && (((x-x1+0.05)*(x-x1+0.05)/(a*a)+(y-y1)*(y-y1)/(b*b))>0) && (((x-x1)*(x-x1)/(a*a)+(y-y1-0.05)*(y-y1-0.05)/(b*b))>0) && (((x-x1)*(x-x1)/(a*a)+(y-y1+0.05)*(y-y1+0.05)/(b*b))>0))

                                {
                               out << x  << " " << c*sqrt((x-x1)*(x-x1)/(a*a)+(y-y1)*(y-y1)/(b*b))+z1 << " " << y << std::endl;
                               out << x+0.05  << " " << c*sqrt((x-x1+0.05)*(x-x1+0.05)/(a*a)+(y-y1)*(y-y1)/(b*b))+z1 << " " << y << std::endl;
                               out << x-0.05  << " " << c*sqrt((x-x1-0.05)*(x-x1-0.05)/(a*a)+(y-y1)*(y-y1)/(b*b))+z1 << " " << y << std::endl;
                               out << x  << " " << c*sqrt((x-x1)*(x-x1)/(a*a)+(y-y1+0.05)*(y-y1+0.05)/(b*b))+z1 << " " << y+0.05 << std::endl;
                               out << x  << " " << c*sqrt((x-x1)*(x-x1)/(a*a)+(y-y1-0.05)*(y-y1-0.05)/(b*b))+z1 << " " << y-0.05 << std::endl;
                               out << x  << " " << -c*sqrt((x-x1)*(x-x1)/(a*a)+(y-y1)*(y-y1)/(b*b))+z1 << " " << y << std::endl;
                               out << x+0.05  << " " << -c*sqrt((x-x1+0.05)*(x-x1+0.05)/(a*a)+(y-y1)*(y-y1)/(b*b))+z1 << " " << y << std::endl;
                               out << x-0.05  << " " << -c*sqrt((x-x1-0.05)*(x-x1-0.05)/(a*a)+(y-y1)*(y-y1)/(b*b))+z1 << " " << y << std::endl;
                               out << x  << " " << -c*sqrt((x-x1)*(x-x1)/(a*a)+(y-y1+0.05)*(y-y1+0.05)/(b*b))+z1 << " " << y+0.05 << std::endl;
                               out << x  << " " << -c*sqrt((x-x1)*(x-x1)/(a*a)+(y-y1-0.05)*(y-y1-0.05)/(b*b))+z1 << " " << y-0.05 << std::endl;
                              }
           }





}
    if (l==2)
    {
      for (float z = V_BEGIN; z < 7; z += V_STEP)
           for (float x = 0; x < 7; x += V_STEP)
           {
               if ((2*a*(x-x1)>0) && (2*a*(x-x1-0.05)>0) && (2*a*(x-x1+0.05)>0))

                                {
                               out << x  << " " << z << " " << b*sqrt(2*a*(x-x1))+y1 << std::endl;
                               out << x+0.05  << " " << z << " " << b*sqrt(2*a*(x-x1+0.05))+y1 << std::endl;
                               out << x-0.05  << " " << z << " " << b*sqrt(2*a*(x-x1-0.05))+y1 << std::endl;
                               out << x  << " " << z+0.05 << " " << b*sqrt(2*a*(x-x1))+y1 << std::endl;
                               out << x  << " " << z-0.05 << " " << b*sqrt(2*a*(x-x1))+y1 << std::endl;
                               out << x  << " " << z << " " << -b*sqrt(2*a*(x-x1))+y1 << std::endl;
                               out << x+0.05  << " " << z << " " << -b*sqrt(2*a*(x-x1+0.05))+y1 << std::endl;
                               out << x-0.05  << " " << z << " " << -b*sqrt(2*a*(x-x1-0.05))+y1 << std::endl;
                              out << x  << " " << z+0.05 << " " << -b*sqrt(2*a*(x-x1))+y1 << std::endl;
                              out << x  << " " << z-0.05 << " " << -b*sqrt(2*a*(x-x1))+y1 << std::endl;
                              }
           }





}
    if (l==4)
        {
          for (float z = -7; z < 7; z += V_STEP)
               for (float x = -7; x < 7; x += V_STEP)
               {
                   if ((sqrt((x-x1)*(x-x1)/(a*a)-1)<25) && (sqrt((x-x1-0.05)*(x-x1-0.05)/(a*a)-1)<25) && (sqrt((x-x1+0.05)*(x-x1+0.05)/(a*a)-1)<25))





                                    {
                                   out << x  << " " << z << " " << b*sqrt((x-x1)*(x-x1)/(a*a)-1) + y1 << std::endl;
                                   out << x+0.05  << " " << z << " " << b*sqrt((x-x1+0.05)*(x-x1+0.05)/(a*a)-1) + y1 << std::endl;
                                   out << x-0.05  << " " << z << " " << b*sqrt((x-x1-0.05)*(x-x1-0.05)/(a*a)-1) + y1 << std::endl;
                                   out << x  << " " << z+0.05 << " " << b*sqrt((x-x1)*(x-x1)/(a*a)-1) + y1 << std::endl;
                                   out << x  << " " << z-0.05 << " " << b*sqrt((x-x1)*(x-x1)/(a*a)-1) + y1 << std::endl;
                                   out << x  << " " << z << " " << -b*sqrt((x-x1)*(x-x1)/(a*a)-1) + y1 << std::endl;
                                   out << x+0.05  << " " << z << " " << -b*sqrt((x-x1+0.05)*(x-x1+0.05)/(a*a)-1) + y1 << std::endl;
                                   out << x-0.05  << " " << z << " " << -b*sqrt((x-x1-0.05)*(x-x1-0.05)/(a*a)-1) + y1 << std::endl;
                                   out << x  << " " << z+0.05 << " " << -b*sqrt((x-x1)*(x-x1)/(a*a)-1) + y1 << std::endl;
                                   out << x  << " " << z-0.05 << " " << -b*sqrt((x-x1)*(x-x1)/(a*a)-1) + y1 << std::endl;
                                  }
               }





    }

    if (l==3)
    {
      for (float z = -7; z < 7; z += V_STEP)
           for (float x = -7; x < 7; x += V_STEP)
           {


                               if (((1-(x-x1)*(x-x1)/(a*a))>=0) && ((1-(x-x1+0.05)*(x-x1+0.05)/(a*a))>=0) && ((1-(x-x1-0.05)*(x-x1-0.05)/(a*a))>=0))
                               {
                               out << x  << " " << z << " " << b*sqrt(1-(x-x1)*(x-x1)/(a*a)) + y1 << std::endl;
                               out << x+0.05  << " " << z << " " << b*sqrt(1-(x-x1+0.05)*(x-x1+0.05)/(a*a)) + y1 << std::endl;
                               out << x-0.05  << " " << z << " " << b*sqrt(1-(x-x1-0.05)*(x-x1-0.05)/(a*a)) + y1 << std::endl;
                               out << x  << " " << z+0.05 << " " << b*sqrt(1-(x-x1)*(x-x1)/(a*a)) + y1 << std::endl;
                               out << x  << " " << z-0.05 << " " << b*sqrt(1-(x-x1)*(x-x1)/(a*a)) + y1 << std::endl;
                               out << x  << " " << z << " " << -b*sqrt(1-(x-x1)*(x-x1)/(a*a)) + y1 << std::endl;
                               out << x+0.05  << " " << z << " " << -b*sqrt(1-(x-x1+0.05)*(x-x1+0.05)/(a*a)) + y1 << std::endl;
                               out << x-0.05  << " " << z << " " << -b*sqrt(1-(x-x1-0.05)*(x-x1-0.05)/(a*a)) + y1 << std::endl;
                               out << x  << " " << z+0.05 << " " << -b*sqrt(1-(x-x1)*(x-x1)/(a*a)) + y1 << std::endl;
                               out << x  << " " << z-0.05 << " " << -b*sqrt(1-(x-x1)*(x-x1)/(a*a)) + y1 << std::endl;
                              }
                              }

           }


    if (l==7)
    {
      for (float x = -7; x < 7; x += V_STEP)
           for (float y = -7; y < 7; y += V_STEP)
           {
                 out << x  << " " << (x-x1)*(x-x1)/(a*a)+(y-y1)*(y-y1)/(b*b) +z1 << " " << y << std::endl;
                 out << x+0.05  << " " << (x-x1+0.05)*(x-x1+0.05)/(a*a)+(y-y1)*(y-y1)/(b*b) +z1 << " " << y << std::endl;
                 out << x-0.05  << " " << (x-x1-0.05)*(x-x1-0.05)/(a*a)+(y-y1)*(y-y1)/(b*b) +z1 << " " << y << std::endl;
                 out << x  << " " << (x-x1)*(x-x1)/(a*a)+(y-y1)*(y-y1+0.05)/(b*b) +z1 << " " << y+0.05 << std::endl;
                 out << x  << " " << (x-x1)*(x-x1)/(a*a)+(y-y1)*(y-y1-0.05)/(b*b) +z1 << " " << y-0.05 << std::endl;


           }





}
    if (l==8)
    {
      for (float x = -7; x < 7; x += V_STEP)
           for (float y = -7; y < 7; y += V_STEP)
           {
                 out << x  << " " << (x-x1)*(x-x1)/(a*a)- (y-y1)*(y-y1)/(b*b) +z1 << " " << y << std::endl;
                 out << x+0.05  << " " << (x-x1+0.05)*(x-x1+0.05)/(a*a)- (y-y1)*(y-y1)/(b*b) +z1 << " " << y << std::endl;
                 out << x-0.05  << " " << (x-x1-0.05)*(x-x1-0.05)/(a*a)- (y-y1)*(y-y1)/(b*b) +z1 << " " << y << std::endl;
                 out << x  << " " << (x-x1)*(x-x1)/(a*a)- (y-y1+0.05)*(y-y1+0.05)/(b*b) +z1 << " " << y+0.05 << std::endl;
                 out << x  << " " << (x-x1)*(x-x1)/(a*a)- (y-y1-0.05)*(y-y1-0.05)/(b*b) +z1 << " " << y-0.05 << std::endl;

           }





}
    if (l==6)
    {


      for (float x = -7; x < 7; x += 0.01)
           for (float y = -7; y < 7; y += 0.01)
           {
                if ((a*a-(x-x1)*(x-x1)-(y-y1)*(y-y1))>=0)
                {
               out << x  << " " << sqrt(a*a-(x-x1)*(x-x1)-(y-y1)*(y-y1)) + z1 << " " << y << std::endl;
               out << x  << " " << -sqrt(a*a-(x-x1)*(x-x1)-(y-y1)*(y-y1)) + z1 << " " << y << std::endl;
                }

           }





}

       out.close();
       OGLGelikoid oglGelikoid;
       oglGelikoid.resize(400, 400);
       oglGelikoid.show();
       exec();
}




