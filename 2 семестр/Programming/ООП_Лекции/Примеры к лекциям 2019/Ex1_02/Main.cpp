#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
	float s, r, x, eps;
	puts("Input x, eps:");
	scanf_s("%f  %f", &x, &eps);
	if (x <= 1)  puts("Error.");
	else 
	{
		s = 1;   r = 1 / x;
		while (fabs(r) > eps)
		{
			s += r;    r = -r / x;
		}
		printf("Result= %f.\n", s);
	}
	return 0;
}