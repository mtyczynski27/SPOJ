#include <iostream>
using namespace std;
int main ()
{
	int k;
	char ch;
	string str, wyraz;
	cin >> k;
	if (1 <= k <= 26)
	{
		for (int i=0; i<k; i++)
		{
			cin >> ch;
			str[i] = ch;
		}
		cin >> wyraz;
		for (int i=0; i<wyraz.size(); i++)
		{
			for (int j=0; j<k; j++)
			{
				if (wyraz[i] == str[j])
					cout << wyraz[i];
			}
			cout << wyraz[i];
		}
	}
}
