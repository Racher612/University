#include <stdio.h>
#include <string.h>

int main()
{
	char str1[6];
	char str2[6] = "abcd";
	char *ptrstr3 = new char[6]; 
	strcpy(ptrstr3,"abcd");
	char str4[5] = { 'A','B','C','D','\0'};
	char str5[] = "ABCD";
	const char *str6 = "ABCD";
	puts(str1);
	puts(str2);
	puts(ptrstr3);
	puts(str4);
	puts(str5);
	puts(str6);
	strcat(str1, str2);
	puts(str1);
	strcat(str4, ptrstr3);
	puts(str4);
	delete [] ptrstr3;
	const char * mn[4] = {"Spring","Summer","Autumn","Winter"};
	char ms[4][7] = {"Spring","Summer","Autumn","Winter"};
	puts(ms[0]);
}
