#include <stdio.h>
int main()
{
	int s = 0, i = 1, k;
	puts("Input 10 numbers.");
	while (i < 11)
	{
		scanf("%d", &k);
		if (k < 0)
		{
			puts("Error.");
			continue;
		}
		i++;
		s += k;
	}
	printf("Result = %d.\n", s);
	return 0;
}
