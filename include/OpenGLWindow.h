#ifndef OPENGLWINDOW_H_
#define OPENGLWINDOW_H_

#include <QOpenGLWindow>

class OpenGLWindow : public QOpenGLWindow
{
  Q_OBJECT
  public :
    OpenGLWindow();
    void paintGL() override;
    void initializeGL() override;
    void resizeGL(int _w, int _h) override;
    void keyPressEvent(QKeyEvent *) override;

    ~OpenGLWindow();

    void drawCube(GLfloat _w, GLfloat _h, GLfloat _d);

};



#endif
