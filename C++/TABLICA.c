#include <iostream>
using namespace std;
int main () {
	int a, n=0;
	int tab[100];
		while (cin>>a) {
			tab[n] = a;
			n++;
		}
		for (int i=n-1; i>=0; i--)
			cout << tab[i] << " ";
}
