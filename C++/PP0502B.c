#include <iostream>
using namespace std;
int tab[0];
int main () {
	int t, n;

	cin >> t;

	for (int i=0; i<=t-1; i++) {
		cin >> n;

		for (int k=0; k<=n-1; k++) {
		cin >> tab[k];
		}

		for (int j=n-1; j>=0; j--)
			cout << tab[j] << " ";
		cout << endl;
	}
}
