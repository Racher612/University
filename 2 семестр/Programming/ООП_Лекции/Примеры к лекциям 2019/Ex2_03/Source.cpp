#include <string.h>
#include <stdio.h> 
char string[] = "A string\tof ,,tokens\nand some    more tokens"; 
char seps[] = " ,\t\n", *token;
char * nexttoken;
int main(void)
{
	token = strtok_s(string, seps,&nexttoken);
	while (token != NULL)
	{
		printf("%s ", token);
		token = strtok_s(NULL, seps, &nexttoken);
	}
	return 0;
}
