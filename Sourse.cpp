

#include <iostream>
#include "FloatPower.h"
using namespace std;

FloatPower makeFloatPower(int x, int y)
{
	FloatPower a;
	if (!a.Init(x, y))
		cout << "wrong argument to Init (first)" << endl;
	return a;
}
int main()
{
	FloatPower k;
	k.SetFirst(4);
	k.SetSecond(2.2);
	cout << k.GetFirst() << endl;
	cout << k.GetSecond() << endl;

	k.Power();
	k.Display();

	k.Read();
	k.Display();

	FloatPower i;
	int g, b;
	cout << "first = ? ";
	cin >> g;
	cout << "second = ?";
	cin >> b;

	i = makeFloatPower(g, b);
	i.Display();

	return 0;
}


