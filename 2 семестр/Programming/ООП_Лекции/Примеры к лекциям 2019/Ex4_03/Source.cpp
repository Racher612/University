#include <stdio.h>
#include <conio.h>

int main(int argc, char* argv[])
{
	int n;
	while ((n = getchar()) != 'E')
	{
		putchar('\n');
		putchar(n);
	}
	return 0;
}