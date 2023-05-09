#include <iostream>
using namespace std;
int main ()
{
	int d;
	float a, b, w;
	cin >> d;
	if (1 <= d <= 1000)
	{
		for (int i=1; i<=d; i++)
		{
			cin >> a >> b;
			if (1 <= a, b <= 99)
			{
			w = a + (b*a*0.01);
			cout << w << endl;
			}
		}
	}
}
