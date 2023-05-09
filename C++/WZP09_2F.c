#include <iostream>
using namespace std;
int main ()
{
	string n;
	int tak;
	int suma;
	while (cin >> n && n != "0")
	{
		tak = 0;
		suma = 0;
		if (n[n.size()-1] == '0' || n[n.size()-1] == '5')
			tak++;
		for (int i=0; i<n.size(); i++)
		{
			if (n[i] == '1')
				suma = suma + 1;
			else if (n[i] == '2')
				suma = suma + 2;
			else if (n[i] == '3')
				suma = suma + 3;
			else if (n[i] == '4')
				suma = suma + 4;
			else if (n[i] == '5')
				suma = suma + 5;
			else if (n[i] == '6')
				suma = suma + 6;
			else if (n[i] == '7')
				suma = suma + 7;
			else if (n[i] == '8')
				suma = suma + 8;
			else if (n[i] == '9')
				suma = suma + 9;
		}
		if (suma % 3 == 0)
			tak++;
		if (tak == 2)
			cout << "TAK" << endl;
		else
			cout << "NIE" << endl;
	}
}
