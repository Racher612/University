#include <iostream>

using namespace std;

void abc(){
  float a=static_cast<float>(2.1);
}
int main()
{
  int a=5;
  abc();
  cout << a << endl;
  return 0;
}
