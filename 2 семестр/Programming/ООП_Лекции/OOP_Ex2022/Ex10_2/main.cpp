#include <iostream>
#include <memory>
using namespace std;

class A
{
public:
	int x;
	A(int X):x(X){}
	A(){}
	~A(){cout<<"Destructor "<<x<<endl;}
};

int main() {
  int n;
  std::unique_ptr<A[]> arr(new A[2]);
  for(size_t i=0;i<2;i++){
      cout<<"Enter n:";
      cin>>n;
      arr[i].x = n;
    }
  return 0;
}
