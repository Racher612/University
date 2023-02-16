#include <stdio.h>

class MyException
{
protected: int nError;
public:  MyException(int nErr) 
		 {
	    	puts("constructor"); 
			nError = nErr;
		 }
		 ~MyException() 
		 { 
			 puts("destructor"); 
		 }
		 MyException(const MyException &E)
		 {
			 puts("copy_constructor"); nError = E.nError;
		 }
		 void ErrorPut() { printf("Error %d.\n", nError); }
};

int main(int argc, char* argv[])
{
	try
	{
		throw MyException(5);
	}
	catch (MyException& E) { E.ErrorPut(); }
	puts("program");
	return 0;
}

