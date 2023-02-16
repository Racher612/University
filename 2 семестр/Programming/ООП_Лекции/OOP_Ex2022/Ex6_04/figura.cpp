#include "figura.h"
#include <math.h>
void Figura::move(float Alpha,QPainter *Painter)
{
    dx=static_cast<int>(halflen*cos(Alpha));
    dy=static_cast<int>(halflen*sin(Alpha));
    draw(Painter);   // необходим сложный полиморфизм!
}
void MyLine::draw(QPainter *Painter)
{
    Painter->drawLine(x+dx,y+dy,x-dx,y-dy);
}
void MyRect::draw(QPainter *Painter)
{
    Painter->drawLine(x+dx,y+dy,x+dy,y-dx);
    Painter->drawLine(x+dy,y-dx,x-dx,y-dy);
    Painter->drawLine(x-dx,y-dy,x-dy,y+dx);
    Painter->drawLine(x-dy,y+dx,x+dx,y+dy);
}
