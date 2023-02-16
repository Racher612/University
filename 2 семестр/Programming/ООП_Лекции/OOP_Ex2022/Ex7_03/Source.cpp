#include "TPoint.h"

int main()
{
	Point p(2, 3), q(4, 5), r(7, 8);
	q = p + r;
	q.Out();
	p += r;
	q.Out();
	return 0;
}
