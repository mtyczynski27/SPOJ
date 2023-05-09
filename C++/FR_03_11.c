#include <iostream>
using namespace std;
int main ()
{
	string str;
	int n, size;
	int p, s;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> str;
		if (str.size() <= 1000)
		{
			s = 0;
			p = 1;
			size = str.size();
			for (int j=size-1; j>=0; j--)
			{
				if (str[j] == '1')
				{
					s = s + p;
				}
				p=p*2;
				if (p > 10)
					p = p % 10;
				if (s > 10)
					s = s % 10;
			}
			if (s % 10 == 0)
				cout << "Tak" << endl;
			else
				cout << "Nie" << endl;
		}
	}
}
