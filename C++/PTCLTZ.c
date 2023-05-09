#include <iostream>
using namespace std;
int main ()
{
	int s, t, n, j;
	cin >> t;
	for (int i=1; i<=t; i++)
	{
		cin >> s;
		j=0;
		if (1 <= s <= 10000)
		{
			while (s > 1)
			{
				j++;
				if (s % 2 == 0)
					s = s / 2;
				else
					s = 3 * s + 1;
			}
		}
		cout << j << endl;
	}
}
