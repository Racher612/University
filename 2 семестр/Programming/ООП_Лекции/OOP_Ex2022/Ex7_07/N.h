#include <string.h>
class TNum
{
public:	int num;
	TNum(int n) :num(n) {}
	virtual ~TNum();
	virtual void Print();
};
class TStr :public TNum
{
public: char *st;
	TStr(char *s) :TNum(strlen(s))
	{
		st = new char[num + 1]; strcpy(st, s);
	}
	~TStr()override;
	void Print(void)override;
};
