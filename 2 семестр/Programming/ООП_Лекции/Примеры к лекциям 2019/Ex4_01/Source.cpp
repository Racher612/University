#include <stdio.h>
void main(int argc, char *argv[])
{
	FILE *in;    int ch;
	if (argc < 2)puts("Введите имя файла.");
	else
		if ((in = fopen(argv[1], "r")) != NULL)
		{
			while ((ch = getc(in)) != EOF) putchar(ch);
			fclose(in);
		}
		else puts("Нельзя открыть файл.");
}
