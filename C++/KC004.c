#include <iostream>
using namespace std;
int main () {
	int t, s, d, c, w;
		while (cin>>s>>d) {
		w=0;
		for (int j=0; j<=d-1; j++) {
			cin >> c;
			if (c == s)
			w++;
		}
			cout << w << endl;
	}
}
