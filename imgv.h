#ifndef IMGV_H
#define IMGV_H

#include <QLabel>
#include <QDir>
#include <QList>
#include <QShortcut>


class Imgv : public QLabel
{
  Q_OBJECT
public:
  explicit Imgv(QWidget *parent = 0);
  QDir *dir;
  QFileInfoList files_list;
  QShortcut *right_key;
  QShortcut *left_key;
  int c = 0, end_list;

public slots:
  void nextimg();
  void previmg();
};

#endif // IMGV_H

