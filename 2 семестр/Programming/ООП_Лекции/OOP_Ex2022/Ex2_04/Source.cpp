#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char st[80], stres[80], strab[80],
		*ptr1, *ptr2, *ptr3;
	int old;
	while (puts("Enter string or end:"),strcmp(gets(st),"end")!=0) {
		strcpy(stres,st);
		ptr1 = strchr(stres, ' ');
		*(ptr1 + 2) = '.';
		ptr2 = strchr(st, ' ');
		ptr2 = strchr(ptr2 + 1, ' ');
		strncpy_s(ptr1 + 3, 80, ptr2 + 1, 1);
		strncpy_s(ptr1 + 4, 80, ". \0", 3);
		ptr3 = strchr(ptr2 + 1, ' ');
		old = 2006 - atoi(ptr3 + 1);
		itoa(old, strab, 10);
		strcat(stres, strab);
		puts(stres);
	}
	return 0;
}
