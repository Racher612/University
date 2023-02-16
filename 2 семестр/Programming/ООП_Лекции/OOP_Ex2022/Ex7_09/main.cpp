#include <iostream>
using namespace std;

void swap(string& x, string& y)
{
  string tmp {x};   // string tmp { move(x)};
  x = y;            // x=move(y);
  y = tmp;          // y= move(tmp);
}

int main()
{
	string x{ "Anton" };
	string y{ "Max" };

	cout << "x: " << x << '\n';
	cout << "y: " << y << '\n';

	swap(x, y);

	cout << "x: " << x << '\n';
	cout << "y: " << y << '\n';

	return 0;
}
