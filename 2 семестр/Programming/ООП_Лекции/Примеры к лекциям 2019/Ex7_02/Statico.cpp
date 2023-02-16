#include "statico.h"

Point *Point::first = NULL;
Point *Point::last = NULL;

void Point::drawAll()
{
	Point *p = first;
	if (p == NULL)return;
	do
	{
		p->draw();
		p = p->next;
	} while (p != NULL);
}