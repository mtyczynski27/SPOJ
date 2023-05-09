#include <iostream>
using namespace std;
int main ()
{
	int a, b, c;
	int dziewczyna=0, chlopak=0, uczniowie;
	string imie;
	cin >> a >> b >> c;
	uczniowie = a + b + c;
	for (int i=0; i<uczniowie; i++)
	{
		cin >> imie;
		if (imie[imie.size()-1] == 'a')
			dziewczyna++;
		else
			chlopak++;
	}
	if (dziewczyna <= chlopak)
		cout << dziewczyna;
	else
		cout << chlopak;
}
