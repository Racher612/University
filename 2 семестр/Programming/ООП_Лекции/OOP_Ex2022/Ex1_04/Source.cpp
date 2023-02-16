#include <iostream>
using namespace std;
int main()
{
	int s = 0, k;
	cout << "Input up to 10 numbers." << endl;
	for (int i = 1; i < 11; i++)
	{
		cin >> k;
		if (k < 0) break;
		s += k;
	}
	cout << "Result =" << s << endl;
}
