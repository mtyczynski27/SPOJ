#include <iostream>
using namespace std;
int main () {
	int N, a, b, c, pa, pb, nwd, w;
	cin >> N;
	if ((1<=N<=20)) {
		for (int j=1; j<=N; j++) {
		cin >> a >> b;
		pa = a;
		pb = b;
		if (10<=a,b<=30) {
			while (b!=0) {
			nwd = a;
			a = b;
			b = nwd % b;
			}
			nwd = a;
		w = (pa * pb) / nwd;
		}
		cout << w << endl;
		}
		}
	}
