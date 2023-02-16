#include <iostream> 
#include <fstream>
using namespace std;
int main()
{
	int n = 50;

	ofstream out; // создаем объект потока

	// открываем файл для вывода
	out.open("Test.txt", ios::out);

	out << "Hello!\n" << n; // выводим в файл строку и число

	out.close(); // закрываем файл 
	ifstream in("Test.txt"); // открываем файл для ввода  
	if (!in)
	{
		cout << "Error.\n";
	}
	else
	{
		char str[80];
		in >> str >> n; // вводим строку и число из файла 
		cout << str << " " << n << endl;
		in.close(); // закрываем файл
	}
	return 0;
}
