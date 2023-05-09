#include <iostream>
using namespace std;
int main ()
{
	unsigned long long a, b;
	string str;

	while (cin >> a >> str >> b)
	{
		if (a,b > 0)
		{
			if (str == "==")
				if (a == b)
					cout << 1 << endl;
				else
					cout << 0 << endl;
			if (str == "!=")
				if (a != b)
					cout << 1 << endl;
				else
					cout << 0 << endl;
			if (str == ">=")
				if (a >= b)
					cout << 1 << endl;
				else
					cout << 0 << endl;
			if (str == "<=")
				if (a <= b)
					cout << 1 << endl;
				else
					cout << 0 << endl;
		}
	}
}
