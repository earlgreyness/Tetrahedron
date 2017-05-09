#include <QtGui/QApplication>
#include "Tetrahedron.h"


int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    Tetrahedron tetrahedron;
    tetrahedron.resize(300, 300);
    tetrahedron.show();

    return app.exec();
}
