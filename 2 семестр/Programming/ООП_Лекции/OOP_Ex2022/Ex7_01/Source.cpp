#include <iostream>
using namespace std;

class TA
{
protected:   int Fix;
public:
	TA() { cout << "Inside A\n"; }
	TA(int  fix) :Fix(fix) { cout << "Inside TA int\n"; }
};
class TB :virtual public TA
{
public:
	int One;
	TB(void) { cout << "Inside TB\n"; }
};

class TC : virtual private TA
{
public:	int Two;
		TC() { cout << "Inside TC\n"; }
};
class TD :public TB, public TC
{
public:
	TD(int fix) :TA(fix) { cout << "Inside TD\n"; }
	void Out() { cout << Fix; }
};
int main()
{
	TD Var(10);
	Var.Out();
	return 0;
}