#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	char h;
	ofstream out("Test.txt", ios::app); // для добавления
	cin >> h;
	out << h << endl; // добавляем символ
	out.close();
	ifstream  in("Test.txt");  // для ввода из файла
	if (!in)       // если файл не открыт
		cout << "File is not open.\n";
	else
	{
		in >> h;
		while (!in.eof())
		{
			cout << h << endl;
			in >> h;
		}
	}
	in.close();
	return 0;
}

