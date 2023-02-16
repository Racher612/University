#include "Element.h"

class TNum:public TElement
{ 
public:
	   int num;
	TNum(int n):TElement(),num(n) {}
	virtual ~TNum() { puts("Delete TNum.");}
	virtual void Print() { printf("%d ",num); }
};
class TChar:public TElement
{
public:
	   char ch;
	TChar(char c):TElement(),ch(c) {}
	virtual ~TChar() { puts("Delete TChar.");}
	virtual void Print() { printf("%c ",ch);}
};
void Show(TElement *e)
{ e->Print();}