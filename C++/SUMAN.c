#include <iostream>
using namespace std;
int main ()
{
	int n, s=0;
	for (int i=1; i<11; i++)
	{
		cin >> n;
		s = 0;
		for (int j=1; j<=n; j++)
			s = s + j;
		cout << s << endl;
	}
}
