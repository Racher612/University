#include "book.h"
#include <stdio.h>

int main()
{
	// объ€вление инициализированного объекта
	CBook B={"J.London. Smoke Bellew",267};
	printf("%s %d\n",B.getName(),B.getPages());
	// объ€вление массива инициализированных объектов
    CBook C[]= {{"J.London. V.3",367},
			    {"J.London. V.4",321},
			    {"J.London. V.5",356}};
    for(int i=0;i<3;i++)
      printf("%s %d\n",C[i].getName(),C[i].getPages());
	return 0;
}

