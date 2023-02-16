#include <iostream>
class A
{ protected: int n;
public: A(int an):n(an) {}
};

class B
{ protected: int m;
public: B(int am):m(am) {}
};

class AB :public A, public B
{ int l;
public: AB(int an, int am, int al) :A(an), B(am), l(al) {}
        void pp() {std::cout << n << ' ' << m << ' ' << l; }
};
int main()
{
  AB ab(3, 4, 5);
  ab.pp();
  return 0;
}
