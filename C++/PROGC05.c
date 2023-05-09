#include <iostream>
using namespace std;
int main ()
{
	string wyraz;
	char c;

		while (cin >> c >> wyraz)
		{
			for (int i=0; i<wyraz.size(); i++)
			{
				if (wyraz[i] != c)
				cout << wyraz[i];
			}
			cout << endl;
		}
}
