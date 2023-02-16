#include <stdio.h>
void main(int argc, char* argv[])
{
	int n, m;
	FILE *f, *g;
	f = fopen("rand.dat", "r");
	g = fopen("$$$$xxx.tmp", "w");
	for (n = 0; n < 10; n++)
	{
		fscanf(f, "%d\n", &m); fprintf(g, "%d\n", m);
	}
	for (n = 0; n < 10; n++) fprintf(g, "%d\n", n);
	n = fgetc(f);
	while (n != EOF) { fputc(n, g);  n = fgetc(f); }
	fcloseall();
	unlink("rand.dat");
	rename("$$$$xxx.tmp", "rand.dat");
}
