#include "Statico.h"

Point *Point::first = nullptr;
Point *Point::last = nullptr;

void Point::drawAll()
{
	Point *p = first;
	if (p == nullptr)return;
	do
	{
		p->draw();
		p = p->next;
	} while (p != nullptr);
}
