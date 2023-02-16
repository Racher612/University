#include <iostream>
#include <string.h>
using namespace std;

class TA
{
protected:	char c;
public: TA(char ac) :c(ac) {}
		void func() { cout << c << endl; }
		virtual void Print() {}
		virtual ~TA(){}
};
class TB :public TA
{
	char S[10];
public: TB(const char *aS) :TA(aS[0]) { strcpy(S, aS); }
		void func() { cout << c << ' ' << S << endl; }
};

int main()
{
	TA *pA = new TA('A'), *pC = new TB("AB");
	TB *pB = new TB("AC");

	// восходящее
	((TA *)pB)->func();
	reinterpret_cast<TA *>(pB)->func();
	static_cast<TA *>(pB)->func();
	dynamic_cast<TA *>(pB)->func();

	// нисходящее
	((TB *)pC)->func();
	((TB *)pA)->func();
	reinterpret_cast<TB *>(pC)->func(); // указатель-указатель, интегральный тип -> указатель
	reinterpret_cast<TB *>(pA)->func(); // без проверки, получается бред
	static_cast<TB *>(pC)->func();      // любой тип в любой
	static_cast<TB *>(pA)->func();      // без проверки, получается бред
	dynamic_cast<TB *>(pC)->func();     // требует наличия виртуальных методов и установкт /GR, но корректно работает даже при множественном наследовании
	//dynamic_cast<TB *>(pA)->func();   // результат преобразования NULL
	if (TB *pD = dynamic_cast<TB *>(pA)) pD->func();
	else cout << "Cast Error" << endl;
	return 0;
}
