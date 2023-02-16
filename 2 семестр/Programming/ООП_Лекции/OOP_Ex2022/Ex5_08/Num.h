#include "Element.h"

class TNum:public TElement
{ 
public:
	   int num;
	TNum(int n):TElement(),num(n) {}
	~TNum()override;
	void Print()override;
};
class TChar:public TElement
{
public:
	   char ch;
	TChar(char c):TElement(),ch(c) {}
	~TChar()override;
	void Print()override;
};
void Show(TElement *e);
