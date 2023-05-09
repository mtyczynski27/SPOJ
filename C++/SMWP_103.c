#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		int a, pierwiastek;
		cin >> a;
		pierwiastek = sqrt(a);

		if(a > 0 && (pierwiastek * pierwiastek == a))
			cout << "TAK" << endl;
		else
			cout << "NIE" << endl;
	}
}
