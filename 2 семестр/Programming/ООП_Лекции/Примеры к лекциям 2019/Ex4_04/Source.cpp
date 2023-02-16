#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(int argc, char* argv[])
{
	FILE *f;    int n;
	const char *s = "ABCD";
	f = fopen("test.dat", "w");
	for (n = 0; n < 6; n++)
	{
		fputs(s, f);
		fputs("\n", f);
	}
	fclose(f);
	return 0;
}
