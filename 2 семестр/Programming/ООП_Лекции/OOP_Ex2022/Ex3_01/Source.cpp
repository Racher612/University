#include <stdio.h>

int add(int n, int m) { return n + m; }
int sub(int n, int m) { return n - m; }
int mul(int n, int m) { return n * m; }
int div(int n, int m) { return n / m; }

int main()
{
	int(*ptr)(int, int); // указатель на функцию
	int a = 6, b = 2; char c = '+';
	while (c != ' ')
	{
		printf("%d%c%d=", a, c, b);
		switch (c)
		{
		case '+': ptr = add; c = '-'; break;
		case '-': ptr = sub; c = '*'; break;
		case '*': ptr = mul; c = '/'; break;
		case '/': ptr = div; c = ' ';
		}
		printf("%d\n", a = ptr(a, b));
	}
	return 0;
}
