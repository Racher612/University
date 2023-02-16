#include <memory>
#include <iostream>
using namespace std;
class A
{
public:
	int x;
	A(int X):x(X){}
	A(){}
	~A(){cout<<"Destructor"<<endl;}
};
int main(){
        unique_ptr<A> cl_p1;     // неинициализированный объект
      //unique_ptr<A> cl_p2(new A(1)); // инициализированный объект
        unique_ptr<A> cl_p2 = make_unique<A>(1);// C++14
     // unique_ptr<A> cl_p3(cl_p2); !!! нельзя!!!
     // cl_p1=cl_p2;                !!! нельзя!!!
  cl_p1=move(cl_p2);       // cмена владельца объекта
        A &a= *cl_p1;            // ссылка на хранимый объект
        cout << "a.x=" << a.x << endl;
        A *ptr = cl_p1.get();    // указатель на хранимый объект
        cout << "ptr=" << ptr <<endl;
  if (cl_p1)cl_p1.reset(); // проверка и освобождение памяти
        A *ptr1 = cl_p1.get();   // указатель на хранимый объект
        cout << "ptr1=" << ptr1 <<endl;
        return 0;
}


