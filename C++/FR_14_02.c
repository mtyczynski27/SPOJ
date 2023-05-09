#include <iostream>
using namespace std;
int main() {
	string wyraz;
	bool nazwa = 0;
	cin >> wyraz;

	if(wyraz.length() > 2) {
		for(int i = 0; i <= wyraz.length()-3; i++) {
			if(wyraz[i] == 's' && wyraz[i+1] == 't' && wyraz[i+2] == 'o')
				nazwa = 1;
		}
	}

	if(nazwa == 1)
		cout << "TAK\n";
	else
		cout << "NIE\n";
}
