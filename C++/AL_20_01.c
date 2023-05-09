#include <iostream>
using namespace std;
int main ()
{
	string str;
	while (getline(cin,str))
	{
		for (int i=0; i<str.size(); i++)
		{
			if (str[i] == 'A' || str[i] == 'a')
				cout << ".-/";
			else if (str[i] == 'B' || str[i] == 'b')
				cout << "-.../";
			else if (str[i] == 'C' || str[i] == 'c')
				cout << "-.-./";
			else if (str[i] == 'D' || str[i] == 'd')
				cout << "-../";
			else if (str[i] == 'E' || str[i] == 'e')
				cout << "./";
			else if (str[i] == 'F' || str[i] == 'f')
				cout << ".-../";
			else if (str[i] == 'G' || str[i] == 'g')
				cout << "--./";
			else if (str[i] == 'H' || str[i] == 'h')
				cout << "..../";
			else if (str[i] == 'I' || str[i] == 'i')
				cout << "../";
			else if (str[i] == 'J' || str[i] == 'j')
				cout << ".---/";
			else if (str[i] == 'K' || str[i] == 'k')
				cout << "-.-/";
			else if (str[i] == 'L' || str[i] == 'l')
				cout << "..-./";
			else if (str[i] == 'M' || str[i] == 'm')
				cout << "--/";
			else if (str[i] == 'N' || str[i] == 'n')
				cout << "-./";
			else if (str[i] == 'O' || str[i] == 'o')
				cout << "---/";
			else if (str[i] == 'P' || str[i] == 'p')
				cout << ".--./";
			else if (str[i] == 'Q' || str[i] == 'q')
				cout << "--.-/";
			else if (str[i] == 'R' || str[i] == 'r')
				cout << ".-./";
			else if (str[i] == 'S' || str[i] == 's')
				cout << ".../";
			else if (str[i] == 'T' || str[i] == 't')
				cout << "-/";
			else if (str[i] == 'U' || str[i] == 'u')
				cout << "..-/";
			else if (str[i] == 'V' || str[i] == 'v')
				cout << "...-/";
			else if (str[i] == 'W' || str[i] == 'w')
				cout << ".--/";
			else if (str[i] == 'X' || str[i] == 'x')
				cout << "-..-/";
			else if (str[i] == 'Y' || str[i] == 'y')
				cout << "-.--/";
			else if (str[i] == 'Z' || str[i] == 'z')
				cout << "--../";
			else if (str[i] == ' ')
				cout << "/";
			if (i+1 == str.size())
				cout << endl;
		}
	}
}
