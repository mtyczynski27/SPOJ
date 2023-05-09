#include <iostream>
using namespace std;
int main ()
{
	string wyraz;
	int suma=0;
	cin >> wyraz;
	for (int i=0; i<wyraz.size(); i++)
	{
		if (wyraz[i] == 'a')
			suma = suma + 1;
		else if (wyraz[i] == 'b')
			suma = suma + 2;
		else if (wyraz[i] == 'c')
			suma = suma + 3;
		else if (wyraz[i] == 'd')
			suma = suma + 4;
		else if (wyraz[i] == 'e')
			suma = suma + 5;
		else if (wyraz[i] == 'f')
			suma = suma + 6;
		else if (wyraz[i] == 'g')
			suma = suma + 7;
		else if (wyraz[i] == 'h')
			suma = suma + 8;
		else if (wyraz[i] == 'i')
			suma = suma + 9;
		else if (wyraz[i] == 'k')
			suma = suma + 10;
		else if (wyraz[i] == 'l')
			suma = suma + 20;
		else if (wyraz[i] == 'm')
			suma = suma + 30;
		else if (wyraz[i] == 'n')
			suma = suma + 40;
		else if (wyraz[i] == 'o')
			suma = suma + 50;
		else if (wyraz[i] == 'p')
			suma = suma + 60;
		else if (wyraz[i] == 'q')
			suma = suma + 70;
		else if (wyraz[i] == 'r')
			suma = suma + 80;
		else if (wyraz[i] == 's')
			suma = suma + 90;
		else if (wyraz[i] == 't')
			suma = suma + 100;
		else if (wyraz[i] == 'v')
			suma = suma + 200;
		else if (wyraz[i] == 'x')
			suma = suma + 300;
		else if (wyraz[i] == 'y')
			suma = suma + 400;
		else if (wyraz[i] == 'z')
			suma = suma + 500;
	}
	cout << suma << endl;
}
