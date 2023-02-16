#include <iostream>
#include <iomanip>
using namespace std;
class TVector
{
private: int x, y, z;
public:  TVector() {}
		 friend ostream& operator<<(ostream &stream,
			 TVector obj);
		 friend istream& operator>>(istream &stream,
			 TVector& obj);
};
ostream& operator<<(ostream &stream, TVector obj)
{
	stream << "Value :";
	stream << setw(5) << obj.x << ", " << obj.y;
	stream << ", " << obj.z << "\n";
	return stream;
}
istream& operator>>(istream &stream, TVector& obj)
{
	cout << "Input value:";
	return stream >> obj.x >> obj.y >> obj.z;
}
int main()
{
	TVector A, B;
	cin >> A >> B;
	cout << A << B;
	return 0;
}

