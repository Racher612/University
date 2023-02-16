#include <stdio.h>

int main()
{
	char c;
	FILE *f;
	f = fopen("ddd.dat", "w");
	fputs("ABCDEF", f);
	fclose(f);
	f = fopen("ddd.dat", "rb");
	while (fread(&c, 1, 1, f) != 0)
		printf("%c ", c);
	fclose(f);
	return 0;
}
