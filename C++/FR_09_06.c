#include <iostream>
using namespace std;
int main ()
{
	int t;
	char najmn=90, najw=65;
	string str;
	cin >> t;
	for (int i=0; i<t; i++)
	{
		cin >> str;
		for (int j=0; j<str.size(); j++)
		{
			if (str[j] < najmn)
			{
				najmn = str[j];
			}
			if (str[j] > najw)
			{
				najw = str[j];
			}
		}
		najw = najw - 65;
		najmn = najmn - 65;
		cout << najw - najmn << endl;
		najmn = 90;
		najw = 65;
	}
}
