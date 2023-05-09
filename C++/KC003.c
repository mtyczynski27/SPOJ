#include <iostream>
using namespace std;
int main ()
{
	float a, b, c;
	while (cin >> a >> b >> c)
	{
		if (a + b > c && a + c > b && b + c > a)
			cout << "1" << endl;
		else
			cout << "0" << endl;
	}
}
