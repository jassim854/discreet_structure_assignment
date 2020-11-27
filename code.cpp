#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	char g;
	do
	{
		
		double x, y, r;
		int P, Q, R;
		cout << "input x = "; cin >> x;	
		cout << "\ninput y = ";	cin >> y;
	

		if (x + y == 0)
		{
			cout << "P(x,y):=(x+y=0) gives true value";
			P = 1;
		}
		else
		{
			cout << "P(x,y):=(x+y=0) gives false value";
			P = 0;
		}
		cout << "\n";
		if (x - y == 1)
		{
			cout << "Q(x,y):=(x-y=1) gives true value";
			Q = 1;
		}
		else
		{
			cout << "Q(x,y):=(x-y=1) gives false value";
			Q = 0;
		}
		cout << "\n";
		double z = (pow(x, 2) - y) / 2;
		double a = 3 * x;

		if (z == a)
		{
			cout << "R(x,y):=((x^2-y)/2=3*x) gives true value";
			R = 1;
		}
		else
		{
			cout << "R(x,y):=((x^2-y)/2=3*x) gives false value";
			R = 0;
		}
		cout << "\nAND";
		cout << "\n";
		if (P == 1 && Q == 0 && R == 0)
		{
			cout << "[(P XOR Q) implies R] gives false value";
		}
		else if (P == 0 && Q == 1 && R == 0)
		{
			cout << "[(P XOR Q) implies R] gives false value";
		}
		else
		{
			cout << "[(P XOR Q) implies R] gives true value";
		}
		cout << "\ndo you want to enter again (y/n) ?";
		cin >> g;
	}

	while (g =='y');

}