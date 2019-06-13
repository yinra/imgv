#ifndef IMGV_H
#define IMGV_H

#include <QLabel>
#include <QDir>
#include <QStringList>
#include <QShortcut>


class Imgv : public QLabel
{
  Q_OBJECT
public:
  explicit Imgv(QWidget *parent = 0);
  QDir *dir;
  QShortcut *right_key;
  QShortcut *left_key;

public slots:
  void nextimg();
  void previmg();
};

#endif // IMGV_H

