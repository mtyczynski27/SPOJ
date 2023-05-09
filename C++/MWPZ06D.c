#include <iostream>
using namespace std;
int main () {

	int D, L, C;
	cin >> D;
	if (1 <= D <= 500) {
	for (int i=1; i<=D; i++) {
		cin >> L >> C;
		if (1 <= L, C <= 10000000000) {

			L--;
			if (L == 0)
				cout << "TAK" << endl;
			else if (L != 0) {
				if (C % L == 0)
					cout << "NIE" << endl;
				else
					cout << "TAK" << endl;
			}

	}
	}
	}

}
