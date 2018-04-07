#include <QtGui/QGuiApplication>
#include "OpenGLWindow.h"

int main(int argc, char **argv)
{
  QGuiApplication app(argc, argv);

  QSurfaceFormat format;
  format.setMajorVersion(2);
  format.setMinorVersion(1);
  format.setProfile(QSurfaceFormat::CompatibilityProfile);

  QSurfaceFormat::setDefaultFormat(format);

  OpenGLWindow window;
  window.resize(1024,720);
  window.show();

  return app.exec();
}
