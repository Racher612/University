#pragma once
#include <stdio.h>

class Point
{
public:
	char ch1, ch2;
	static Point *first, *last;
	Point *next;
	Point(char ach1, char ach2)
	{
		ch1 = ach1; ch2 = ach2;
		next = nullptr;
		if (first == nullptr)first = this;
		else last->next = this;
		last = this;
	}
	void draw()
	{
		printf("%c   %c  \n", ch1, ch2);
	}
	static void drawAll();
};
