#include <QApplication>
#include <QMessageBox>
#include "imgv.h"


int main(int argc, char **argv)
{
  QApplication a(argc, argv);
  Imgv i;
  i.showFullScreen();

  QMessageBox m;
  m.setText("از کلیدهای چپ و راست صفحه‌کلید کمک بگیر!");
  m.show();
  return a.exec();
}
