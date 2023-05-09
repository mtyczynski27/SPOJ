#include <iostream>
using namespace std;
int main () {
	int v1, v2, t, vsr;
	cin >> t;
	if ( 1 <= t <= 1000) {

		for (int i=1; i<=t; i++) {
			cin >> v1 >> v2;
			if ( 1 <= v1,v2 <= 10000) {
				vsr = (2*v1)*v2 / (v1 + v2);
				cout << vsr << endl;
			}
			}
		}
	}
