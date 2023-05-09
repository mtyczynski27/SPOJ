#include <iostream>
using namespace std;
int main ()
{
	int A, B, C, D, T;
	cin >> T;
	for (int i=1; i<=T; i++)
	{
		cin >> A >> B >> C >> D;
		if (1 <= A, B, C, D <= 50000)
		{
			if (A >= C && B >= D)
				cout << "TAK" << endl;
			else if ( A < C || B < D)
				cout << "NIE" << endl;
		}
	}
}
