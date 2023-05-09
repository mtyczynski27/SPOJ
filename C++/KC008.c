#include <iostream>
using namespace std;
int main ()
{
	int a;
	long long unsigned s=0, ss=0;
	while (cin >> a)
	{
		if (a != 0)
		{
			s = s + a;
		}
		else
		{
			cout << s << endl;
			ss = ss + s;
			s = 0;
		}
	}
	if (ss < 10000000000000000)
		cout << ss << endl;
}
