#include "s.h"

int main(int argc, char* argv[])
{
	String A("ABC", 'A'), B("DEF", 'B'), C(6, 'C');
	C.print();
	C = A + B;
	C.print();
	C = C + 'a';
	C.print();
	return 0;
}
