#include <iostream>
using namespace std;
int main ()
{
	int t, k;
	string str;

	cin >> t;
	for (int i=1; i<=t; i++)
	{
		cin >> str;
		k = str.size() / 2;

		for (int j=0; j<k; j++)
			cout << str[j];

		cout << endl;
	}
}
