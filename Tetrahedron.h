#ifndef TETRAHEDRON_H
#define TETRAHEDRON_H

#include <QGLWidget>
#include <QtGui>

class Tetrahedron : public QGLWidget {
    Q_OBJECT

public:
    Tetrahedron(QWidget* parent = 0);

protected:
    void initializeGL();
    void resizeGL(int width, int heigth);
    void paintGL();
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);
    //void mouseDoubleClickEvent(QMouseEvent* event);

private:
    void draw();
    //int faceAtPosition(const QPoint& pos);
    GLfloat rotationX;
    GLfloat rotationY;
    GLfloat rotationZ;
    QColor faceColors[4];
    QPoint lastPos;
};

#endif // TETRAHEDRON_H
