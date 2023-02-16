#pragma once
#include <string.h>
#include <iostream>
using namespace std;
class String
{
private:     char *str, name;       int  len;
public:  String(int Len, char Name);
		 String(const char *vs, char Name);
		 String(String &S);
		 ~String();
		 int Length() const { return len; }
		 char operator[](int n)
		 {
			 return ((n >= 0) && (n < len)) ? str[n] : '\0';
		 }
		 void print() {
			 std::cout << "Str: " << name << ":";
			 std::cout << str << " Length: " << len << endl;
		 }
		 String  operator+(String &A);
		 String  operator+(char c);
		 String& operator=(const String &S);
};
