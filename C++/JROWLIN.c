#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main ()
{
	float a, b, c, x;
	cin >> a >> b >> c;
	 if (a == 0 && (c-b) != 0)
    {
        cout << "BR" << endl;
    }
    else if (a == 0 && (c-b) == 0)
    {
         cout << "NWR" << endl;
    }
    else
    {
		x = (c - b) / a;
		printf("%.2lf\n", x);
	}
}
