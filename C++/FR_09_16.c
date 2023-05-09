#include <iostream>
using namespace std;
float k[4];
int main ()
{
	cin >> k[0] >> k[1] >> k[2] >> k[3] >> k[4];
	for (int j=1; j<=4; j++)
	{
		if (k[0] / k[j] == 2)
		{
			k[0] = 0;
			k[j] = 0;
			break;
		}
	}
	if (k[1] != 0)
	{
		for (int j=0; j<=4; j++)
		{
			if (j != 1 && k[j] != 0)
			{
				if (k[1] / k[j] == 2)
				{
					k[1] = 0;
					k[j] = 0;
					break;
				}
			}
		}
	}
	if (k[2] != 0)
	{
		for (int j=0; j<=4; j++)
		{
			if (j != 2 && k[j] != 0)
			{
				if (k[2] / k[j] == 2)
				{
					k[2] = 0;
					k[j] = 0;
					break;
				}
			}
		}
	}
	if (k[3] != 0)
	{
		for (int j=0; j<=4; j++)
		{
			if (j != 3 && k[j] != 0)
			{
				if (k[3] / k[j] == 2)
				{
					k[3] = 0;
					k[j] = 0;
					break;
				}
			}
		}
	}
	if (k[4] != 0)
	{
		for (int j=0; j<=4; j++)
		{
			if (j != 4 && k[j] != 0)
			{
				if (k[4] / k[j] == 2)
				{
					k[4] = 0;
					k[j] = 0;
					break;
				}
			}
		}
	}
	for (int i=0; i<4; i++)
	{
		if (k[i] != 0)
			cout << i+1;
	}
}
