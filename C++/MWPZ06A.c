#include <iostream>
using namespace std;
int main ()
{
	int X, Y, Z, D, j;
	cin >> D;
	for (int i=0; i<D; i++)
	{
		cin >> X >> Y >> Z;
		for (j=X+Y; j%Z!=0; j++)
		{
			cout << "Liczby " << j << " " << Y << endl;
		}
		cout << j / 5 << endl;
	}
}
