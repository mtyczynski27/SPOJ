#include <iostream>
using namespace std;
int main () {
	int a, b, w;
	char z;
		while (cin >> z >> a >> b) {
			if (z == '+')
				cout << a + b << endl;
			else if (z == '-')
				cout << a - b << endl;
			else if (z == '*')
				cout << a * b << endl;
			else if (z == '/' && z != 0)
				cout << a / b << endl;
			else if (z == '%' )
				cout << a % b << endl;
			}
}
