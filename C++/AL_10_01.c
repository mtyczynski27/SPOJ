#include <iostream>
using namespace std;
int main ()
{
	int n, t, z;
	string str;
	cin >> t;
	if (0 < t <= 1000)
	{
		for (int i=1; i<=t; i++)
		{
			cin >> n >> str;
			z = 0;
			if (0 < n <= 100)
			{
				for (int j=0; j<n; j++)
				{
					if (str[j] == '?')
						z++;
				}
				if (str[0] == '?' && n == 1)
					cout << "10";
				else if (str[0] == '?')
				{
					cout << "9";
					for (int j=1; j<z; j++)
						cout << "0";
				}
				else
				{
					cout << "1";
					for (int j=1; j<=z; j++)
						cout << "0";
				}
				cout << endl;
			}

		}
	}
}
