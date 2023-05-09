#include <iostream>
using namespace std;

int main() {
	int n, a, nie;

	cin >> n;
	if (0<n<100000) {
		for (int i=1; i<=n; i++) {
			cin >> a;

			nie = 0;
			if (a==1)
				nie++;
			else
				for (int j=2; j<=a-1; j++) {
					if (a%j==0)
						nie++;
				}

			if (nie>0)
				cout << "NIE" << endl;
			else
				cout << "TAK" << endl;

		}
	}
}
