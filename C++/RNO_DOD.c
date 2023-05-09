#include <iostream>
using namespace std;
int main () {
	int t, n, a, s=0, j;
	cin >> t;
		for (int i=1; i<=t; i++) {
			cin >> n;
			int liczba;
			for (j=0; j<n; j++) {
				cin >> liczba;
				s = s + liczba;
			}
			cout << s << endl;
			s = 0;
		}
}


