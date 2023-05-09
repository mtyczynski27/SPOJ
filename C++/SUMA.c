#include <iostream>
using namespace std;
int main () {
	int a, s=0;
		while (cin >> a) {
			if (a<100 && a>-100)
			s+=a;
			cout << s << endl;
		}

}
