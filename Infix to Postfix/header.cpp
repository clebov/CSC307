#include "Header.h"
#include <iostream>

using namespace std;

void getShow::setInfix(string fstr)
{
	str = fstr;
}

string getShow::getInfix()
{
	return str;
}
void getShow::showInfix(string str)
{
	cout << "The Infix of the expression is: ";
	cout << str << endl;
}

void getShow::showPostfix(string str)
{
	cout << "The Postfix of the expression is: ";
	cout << str << endl;
}
