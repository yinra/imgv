#include <QApplication>
#include "imgv.h"


int main(int argc, char **argv)
{
  QApplication a(argc, argv);
  Imgv i;
  i.showFullScreen();
  return a.exec();
}
