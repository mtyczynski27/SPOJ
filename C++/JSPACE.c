#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main ()
{
	string str, napis;
	int liczba;
	while (getline(cin,str))
	{
		for (int i=0; i<str.size(); i++)
		{
			if (str[i] == ' ')
			{
				while (str[i] == ' ')
				{
					str.erase(i,1);
					liczba++;
				}
				if (liczba > 0)
				{
					napis = napis + str[i];
					transform(napis.begin(),napis.end(),napis.begin(),::toupper);
					cout << napis;
					napis.erase(0,napis.size());
				}
			}
			else
				cout << str[i];
		}
		cout << endl;
	}
}
