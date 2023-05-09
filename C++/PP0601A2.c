#include <iostream>
using namespace std;
int main ()
{
	int a, b=0, s=0;
	while (s<3 && cin >> a)
	{
		if (9 < a < 100)
		{
			if (a == 42 && b != 42 && b != 0)
				s++;
			b = a;
			cout << a << endl;
		}
	}
}
