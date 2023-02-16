#include <stdio.h>
struct toys { char name[20]; int cost; } toy;

int main(int argc, char* argv[])
{
	FILE *f;
	f = fopen("test.dat", "r+b");
	while (fread(&toy, sizeof(toy), 1, f) > 0)
		printf("Toy name %s - cost - %d\n", toy.name, toy.cost);
	fclose(f);
	return 0;
}
