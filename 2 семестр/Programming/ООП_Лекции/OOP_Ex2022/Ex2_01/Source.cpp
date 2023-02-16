#include <stdio.h>
//#define N 5
constexpr int N{5};
int main()
{
	int a[N][N], i, j, s[N];
	for (i = 0; i < N; i++)
	{
		printf("Input numbers of %2d string:\n", i);
		for (j = 0; j < N; j++) scanf("%d", &a[i][j]);
	}
	for (i = 0; i < N; i++)
		for (j = 0, s[i] = 0; j < N; j++) s[i] += a[i][j];
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++) printf("%3d ", a[i][j]);
		printf("sum=%4d\n", s[i]);
	}
	return 0;
}
