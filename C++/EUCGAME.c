#include <iostream>
using namespace std;
int main () {
	int a, b, r, t;
	cin >> t;
	if (1 <= t <= 10) {
	for (int i=1; i<=t; i++) {
		cin >> a >> b;
		if (1 <= a,b <= 1000000000) {
		while (a!=b) {
		if (a<b)
			b = b - a;
		else if (a>b)
			a = a - b;
		}
		cout << a + b << endl;
	}
	}
	}
}
