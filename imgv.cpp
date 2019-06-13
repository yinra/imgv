#include <QLabel>
#include <QDir>
#include <QStringList>
#include <QShortcut>
#include <QFileDialog>
#include "imgv.h"


Imgv::Imgv(QWidget *parent) :
    QLabel(parent)
{
  dir = new QDir(QFileDialog::getExistingDirectory());
  QStringList list;
  list = dir->entryList(QDir::Files);
  right_key = new QShortcut(QKeySequence(Qt::Key_Right), this);
  connect(right_key, SIGNAL(activated()), this, SLOT(nextimg()));
  left_key = new QShortcut(QKeySequence(Qt::Key_Left), this);
  connect(left_key, SIGNAL(activated()), this, SLOT(previmg()));
  if(list.empty()) {
    return;
  }
  setPixmap(list[0]);
}


void Imgv::nextimg()
{
}


void Imgv::previmg()
{
}

