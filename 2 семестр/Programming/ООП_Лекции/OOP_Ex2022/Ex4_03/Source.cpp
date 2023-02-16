#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	while ((n = getchar()) != 'E')
	{
		putchar('\n');
		putchar(n);
	}
	return 0;
}
