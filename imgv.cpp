#include <QLabel>
#include <QDir>
#include <QList>
#include <QShortcut>
#include <QFileDialog>
#include "imgv.h"


Imgv::Imgv(QWidget *parent) :
    QLabel(parent)
{
  dir = new QDir(QFileDialog::getExistingDirectory());
  files_list = dir->entryInfoList(QDir::Files);

  right_key = new QShortcut(QKeySequence(Qt::Key_Right), this);
  connect(right_key, SIGNAL(activated()), this, SLOT(nextimg()));
  left_key = new QShortcut(QKeySequence(Qt::Key_Left), this);
  connect(left_key, SIGNAL(activated()), this, SLOT(previmg()));

  if(files_list.empty()) {
    return;
  }
  end_list = files_list.length() - 1;
  setPixmap(files_list[c].filePath());
  setScaledContents(true);
}


void Imgv::nextimg()
{
  c++;
  if(c > end_list) {
    c = 0;
  }
  setPixmap(files_list[c].filePath());
  setScaledContents(true);
}


void Imgv::previmg()
{
  c--;
  if(c < 0) {
    c = end_list;
  }
  setPixmap(files_list[c].filePath());
  setScaledContents(true);
}

