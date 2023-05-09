#include <iostream>
using namespace std;
int main () {
	int m, n, k;
	cin >> m >> n;
	int tab[m*n];

	for (int i=0; i<m*n; i++)
		cin >> tab[i];

	for (int j=0; j<n; j++) {
		for (k=j; k<m*n; k=k+n)
			cout << tab[k] << " ";
		cout << endl;
	}
}
