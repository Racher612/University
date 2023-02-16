#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
	float x, y;
public:
	Point(float ax, float ay) :x(ax), y(ay)
	{
		cout << "Constructor\n";
	}
	Point()
	{
		cout << "Constructor without parameters\n";
	}
	Point& operator+=(Point &p);
	Point operator+(Point &p);
	Point& operator=(Point const &p);
	Point(Point &p)
	{
		cout << "Copy Constructor\n";
		x = p.x; y = p.y;
	}
	~Point()
	{
		cout << "Destructor\n";
	}
	void Out(void)
	{
		cout << "\n{" << x << "," << y << "}\n";
	}
};
