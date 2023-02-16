#include <iostream>
using namespace std;
void summa(const float x[ ][3], float *y)
{  int i,j;
   for(i=0;i<5;i++)
     for(y[i]=0,j=0;j<3;j++) y[i]+=x[i][j];
}

int main() {
  float a[5][3] = {{1,2,3},{2,3,4},{3,4,5},{4,5,6},{5,6,7}}, b[5];
  summa(a,b);
  for(auto x:b)
    cout <<x<<endl;
  return 0;
}
