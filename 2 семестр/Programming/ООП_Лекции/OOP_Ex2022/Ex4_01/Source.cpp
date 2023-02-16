#include <stdio.h>
int main(int argc, char *argv[])
{
	FILE *in;    int ch;
	if (argc < 2)puts("Enter file name.");
	else
		if ((in = fopen(argv[1], "r")) != nullptr)
		{
			while ((ch = getc(in)) != EOF) putchar(ch);
			fclose(in);
		}
		else puts("No open file.");
}
