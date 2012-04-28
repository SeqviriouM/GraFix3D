#include <QApplication>
#include <QDesktopWidget>
#include "OGLGelikoid.h"
#include <math.h>
#include "Infix_postfix.h"
#include "postfix_result_and_stroka_postfix.h"

// ----------------------------------------------------------------------
int main(int argc, char** argv)
{
    std::ofstream out;
    out.open ("points.txt");
    char *input="Y(I(1-x*x/10-y*y/3))" ;
char *qwerty;
qwerty=vixod(input);
puts(qwerty);

    for (float x = V_BEGIN; x < V_END; x += V_STEP)
        for (float y = V_BEGIN; y < V_END; y += V_STEP)
        {
            if ((1-x*x/10-y*y/3)>0)

                             {
                            out << x  << " " << y << " " << polka(vixod(input),x,y) << std::endl;
                           out << x  << " " << y << " " << -1*polka(vixod(input),x,y) << std::endl;
                           }
        }







    out.close();

    QApplication app(argc, argv);
    OGLGelikoid oglGelikoid;

    oglGelikoid.resize(400, 400);
    oglGelikoid.show();

    return app.exec();
}
