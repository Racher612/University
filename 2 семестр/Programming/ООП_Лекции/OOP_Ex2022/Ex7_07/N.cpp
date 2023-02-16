#include <iostream>
using namespace std;

#include "N.h"

TNum::~TNum() {
  cout << "Destructor TNum " << endl;
}
void TNum::Print() {
  cout << num << " "<< endl;
}
TStr::~TStr(){
        cout << "Destructor TStr.";  delete[] st;
}
void TStr::Print(){
        TNum::Print(); cout << st << " " << endl;
}
