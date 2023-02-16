#include <iostream>
using namespace std;

template <class type>
class TArray
{
	type * content;
	int size;
public:
	TArray(int asize)
	{
		content = new type[size = asize];
	}
	~TArray() { delete[] content; }
	type & operator[] (int x)
	{
		if ((x < 0) || (x >= size))
		{
			cerr << "Index Error"; x = 0;
		}
		return content[x];
	}
};
int main(int argc, char* argv[])
{
	int i;
	TArray<int> int_a(5);
	TArray<char> char_a(5);
	for (i = 0; i < 5; i++)
	{
		int_a[i] = i * 3 + 2 * (i + 1); 
		char_a[i] = 'A' + i;
	}
	cout << "Two arrays: "<< endl;
	for (i = 0; i < 5; i++)
	{
		cout << int_a[i] << ' ' << char_a[i] << endl;
	}
	return 0;
}
