#include <stdio.h>
#include <math.h>

int main(int, char**)
{
	double r, x, eps, s;
	puts("Input x, eps:");
	scanf("%lf  %lf", &x, &eps);
	if (x <= 1)  puts("Error.");
	else 
	{
		s = 1;   r = 1 / x;
		while (fabs(r) > eps)
		{
			s += r;    r = -r / x;
		}
		printf("Result= %lf.\n", s);
	}
	return 0;
}
