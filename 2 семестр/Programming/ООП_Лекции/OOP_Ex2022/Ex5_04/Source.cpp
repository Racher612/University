#include <iostream>
class Point
{
private: int x, y;
public:  Point() {}
		 Point(int ax, int ay) : x(ax), y(ay) {}
		 void SetPoint(int ax, int ay) { x = ax; y = ay; }
		 void Print() { std::cout << x << " " << y << "\n"; }
};

int main()
{
	int i;
	Point a,
		b(2,3),
		c[5],
		d[2] = {Point(2,4),Point(4,5)},
		*e,
		*j = new Point(3, 4),
		*m = new Point[3],
		*s[3],
		*q[] = { new Point(2,4),new Point(2,4) };

	a.SetPoint(5, 10); a.Print();
	b.Print();
	for (i = 0; i < 5; i++) { c[i].SetPoint(i*i, i - 5); c[i].Print(); }
	for (i = 0; i < 2; i++) d[i].Print();
	e = new Point(3, 4);
	e->Print();
	j->Print();
	for (i = 0; i < 3; i++) { m[i].SetPoint(i, i + 1); m[i].Print(); }
	for (i = 0; i < 3; i++) { s[i] = new Point(i, i + 1); s[i]->Print(); }
	for (i = 0; i < 2; i++) q[i]->Print();
	delete e;
	delete j;
	delete[]m;
	for (i = 0; i < 3; i++) delete s[i];
	for (i = 0; i < 2; i++) delete q[i];

	return 0;
}
