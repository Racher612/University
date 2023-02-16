#include <iostream>

class A {
public:    void func(int ch);
};
class B : public A {
public:
	void func(const char *str);
	using A::func;    // перегрузка B::func
};
void A::func(int ch) {   // метод базового класса
	std::cout << "Symbol\n";
}
void B::func(const char *str) { // метод производного класса
	std::cout << "String\n";
}
int main() {
	B b;
	b.func(25);     // вызов  A::func()
	b.func("ccc");  // вызов  B::func() 
	return 0;
}
