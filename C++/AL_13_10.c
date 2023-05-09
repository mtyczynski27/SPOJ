#include <iostream>
using namespace std;
int main ()
{
	string str1, str2;
	int t, p;

	cin >> t;
	for (int i=0; i<t; i++)
	{
		cin >> str1 >> str2;
		p = 0;
		for (int j=0; j<str1.size(); j++)
		{
			if (str2[p] == str1[j])
			{
				p++;
			}
		}
		if (p == str2.size())
			cout << "Tak" << endl;
		else
			cout << "Nie" << endl;
	}
}
