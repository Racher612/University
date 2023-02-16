#include <iostream>
using namespace std;
int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  for(int &x : arr) {
     x*= 2;
   }
  for(auto x:arr)
    cout<<x<<' ';
  for(const auto &x:arr)
    cout<<x<<' ';
  return 0;
}
