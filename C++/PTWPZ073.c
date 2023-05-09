#include <iostream>
using namespace std;
int main ()
{
	int N;
	string str;
	cin >> N;
	if (1 <= N <= 20)
	{
		for (int j=1; j<=N; j++)
		{
		cin >> str;
		if (4 <= str.size() <= 20)
		{
			for (int i=0; i<str.size(); i++)
			{
				if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C')
				cout << "2";
				if (str[i] == 'D' || str[i] == 'E' || str[i] == 'F')
				cout << "3";
				if (str[i] == 'G' || str[i] == 'H' || str[i] == 'I')
				cout << "4";
				if (str[i] == 'J' || str[i] == 'K' || str[i] == 'L')
				cout << "5";
				if (str[i] == 'M' || str[i] == 'N' || str[i] == 'O')
				cout << "6";
				if (str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S')
				cout << "7";
				if (str[i] == 'T' || str[i] == 'U' || str[i] == 'V')
				cout << "8";
				if (str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z')
				cout << "9";
			}
			cout << endl;
		}
		}
	}
}
