#include "A.h"
#include "N.h"

arrayob <TNum>  ob_a(5);
int main(int argc, char* argv[])
{
	int n, i;
	char S[10];
	for (i = 0; i < 5; i++)
	{
		cout << "Input number or string: ";  
		cin >> S;
		n = atoi(S);
		if (n == 0 && S[0] == '0' || n != 0)
			ob_a.add(new TNum(n));
		else ob_a.add(new TStr(S));
	}
	cout << " Contents of array" << '\n';
	for (i = 0; i < ob_a.sizeofmas(); i++) ob_a[i].Print();
	return 0;
}
