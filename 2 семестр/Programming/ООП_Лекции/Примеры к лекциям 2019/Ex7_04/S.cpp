#include "s.h"
String::String(int Len, char Name)
{
	len = Len;
	str = new char[len + 1]; str[0] = '\0'; name = Name;
	cout << "Constructor with length " << name << "\n";
}
String::String(const char *vs, char Name)
{
	len = strlen(vs);
	str = new char[len + 1];  
	strcpy(str, vs);  name = Name;
	cout << "Constructor " << name << "\n";
}

String::String(String &S)
{
	len = S.Length();
	str = new char[len + 1];
	strcpy(str, S.str);
	name = 'K';
	std::cout << "Copy from " << S.name << " to " << name << "\n";
}
String::~String()
{
	delete[] str;
	std::cout << "Destructor " << name << "\n";
}
String  String::operator+(String &A)
{
	std::cout << "Operation +" << "\n";
	int j = len + A.Length();
	String S(j, 'S');       strcpy(S.str, str);
	strcat(S.str, A.str);
	std::cout << "Operation +" << "\n";
	return S;
}
String  String::operator+(char c)
{
	int j = len + 1;  std::cout << "Operation +c" << "\n";
	String S(j, 'Q');       strcpy(S.str, str);
	S.str[len] = c;          S.str[len + 1] = '\0';
	std::cout << "Operation +c" << "\n";  return S;
}
String& String::operator=(const String &S)
{
	cout << "Operation =" << "\n";
	len = S.Length();
	if (str != NULL) delete[]str;
	str = new char[len + 1];
	strcpy(str, S.str);
	cout << "Operation =" << "\n";
	return *this;
}

