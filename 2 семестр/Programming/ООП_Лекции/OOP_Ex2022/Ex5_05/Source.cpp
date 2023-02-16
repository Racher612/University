#include <stdio.h>

class TNum
{
public:
	int *pn;
	TNum(int n) { puts("new pn"); pn = new int(n); }
	TNum(const TNum &Obj){puts("copy new pn"); pn=new int(*Obj.pn);}
	~TNum() { puts("delete pn"); delete pn; }
};
void Print(TNum b) {
	printf("Function with parametr - means\n");
	printf("%d ", *b.pn);
}

int main()
{
	TNum a(1);
	Print(a);

	Print(a);
	return 0;
}
