#include  "Tpoint.h"

Point& Point::operator+=(Point &p)
{
	x += p.x; y += p.y;
	cout << "operator+=\n";
	return *this;
}
Point Point::operator+(Point &p)
{
	Point pp(x, y);
	cout << "operator+\n";
	return pp += p;
}
Point& Point::operator=(Point const  &p)
{
	x = p.x;    y = p.y;
	cout << "operator=\n";
	return *this;
}