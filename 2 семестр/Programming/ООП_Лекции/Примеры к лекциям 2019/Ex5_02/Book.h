#ifndef book_h
#define book_h
#include "string.h"

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
	char *getName() // метод по умолчанию inline
	{
		return Name;
	}
	int getPages();
};
#endif