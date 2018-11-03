/*\
(Infix to Postfix) Write a program that converts an infix expression into an equivalent postfix expression. 
The rules to convert an infix expression into an equivalent postfix expression are as follows: Suppose infx represents the infix expression and pfx represents the postfix expression. 
The rules to convert infx into pfx are as follows:
a. Initialize pfx to an empty expression and also initialize the stack. 
b. Get the next symbol, sym, from infx. 
	b.1. If sym is an operand, append sym to pfx. 
	b.2. If sym is (, push sym into the stack. 
	b.3. If sym is), pop and append all of the symbols from the stack until the most recent left parentheses. Pop and discard the left parentheses. 
	b.4. If sym is an operator: 
		b.4.1. Pop and append all of the operators from the stack to pfx that are above the most recent left parentheses and have precedence greater than or equal to sym. 
		b.4.2. Push sym onto the stack. 
c. After processing infx, some operators might be left in the stack. Pop and append to pfx everything from the stack. 
In this program, you will consider the following (binary) arithmetic operators: +, -, *, and/. You may assume that the expressions you will process are error free. 
Design a class that stores the infix and postfix strings. The class must include the following operations: 
	getInfix: Stores the infix expression. 
	showInfix: Outputs the infix expression. 
	showPostfix: Outputs the postfix expression.

Malik, D. S.. C++ Programming: Program Design Including Data Structures (Page 1276). Cengage Learning. Kindle Edition. 
*/

#include<iostream>
#include<stack>
#include<string>
#include"header.h"

using namespace std;
getShow in;
//Function to return precedence of operators 
int precedence(char c)
{
	if (c == '^')
		return 3;
	else if (c == '*' || c == '/')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	else
		return -1;
}

// The main function to convert infix expression 
//to postfix expression 
void infixToPostfix(string s)
{
	stack<char> stack;
	stack.push('N');
	int lengthOfString = s.length();
	string exp;
	in.setInfix(s);
	in.showInfix(s);

	for (int i = 0; i < lengthOfString; i++)
	{
		// If the scanned character is an operand, add it to output string. 
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
			exp += s[i];

		// If the scanned character is an ‘(‘, push it to the stack. 
		else if (s[i] == '(')

			stack.push('(');

		// If the scanned character is an ‘)’, pop and to output string from the stack 
		// until an ‘(‘ is encountered. 
		else if (s[i] == ')')
		{
			while (stack.top() != 'N' && stack.top() != '(')
			{
				char c = stack.top();
				stack.pop();
				exp += c;
			}
			if (stack.top() == '(')
			{
				char c = stack.top();
				stack.pop();
			}
		}

		//If an operator is scanned 
		else {
			while (stack.top() != 'N' && precedence(s[i]) <= precedence(stack.top()))
			{
				char c = stack.top();
				stack.pop();
				exp += c;
			}
			stack.push(s[i]);
		}

	}
	//Pop all the remaining elements from the stack 
	while (stack.top() != 'N')
	{
		char c = stack.top();
		stack.pop();
		exp += c;
	}

	in.showPostfix(exp);

}

//Driver program to test above functions 
int main()
{
	// string to store the choice
	string choice;
	cout << "Please enter a expression to convert to postfix" << endl;
	// allow the user to keep using the converter untill they decid to quit
	// as long as the user types yes the loop will continue
	while (choice != "no")
	{
		// string to store the expresson the user inputs
		string inFexp;
		cin >> inFexp;
		cout << endl;
		// the function thats used to convert the expression
		infixToPostfix(inFexp);
		cout << endl;
		cout << "Would you like to continue? yes/no" << endl;
		cin >> choice;
		cout << endl;
		// if the choice is yes then ask the user to input a new expression else thank the user for using the program
		if (choice == "yes" || "Yes")
		{
			cout << "Please enter a new expression to convert to postfix" << endl;
		}
			
			
		
	}
cout << "Thank you for using the converter" << endl;
	return 0;
}
