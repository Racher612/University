#ifndef printbook_h
#define printbook_h
#include "Book.h"

class CPrintBook:public CBook
{
private:
	int PrintPages;
public:
	CPrintBook(const char *name,int pages):CBook(name,pages)
	{
	PrintPages=Pages/16;
	}
	int getPages()
	{
		return PrintPages;
	}
};
#endif