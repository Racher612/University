#include <string.h>
class TNum
{
public:	int num;
		TNum(int n) :num(n) {}
		virtual ~TNum(void) { cout << "Destructor TNum " << endl; }
		virtual void Print(void) { cout << num << " "<< endl; }
};
class TStr :public TNum
{
public: char *st;
		TStr(char *s) :TNum(strlen(s))
		{
			st = new char[num + 1]; strcpy(st, s);
		}
		~TStr(void)
		{
			cout << "Destructor TStr.";  delete[] st;
		}
		void Print(void)
		{
			TNum::Print(); cout << st << " " << endl;
		}
};
