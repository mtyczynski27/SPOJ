#include <iostream>
using namespace std;
int main ()
{
	float A, B, C, d;
	while (cin >> A >> B >> C)
	{
		d = (B*B)-(4*A*C);
		if(d < 0)
			cout << 0 << endl;
  		if(d == 0)
			cout << 1 << endl;
   		if(d > 0)
			cout << 2 << endl;
	}
}
