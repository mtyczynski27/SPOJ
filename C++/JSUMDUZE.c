#include <iostream>
using namespace std;
int main ()
{
	string a, b;
	long long unsigned l1, l2;
	int t;
	cin >> t;
	for (int j=0; j<t; j++)
	{
		cin >> a;
		cin >> b;
		l1 = 0;
		l2 = 0;
		for (int i=0; i<a.size(); i++)
		{
			if (a[i] == '1')
				l1 = l1 * 10 + 1;
			else if (a[i] == '2')
				l1 = l1 * 10 + 2;
			else if (a[i] == '3')
				l1 = l1 * 10 + 3;
			else if (a[i] == '4')
				l1 = l1 * 10 + 4;
			else if (a[i] == '5')
				l1 = l1 * 10 + 5;
			else if (a[i] == '6')
				l1 = l1 * 10 + 6;
			else if (a[i] == '7')
				l1 = l1 * 10 + 7;
			else if (a[i] == '8')
				l1 = l1 * 10 + 8;
			else if (a[i] == '9')
				l1 = l1 * 10 + 9;
			else if (a[i] == '0')
				l1 = l1 * 10;
		}
		for (int i=0; i<b.size(); i++)
		{
			if (b[i] == '1')
				l2 = l2 * 10 + 1;
			else if (b[i] == '2')
				l2 = l2 * 10 + 2;
			else if (b[i] == '3')
				l2 = l2 * 10 + 3;
			else if (b[i] == '4')
				l2 = l2 * 10 + 4;
			else if (b[i] == '5')
				l2 = l2 * 10 + 5;
			else if (b[i] == '6')
				l2 = l2 * 10 + 6;
			else if (b[i] == '7')
				l2 = l2 * 10 + 7;
			else if (b[i] == '8')
				l2 = l2 * 10 + 8;
			else if (b[i] == '9')
			l2 = l2 * 10 + 9;
			else if (b[i] == '0')
				l2 = l2 * 10;
		}
		cout << l1 + l2 << endl;;
	}
}
