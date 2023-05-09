#include <iostream>
using namespace std;
int main ()
{
	int a, b, c, sciana1, sciana2, sciany, dach, farba=0;
	cin >> a >> b >> c;
	sciana1 = a * c;
	sciana2 = b * c;
	dach = a * b;

	sciana1 = sciana1 * 2;
	sciana2 = sciana2 * 2;
	sciany = sciana1 + sciana2;

	if (sciany%5==0)
		farba = farba + (sciany / 5);
	else
		farba = farba + (sciany / 5) + 1;

	if (dach%3==0)
		farba = farba + (dach / 3);
	else
		farba = farba + (dach / 3) + 1;

	cout << farba;

}
