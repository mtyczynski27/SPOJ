#include <iostream>
using namespace std;
int tab[10];
int main ()
{
	int n, i=-1;
	char z;
	while (cin >> z)
	{
		if (z == '+')
		{
			cin >> n;
			if (i < 9)
			{
				i++;
				tab[i] = n;
				cout << ":)" << endl;
			}
			else
				cout << ":(" << endl;
		}
		else if (z == '-')
		{
			if (i < 0)
				cout << ":(" << endl;
			else if (i <= 9)
			{
				cout << tab[i] << endl;
				i--;
			}
		}
	}
}
