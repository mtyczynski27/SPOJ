#include <iostream>
using namespace std;
int main ()
{
	string wyraz;
	int C, k=1, il;
	cin >> C;
	if (1 <= C <= 50)
	{
		for (int i=1; i<=C; i++)
		{
			cin >> wyraz;
			for (int j=0; j<wyraz.size(); j++)
			{
				if (wyraz[j] != wyraz[j+1])
					cout << wyraz[j];
				else if (wyraz[j] == wyraz[j+1] && wyraz[j] != wyraz[j+2])
					cout << wyraz[j];
				else if (wyraz[j] == wyraz[j+1] && wyraz[j] == wyraz[j+2])
				{
					cout << wyraz[j];
					il = j;
					while (wyraz[il] == wyraz[il+1])
					{
						k++;
						il++;
					}
					j = il;
					cout << k;
					k = 1;
					il = 1;
				}
			}
			cout << endl;
		}
	}
}
