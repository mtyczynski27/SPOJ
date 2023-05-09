#include <iostream>
using namespace std;
int main ()
{
	int t, n, x, s;
	cin >> t;
	for (int i=1; i<=t; i++)
	{
		s = 0;
		cin >> n;
		for (int j=1; j<=n; j++)
		{
			cin >> x;
			s = s + x;
		}
		cout << s + n-1 << endl;
	}
}
