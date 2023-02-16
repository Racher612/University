#include <iostream>
using namespace std;
int main()
{
	int i, i1, in, c;
	cout << "Enter first and last values." << endl;
	cin >> i1 >> in;
	cout << "Enter number of colons: " << endl;
	cin >> c;
	for (i = i1; i <= in; i++)
		if (i < in)
			cout << i << "– " << (char)i << (char)(((i - i1 + 1) % c != 0) ? ' ' : '\n');
		else cout << i << " - " << (char)i << '.' << endl;
	return 0;
}
