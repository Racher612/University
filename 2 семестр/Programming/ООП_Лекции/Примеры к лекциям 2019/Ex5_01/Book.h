#ifndef book_h
#define book_h

class CBook
{
 public: 
	char Name[30];
	int Pages;
	char *getName() // метод по умолчанию inline
	{
		return Name;
	}
	int getPages();
};
#endif