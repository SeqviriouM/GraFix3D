

#ifndef _Gelikoid_h_
#define _Gelikoid_h_


#define V_BEGIN -7
#define V_END 7
#define U_BEGIN -7
#define U_END 7
#define V_STEP 0.05
#define U_STEP 0.05
#define POINT_SIZE 1
#define COLOR 1
#include <fstream>

#include <QGLWidget>

// ======================================================================
class OGLGelikoid : public QGLWidget {
    Q_OBJECT

public:    GLuint  m_nPyramid;
    GLfloat m_xRotate;
    GLfloat m_yRotate;
    QPoint  m_ptPosition;

public:
    void   initializeGL   (                       );
     void   resizeGL       (int nWidth, int nHeight);
    void   paintGL        (                       );
    void   mousePressEvent(QMouseEvent* pe        );
    void   mouseMoveEvent (QMouseEvent* pe        );
            GLuint createPyramid  (GLfloat fSize = 1.0f   );

public:
    OGLGelikoid(QWidget* pwgt = 0, const char* pszName = 0);
};

#endif  //_OGLGelikoid_h_
