#include <iostream>
using namespace std;
int main () {
	int D, X;
	cin >> D;
	if (1 <= D <= 500) {
		for (int i=1; i<=D; i++) {
			cin >> X;
			if (1 <= X <= 1000) {
				cout << X * X << endl;
			}
		}
	}
}
