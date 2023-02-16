#include "PrintBook.h"

int main()
{
	CBook F("J.London. Smoke Bellew",267);
	F.Print();
	CPrintBook D("J.London. Smoke Bellew",267);
	D.Print();

	return 0;
}

