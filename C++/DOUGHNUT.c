#include <iostream>
using namespace std;
int main () {
	int c, k, w, t;
	cin >> t;
	if (t <= 100) {
		for (int i=1; i<=t; i++) {
			cin >> c >> k >> w;
			if (1 <= c, k, w <= 100) {
				if (c * w <= k)
				cout << "yes" << endl;
				else
				cout << "no" << endl;
			}
		}
	}
}
