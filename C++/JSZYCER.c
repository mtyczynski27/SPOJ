// nieskonczone, nie dziala
#include <iostream>
#include <cstring>
#include <cctype>
#include <stdio.h>
using namespace std;
int main ()
{
string litera;
while (getline(cin,litera))
{
	for (int i=0; i<litera.size(); i++)
	{
		if (litera[i] == 'A')
			cout << "D";
		else if (litera[i] == 'B')
			cout << "E";
		else if (litera[i] == 'C')
			cout << "F";
		else if (litera[i] == 'D')
			cout << "G";
		else if (litera[i] == 'E')
			cout << "H";
		else if (litera[i] == 'F')
			cout << "I";
		else if (litera[i] == 'G')
			cout << "J";
		else if (litera[i] == 'H')
			cout << "K";
		else if (litera[i] == 'I')
			cout << "L";
		else if (litera[i] == 'J')
			cout << "M";
		else if (litera[i] == 'K')
			cout << "N";
		else if (litera[i] == 'L')
			cout << "O";
		else if (litera[i] == 'M')
			cout << "P";
		else if (litera[i] == 'N')
			cout << "Q";
		else if (litera[i] == 'O')
			cout << "R";
		else if (litera[i] == 'P')
			cout << "S";
		else if (litera[i] == 'Q')
			cout << "T";
		else if (litera[i] == 'R')
			cout << "U";
		else if (litera[i] == 'S')
			cout << "V";
		else if (litera[i] == 'T')
			cout << "W";
		else if (litera[i] == 'U')
			cout << "X";
		else if (litera[i] == 'V')
			cout << "Y";
		else if (litera[i] == 'W')
			cout << "Z";
		else if (litera[i] == 'X')
			cout << "A";
		else if (litera[i] == 'Y')
			cout << "B";
		else if (litera[i] == 'Z')
			cout << "C";
		else if (litera[i] == ' ')
			cout << " ";
   	}
   	cout << endl;
}
}
