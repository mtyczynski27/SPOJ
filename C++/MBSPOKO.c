#include <iostream>
using namespace std;
int main () {
	int a, piec, trzy;
	for (int i=0; i<=99; i++) {
		cin >> a;
		trzy = a % 3;
		piec = a % 5;
		if (trzy == 0 && piec == 0)
			cout << "SPOKOKOKO" << endl;
		else if (piec == 0)
			cout << "SPOKO" << endl;
		else if (trzy == 0)
			cout << "KOKO" << endl;
		else
			cout << a << endl;
	}

}
