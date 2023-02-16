#ifndef book_h
#define book_h
#include <string.h>
#include <stdio.h>

class CBook
{
protected:
	char Name[30];
	int Pages;
public: 
	CBook(const char *name,int pages):Pages(pages)
	{
		strcpy(Name,name);
	}
	char *getName()
	{ 
		return Name;
	}
	void Print()
	{
		printf("%s %d\n",getName(),getPages());
	}
	virtual int getPages();
	virtual ~CBook(){}
};
#endif
