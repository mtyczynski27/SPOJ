#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()
{
	double r, d, S;
	cin >> r >> d;
	S = (r * r) - (d * d / 4);
	S = sqrt(S);
	S = 3.141592654 * S * S;
	cout << S << endl;
}
