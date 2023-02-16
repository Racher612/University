#include <iostream>
using namespace std;
void f(int a,int b,int &c){
	if (b!=0) c=a/b; else throw(5);
	if (c>50)throw('c');
}
int main()
{
	int a,b,c;
e1: cout<<"Enter a,b";
	cin >> a >> b;
	try  { f(a,b,c); }
	catch(int){ cerr<<"Error b=0"<<endl;   goto e1; }
	catch(char){ cerr<<"Error c>50"<<endl; exit(-1); }
	return 0;
}


