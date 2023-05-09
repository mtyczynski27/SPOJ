#include <iostream>
using namespace std;
int rejestr[10];
int main ()
{
	int z, a, b;
	char znak;

	while (cin >> znak >> a >> b)
	{
		if (znak == 'z')
			rejestr[a] = b;
		else if (znak == '+')
			cout << rejestr[a] + rejestr[b];
		else if (znak == '-')
			cout << rejestr[a] - rejestr[b];
		else if (znak == '/')
			cout << rejestr[a] / rejestr[b];
		else if (znak == '*')
			cout << rejestr[a] * rejestr[b];
		else if (znak == '%')
			cout << rejestr[a] % rejestr[b];
		cout << endl;
	}
}
