#include <iostream>
 using namespace std;
template <class type>
class arrayob
{
	type **contents;  int size;  int n;
public:
	arrayob(int number) { contents = new type *[size = number]; n = 0; }
	~arrayob();
	int sizeofmas() { return n; }
	void add(type *p) {
		if (n == size)
			cerr << "Out of range";
		else contents[n++] = p;
	}
	type & operator [] (int x)
	{
		if ((x < 0) || (x >= n))
		{
			cerr << "Error " << x << endl; x = 0;
		}
		return *contents[x];
	}
};
template <class type>
arrayob <type>::~arrayob()
{
	for (int i = 0; i < n; i++) delete contents[i];
	delete[] contents;
}

