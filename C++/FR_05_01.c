#include <iostream>
using namespace std;
int main ()
{
	int d, n, dzt;
	string str;
	cin >> d;
	for (int i=1; i<=d; i++)
	{
		cin >> str >> n;
		n = n % 7;
		if (str == "Pn")
			dzt = 1;
		else if (str == "Wt")
			dzt = 2;
		else if (str == "Sr")
			dzt = 3;
		else if (str == "Cz")
			dzt = 4;
		else if (str == "Pt")
			dzt = 5;
		else if (str == "So")
			dzt = 6;
		else if (str == "Nd")
			dzt = 7;

		dzt = dzt + n;
		if (dzt>7)
			dzt = dzt % 7;

		if (dzt == 1)
			cout << "Pn" << endl;
		else if (dzt == 2)
			cout << "Wt" << endl;
		else if (dzt == 3)
			cout << "Sr" << endl;
		else if (dzt == 4)
			cout << "Cz" << endl;
		else if (dzt == 5)
			cout << "Pt" << endl;
		else if (dzt == 6)
			cout << "So" << endl;
		else if (dzt == 7)
			cout << "Nd" << endl;
	}
}
