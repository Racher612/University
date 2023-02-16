#include <iostream>
using namespace std;
class TVector
{
private: int x, y, z;
public:  TVector(int a, int b, int c)
{
	x = a; y = b; z = c;
}
		 ostream& operator<<(ostream &stream)
		 {
			 stream << x << ", ";
			 stream << y << ", ";
			 stream << z << "\n";
			 return stream;
		 }
};

int main()
{
	TVector a(1, 2, 3), b(4, 5, 6);
	a.operator<<(cout); // Standartnya forma 
	a << cout; // Operatornaya forma , a ne  cout<<a
	return 0;
}
