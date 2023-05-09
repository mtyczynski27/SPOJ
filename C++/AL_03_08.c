#include <iostream>
using namespace std;
int main ()
{
	int pom, i=1, tak=0;
	int a;
	int p=0, najw=0;
	while (cin >> a && a != 0)
	{
		if (pom == a)
			tak++;
		if (a >= p && a < najw)
			p = a;
		if (a > najw)
		{
			p = najw;
			najw = a;
		}
		pom = a;
		i++;
	}
	i = i - 2;
	if (tak == i)
		cout << pom << endl;
	else
		cout << p << endl;
}
