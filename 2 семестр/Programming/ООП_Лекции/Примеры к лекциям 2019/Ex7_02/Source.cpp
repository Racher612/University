#include "statico.h"

int main(int argc, char* argv[])
{
	Point a('S', 'C'), b('W', 'O'), c('M', 'S');
	if (Point::first != NULL)Point::drawAll();
	return 0;
}