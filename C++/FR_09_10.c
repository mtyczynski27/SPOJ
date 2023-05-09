#include <iostream>
using namespace std;
int main ()
{
	long int a, b;
	int d, brak;
	cin >> d;
	if (1 <= d <= 10)
	{
		for (int i=0; i<d; i++)
		{
			brak = 0;
			cin >> a >> b;
			for (int j=a+1; j<b; j++)
			{
				if (j % 2 == 0)
					cout << j << " ";
				else
					brak++;
			}
			if (brak == ((b) - (a+1)))
				cout << "BRAK" << endl;
			else
				cout << endl;
		}
	}
}
