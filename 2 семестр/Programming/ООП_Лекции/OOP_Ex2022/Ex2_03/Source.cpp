#include <string.h>
#include <stdio.h> 

int main()
{
        char str[] = "A string\tof ,,tokens\nand some    more tokens";
        char seps[] = " ,\t\n", *token;
        char * nexttoken;
        token = strtok_s(str, seps,&nexttoken);
        while (token != nullptr)
	{
		printf("%s ", token);
		token = strtok_s(nullptr, seps, &nexttoken);
	}
	return 0;
}
