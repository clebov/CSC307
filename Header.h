#pragma once
#include <iostream>
#include <string>	
using namespace std;

class getShow
{
private:
	string str;
public:
	
	string getInfix();
	void setInfix(string fstr);
	void showInfix(string fstr);
	void showPostfix(string fstr);
};

