#include <stdio.h>
#include <string.h>
struct toys { char name[20]; int cost; } toy;

void main(int argc, char* argv[])
{
	FILE *f;
	f = fopen("test.dat", "w+b");
	while (scanf("\n%s", toy.name),
		strcmp(toy.name, "end") != 0)
	{
		scanf("%d", &toy.cost);
		fwrite(&toy, sizeof(toy), 1, f);
	}
	fclose(f);
}
