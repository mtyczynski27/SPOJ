#include <iostream>
using namespace std;
int main () {
	int nwd, a, b, t;
		cin >> t;
		for (int i=1; i<=t; i++) {
			cin >> a >> b;
			if (0 <= a,b <= 1000000) {
				while (b!=0) {
				nwd = a;
				a = b;
				b = nwd % b;
				} cout << a << endl;
			}
		}
}
