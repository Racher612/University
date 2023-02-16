#include "area.h"
#include <QTimerEvent>

Area::Area(QWidget *parent):QWidget(parent)
{
	setFixedSize(QSize(300,200)); // фиксируем размер Холста
	myline=new MyLine(80,100,50);  // создаем объект Линия
	myrect=new MyRect(220,100,50); // создаем объект Квадрат
	alpha=0;
}
void Area::showEvent(QShowEvent *)
{
    myTimer=startTimer(50);      // включаем таймер
}
void Area::paintEvent(QPaintEvent *)
{
    QPainter painter(this);    // создаем контент рисования на Холсте
    painter.setPen(Qt::red);      // задаем красное Перо
    myline->move(alpha,&painter);         // рисуем Линию
    myrect->move(alpha*(-0.5),&painter);   // рисуем Квадрат
}
void Area::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == myTimer) // если наш таймер
    {
       alpha += 0.2;
       update();        // обновить внешний вид
    }
    else
       QWidget::timerEvent(event);  // иначе передать далее
}
void Area::hideEvent(QHideEvent *)
{
        killTimer(myTimer);  // выключить таймер
}
Area::~Area()
{
    delete myline;
    delete myrect;
}
