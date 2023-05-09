#include <iostream>
using namespace std;
int main ()
{
	int a, x, y;

	cin >> a;
	int tab1[a];

	for (int i=0; i<a; i++)
	{
		cin >> tab1[i];
	}

	cin >> x;
	int odp[x-1];

	for (int i=0; i<x; i++)
	{
		cin >> y;
		odp[i]=0;

		for (int j=0; j<a; j++)
		{
			if (y > tab1[j])
				odp[i]++;
		}
	}

	for (int i=0; i<x; i++)
	{
		cout << odp[i] << endl;
	}
}
