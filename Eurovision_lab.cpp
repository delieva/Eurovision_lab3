// Eurovision_lab.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("E:/eurovision_lab.csv");
	if (!fin.good())
	{
		cerr << "Can't open input file" << endl;
		exit(1);
	}
	else {
		cerr << "File is opened" << endl;
	}
	
	fin.close();
	system("pause");
    return 0;
}

