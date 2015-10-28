#include "complexnumbers.h"
#include "stack.h"
#include <iostream>

using namespace std;

stack::stack()
{
}

void stack::init()
{
	finish = 0;
}

void stack::push(complexnumber z)
{
	if (finish == 100)
	{
		cout << "Stack is full" << endl;
	}
	s[finish] = z;
	finish++;
}

complexnumber stack::pop()
{
	if (finish == 0)
	{
		cout << "Stack is empty" << endl;
		return -1;
	}
	complexnumber tmp = s[finish - 1];
	finish--;
	return tmp;
}
