#include <stdio.h>
int main()
{
	FILE *f;  long offset = 0L;    int ch;
	f = fopen("test.dat", "r");
	while ((!fseek(f, offset++, 0)) && ((ch = getc(f)) != EOF))
	{
		putc(ch, stdout);
		if (!fseek(f, -(offset + 2), 2)) putc(getc(f), stdout);
	}
	fclose(f);
	return 0;
}
