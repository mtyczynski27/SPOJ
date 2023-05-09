#include <iostream>
using namespace std;
int main () {
	int t, T, N, M, P, D=86400, S;
	cin >> t;
		for (int i=1; i<=t; i++) {
			cin >> N >> M;
			S = 0;
			if (1 <= N <= 10000 && 1 <= M <= 1000000000) {
				for (int j=1; j<=N; j++) {
					cin >> T;
					if (T <= 100000) {
					P = D / T;
					S = S + P;
					}
				}
				if (S % M > 0) {
					S = S / M;
					S++;
				} else
					S = S / M;
				cout << S << endl;
			}
		}
}

