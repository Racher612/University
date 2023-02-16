#include <stdio.h>
int main()
{
	FILE *f1,*f2;
	char string[80];
	f1 = fopen("test.dat", "r");
	f2 = fopen("ttt.dat", "w");
	while (fgets(string, 80, f1) != nullptr)
		fputs(string,f2);
	return 0;
}
