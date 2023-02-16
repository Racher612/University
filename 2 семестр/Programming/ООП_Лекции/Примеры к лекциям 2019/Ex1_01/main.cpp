#include <stdio.h>
#include <conio.h>


int nod(int a, int b)
{
	while (a != b)
		if (a > b) a = a - b;
		else b = b - a;
	return a;
}

int main(int argc, char* argv[])
{
	int a = 18, b = 24, c;
	c = nod(a, b);
	printf("Nod=%d\n", c);
	return 0;
}