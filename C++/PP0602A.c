#include <iostream>
using namespace std;
int main()
{
	int t, n;

    cin >> t;
    for (int i=1; i<=t; i++) {
    	cin >> n;
    	int tab[n+1];

    	for (int i=1; i<=n; i++)
    		cin >> tab[i];

		for (int i=2; i<=n; i=i+2)
			cout << tab[i] << " ";

		for (int i=1; i<=n; i=i+2)
			cout << tab[i] << " ";

		cout << endl;
    }
}
