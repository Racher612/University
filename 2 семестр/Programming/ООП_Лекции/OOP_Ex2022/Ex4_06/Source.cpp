#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i, r; FILE *f;
	srand(static_cast<unsigned int>(time(nullptr)));
	f = fopen("rand1.dat", "w+");
	for (i = 0; i < 7; i++) { r = rand(); fprintf(f, "%d ", r); }
	rewind(f);
	while (fscanf(f, "%d", &r) != EOF)printf("%6d", r);
	fclose(f);
	return 0;
}
