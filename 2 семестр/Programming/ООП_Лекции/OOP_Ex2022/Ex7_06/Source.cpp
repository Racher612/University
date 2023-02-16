#include <string.h>
#include <iostream>
using namespace std;
template <class T>
T maxx(T x, T y) { return(x > y) ? x : y; }
char * maxx(char * x, char * y)
{
	return strcmp(x, y) > 0 ? x : y;
}
int main()
{
	int a = 1, b = 2;
	char c = 'a', d = 'm';
	float e = 123, f = 456;
	double p = 234.567, t = 789.23;
	char str1[] = "AVERO", str2[] = "AVIER";

	cout << "Integer max=   " << maxx(a, b) << endl;
	cout << "Character max= " << maxx(c, d) << endl;
	cout << "Float max=     " << maxx(e, f) << endl;
	cout << "Double max=    " << maxx(p, t) << endl;
	cout << "String max=    " << maxx(str1, str2) << endl;
	return 0;
}
