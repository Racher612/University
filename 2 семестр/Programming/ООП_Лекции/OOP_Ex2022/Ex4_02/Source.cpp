#include <stdio.h>
int main()
{
	FILE *f;  long offset = 0L;    int ch;
	f = fopen("C:\\Users\\Galina\\Ex2022\\Ex4_02\\test.dat", "r");
	while ((!fseek(f, offset++, 0)) && ((ch = getc(f)) != EOF))
	{
		putc(ch, stdout);
		if (!fseek(f, -(offset + 2), 2)) putc(getc(f), stdout);
	}
	fclose(f);
	return 0;
}
