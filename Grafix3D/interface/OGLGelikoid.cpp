
#include "OGLGelikoid.h"
#include <QMouseEvent>
#include <stdio.h>


float modx (float x)
{
    if (x < 0)
        return x * -1.0;
    else
        return x;
}

// ----------------------------------------------------------------------
OGLGelikoid::OGLGelikoid(QWidget* pwgt/*= 0*/, const char* pszName/*= 0*/)
    : QGLWidget(pwgt)
    , m_xRotate(0)
    , m_yRotate(0)
{
}

// ----------------------------------------------------------------------
/*virtual*/void OGLGelikoid::initializeGL()
{
    qglClearColor(Qt::white);
    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_FLAT);
    m_nPyramid = createPyramid(1.2f);
}

// ----------------------------------------------------------------------
/*virtual*/void OGLGelikoid::resizeGL(int nWidth, int nHeight)
{
    glViewport(0, 0, (GLint)nWidth, (GLint)nHeight);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-1.0, 1.0, -1.0, 1.0, 1.0, 10.0);
}

// ----------------------------------------------------------------------
/*virtual*/void OGLGelikoid::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -3.0);

    glRotatef(m_xRotate, 1.0, 0.0, 0.0);
    glRotatef(m_yRotate, 0.0, 1.0, 0.0);

    glCallList(m_nPyramid);
}

// ----------------------------------------------------------------------
/*virtual*/void OGLGelikoid::mousePressEvent(QMouseEvent* pe)
{
    m_ptPosition = pe->pos();
}

// ----------------------------------------------------------------------
/*virtual*/void OGLGelikoid::mouseMoveEvent(QMouseEvent* pe)
{
    m_xRotate += 180 * (GLfloat)(pe->y() - m_ptPosition.y()) / height();
    m_yRotate += 180 * (GLfloat)(pe->x() - m_ptPosition.x()) / width();
    updateGL();

    m_ptPosition = pe->pos();
}

// ----------------------------------------------------------------------
GLuint OGLGelikoid::createPyramid(GLfloat fSize/*=1.0f*/)
{
    GLuint n = glGenLists(1);

    glNewList(n, GL_COMPILE);


    glPointSize(POINT_SIZE);

      float x, y, z;
      float x1 , y1 , z1;
      int l;
      std::ifstream in1;
      in1.open ("color.txt");
      int c;
      in1 >> c; // читаем номер цвета из файла
      in1.close();
      remove("color.txt"); // удаляем ненужный файл
      std::ifstream in2;
      in2.open("dannee.txt");
      in2 >> l;
      in2.close();
      std::ifstream in;
      in.open ("points.txt");  // открываем файл с точками поверхности

              if (COLOR != 0) // устанавливаем цвет
              {
                   if (c==1)
                      glColor3d (0,0,0);
                   if (c==2)
                      glColor3f (0.1,0.3,0.2);
                   if (c==3)
                      glColor3d (1,0,0);
                   if (c==4)
                      glColor3d (0,0,1);
                   if (c==5)
                      glColor3d (1,0,1);
                   if (c==6)
                      glColor3d (1,1,0);
                   if (c==7)
                      glColor3d (0,1,0);
                   if (c==8)
                      glColor3f (0.7,0.1,0);
                   if (c==9)
                      glColor3d (0.2,0.1,0.5);
                   if (c==10)
                      glColor3d (0.5,0.2,0.5);
              }
              else
                  glColor3d(0, 0, 0);

              // построение
              if ((l==0) || (l==6))
              {

              glBegin(GL_POINTS);

              for (float v = V_BEGIN; v < V_END; v += 0.01)
              {
                  for (float u = U_BEGIN; u < U_END; u += 0.01)
                  {

                  in >> x >> y >> z;
                  glVertex3d(x, y, z);
                  }

              }
              glEnd();

              }

              else
              {
                  glBegin(GL_LINES);

                  for (float v = V_BEGIN; v < V_END; v += V_STEP)
                  {
                      for (float u = U_BEGIN; u < U_END; u += U_STEP)
                      {


              in >> x >> y >> z;
              glVertex3d(x, y, z);
              in >> x1 >> y1 >> z1;
              glVertex3d(x1, y1, z1);
              glVertex3d(x, y, z);
              in >> x1 >> y1 >> z1;
              glVertex3d(x1, y1, z1);
              glVertex3d(x, y, z);
              in >> x1 >> y1 >> z1;
              glVertex3d(x1, y1, z1);
              glVertex3d(x, y, z);
              in >> x1 >> y1 >> z1;
              glVertex3d(x1, y1, z1);
              }
          }
                  glEnd();
      }

     remove ("points.txt");


     glLineWidth(2);  // толщина линий
     glBegin(GL_LINES);  // построение осей координат
     {
         glColor3d(1,0,0);
         glVertex3f(-5.0,0.0,0.0); //начало отрезка
         glVertex3f(5.0,0.0,0.0); //конец отрезка
         glColor3d(0,1,0);
         glVertex3f(0.0,-5.0,0.0); //начало отрезка
         glVertex3f(0.0,5.0,0.0); //начало отрезка
         glColor3d(0,0,1);
         glVertex3f(0.0,0.0,-5.0); //начало отрезка
         glVertex3f(0.0,0.0,5.0); //начало отрезка


     }
     glEnd();


    glEndList();

    return n;
}
