#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>

class Win : public QWidget
{
  QLabel *helloLabel;
  QPushButton *exitButton;
public:
  Win(QWidget *parent = nullptr);
};

#endif
