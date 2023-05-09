#include <iostream>
using namespace std;
int main ()
{
	int D;
	cin >> D;
	for (int i=0; i<D; i++)
	{
		int n;
		cin >> n;

		int wynik = 1;
		for (int j=2; j<=n; j++)
		{
			wynik *= j;
		}

		int jednosci = wynik % 10;
		int dziesiatki = (wynik / 10) % 10;
		cout << dziesiatki << " " << jednosci << endl;
	}
}
