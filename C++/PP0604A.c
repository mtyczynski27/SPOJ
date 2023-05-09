#include <iostream>
using namespace std;
int main ()
{
	int t, n, a, w;
	float srd, p, najmn=1000;
	cin >> t;
	if (t < 101)
	{
		for (int i=1; i<=t; i++)
		{
			cin >> n;
			srd = 0;
			int tab[n-1];
			if (0 < n < 100)
			{
				for (int j=0; j<n; j++)
				{
					cin >> tab[j];
					if (0 < tab[j] <= 100)
					{
						srd = srd + tab[j];
					}
				}
			srd = srd / n;
			for (int k=0; k<n; k++)
			{
				if (srd - tab[k] < 0)
					p = (srd - tab[k]) * (-1);
				else if (srd - tab[k] > 0)
					p = srd - tab[k];
				if (p < najmn)
				{
					najmn = p;
					w = tab[k];
				}
			}
			cout << w << endl;
			}
		}
	}
}
