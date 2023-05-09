#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int tab[128];
int l[128];
int main ()
{
	int c;
	string str;
	getline(cin,str);
		for (int j=0; j<str.size(); j++)
		{
			for (int c=0; c<=127; c++)
			{
				if (str[j] == c)
					l[c]++;
			}
		}
		for (int c=0; c<=127; c++)
		{
			if (l[c] > 0)
				cout << c << " " << l[c] << endl;
		}
}
