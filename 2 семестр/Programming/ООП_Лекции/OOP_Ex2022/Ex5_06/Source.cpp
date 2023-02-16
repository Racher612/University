#include <stdio.h>

class TNum
{
public:
	int n;
	TNum(int an) :n(an) { puts("con"); }
	TNum() { puts("comum"); }
	~TNum() { puts("dest"); }
};
class TNum2 :public TNum
{
public:
	int nn;
	TNum2(int an) :nn(an) { puts("con2"); }
	~TNum2() { puts("dest2"); }
};

int main()
{
	TNum2 a(1);
	return 0;
}
