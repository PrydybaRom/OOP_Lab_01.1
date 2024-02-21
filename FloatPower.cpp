
#include "FloatPower.h"
#include <cstdlib>
#include <iostream>
using namespace std;

void FloatPower::SetFirst(double value)
{
	first = value;
}

void FloatPower::SetSecond(double value)
{
	second = value;
}

bool FloatPower::Init(double x, double y)
{
	second = y;
	if (x != 0)
	{
		first = x;
		return true;
	}
	else
	{
		return false;
	}
}

void FloatPower::Display() const
{
	cout << "first = " << first << " second = " << second << endl;
}

void FloatPower::Read()
{
	int first, second;
	cout << "first = ? ";
	cin >> first;
	while (first == 0)
	{
		cout << "You set first 0 is`t corect" << endl;
		cout << "first = ? ";
		cin >> first;
	}
	cout << "second = ? ";
	cin >> second;
	Init(first, second);
}

void FloatPower::Power()
{
	first = pow(first, second);
}