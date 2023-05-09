#include <iostream>
using namespace std;
int main () {
	int t, n;
	long long unsigned s=1;
		cin >> t;
		if (1<=t<=1000) {
			for (int i=1; i<=t; i++) {
				cin >> n;
				if (1<=n<=1000) {
				for (int j=2; j<=n; j++) {
					if (j%5==0)
					s = (s * j) / 10;
					else
					s = s * j;
				}
				cout << s % 10 << endl;
				s = 1;
				}
			}
		}
}
