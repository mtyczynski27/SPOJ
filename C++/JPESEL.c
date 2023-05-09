#include <iostream>
using namespace std;
int cyfra[10];
int main ()
{
	string pesel;
	int t, w;
	cin >> t;
	if (t <= 100)
	{
		for (int i=1; i<=t; i++)
		{
			cin >> pesel;
			for (int j=0; j<=10; j++)
			{
				if (pesel[j] == '1')
					cyfra[j] = 1;
				else if (pesel[j] == '2')
					cyfra[j] = 2;
				else if (pesel[j] == '3')
					cyfra[j] = 3;
				else if (pesel[j] == '4')
					cyfra[j] = 4;
				else if (pesel[j] == '5')
					cyfra[j] = 5;
				else if (pesel[j] == '6')
					cyfra[j] = 6;
				else if (pesel[j] == '7')
					cyfra[j] = 7;
				else if (pesel[j] == '8')
					cyfra[j] = 8;
				else if (pesel[j] == '9')
					cyfra[j] = 9;
				else if (pesel[j] == '0')
					cyfra[j] = 0;
			}
			w = (cyfra[0] * 1) + (cyfra[1] * 3) + (cyfra[2] * 7) + (cyfra[3] * 9) + (cyfra[4] * 1) + (cyfra[5] * 3) + (cyfra[6] * 7) + (cyfra[7] * 9) + (cyfra[8] * 1) + (cyfra[9] * 3) + (cyfra[10] * 1);
			if (w <= 0)
				cout << "N" << endl;
			else
			{
				if (w % 10 != 0)
					cout << "N" << endl;
				else
					cout << "D" << endl;
			}

		}
	}
}
