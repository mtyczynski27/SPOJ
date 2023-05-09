#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main ()
{
	string str, napis;
	int p, i, j;
	while (getline(cin,str))
	{
		for (i=0; i<str.size(); i++)
		{
			if (str[i] == '<')
			{
				cout << "<";
				for (j=i+1; str[j]!='>'; j++)
				{
					napis = napis + str[j];
				}
				transform(napis.begin(),napis.end(),napis.begin(),::toupper);
				cout << napis << ">";
				i = j;
				napis.erase(0,napis.size());
			}
			else
				cout << str[i];
		}
		cout << endl;
		i = 0;
		j = 0;
	}
}
