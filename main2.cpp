#include <iostream>
#include <Windows.h>
using namespace std;

int main2()
{
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(output, 12);
	cout << "Every" << endl;
	SetConsoleTextAttribute(output, 6);
	cout << "\tHunter" << endl;
	SetConsoleTextAttribute(output, 14);
	cout << "\t\tWants" << endl;
	SetConsoleTextAttribute(output, 10);
	cout << "\t\t\tTo know" << endl;
	SetConsoleTextAttribute(output, 9);
	cout << "\t\t\t\t Where" << endl;
	SetConsoleTextAttribute(output, 11);
	cout << "\t\t\t\t\tDoes Pheasant" << endl;
	SetConsoleTextAttribute(output, 5);
	cout << "\t\t\t\t\t\t\tSit" << endl;
	return 0;
}