#include <iostream>
using namespace std;
int main ()
{
	int t, n, x, y;

	cin >> t;
	for (int i=0; i<t; i++)
	{

		cin >> n >> x >> y;
		if (1 < n < 100000)
		{

			for (int j=0; j<n; j++)
			{

				if (j % x == 0 && j % y != 0)
				cout << j << " ";

			}

			cout << endl;

		}

	}
}
