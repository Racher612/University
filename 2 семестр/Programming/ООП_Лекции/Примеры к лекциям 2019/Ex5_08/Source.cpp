#include "Num.h"
#include <string.h>
#include <stdlib.h>

TSpisok N;
int main(int argc, char* argv[])
{
	char str[10];
	int k, i;
	TElement *p;
	puts("");
	while (printf("Input numbers, strings or <end>:"), scanf("%s", str), strcmp(str, "end"))
	{
		k = atoi(str);
		if (k || (strlen(str) == 1 && str[0] == '0'))  p = new TNum(k);
		else p = new TChar(str[0]);
		N.Add(p);
	}
	puts("All list:");
	N.ForEach(Show);
	p = N.First();
	k = 0;
	while (p != NULL)
	{
		if (TNum *q = dynamic_cast<TNum *>(p)) k += q->num;// д.б. опция enable RTTI (в Project\Settings...)
		p = N.Next();
	}
	printf("Summa= %d\n", k);
	p = N.Last();
	i = 0;
	while (p != NULL)
	{
		if (TChar *q = dynamic_cast<TChar *>(p)) str[i++] = q->ch;
		p = N.Previous();
	}
	str[i] = '\0';
	printf("String= %s\n", str);
	puts("End.");
	return 0;
}
