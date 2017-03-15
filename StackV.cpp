#include "StackV.h"
#include <iostream>
using namespace std;

int Stack::size()
{
	return data.size();
}

void Stack::push(int num)
{
	data.push_back(num);
}

void Stack::pop()
{
	data.pop_back();
}

int Stack::top()
{
	if (data.back() > -1)
	{
		return data.back();
	}
	else
		cerr <<"Stack is empty";
}

void Stack::clear()
{
	data.clear();
}
	
