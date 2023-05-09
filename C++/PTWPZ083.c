#include <iostream>
using namespace std;
int main ()
{
	string str;
	int N, s;
	cin >> N;
	if (1 <= N <= 20)
	{
		for (int i=1; i<=N; i++)
		{
			cin >> str;
			s = 0;
			if (str[0] == '1')
				s = s + 1;
			else if (str[0] == '2')
				s = s + 2;
			else if (str[0] == '3')
				s = s + 3;
			else if (str[0] == '4')
				s = s + 4;
			else if (str[0] == '5')
				s = s + 5;
			else if (str[0] == '6')
				s = s + 6;
			else if (str[0] == '7')
				s = s + 7;
			else if (str[0] == '7')
				s = s + 7;
			else if (str[0] == '8')
				s = s + 8;
			else if (str[0] == '9')
				s = s + 9;
			else if (str[0] == '0')
				s = s + 0;

			for (int j=1; j<str.size(); j=j+2)
			{

				if (str[j] == '+')
				{

					if (str[j+1] == '1')
						s = s + 1;
					else if (str[j+1] == '2')
						s = s + 2;
					else if (str[j+1] == '3')
						s = s + 3;
					else if (str[j+1] == '4')
						s = s + 4;
					else if (str[j+1] == '5')
						s = s + 5;
					else if (str[j+1] == '6')
						s = s + 6;
					else if (str[j+1] == '7')
						s = s + 7;
					else if (str[j+1] == '7')
						s = s + 7;
					else if (str[j+1] == '8')
						s = s + 8;
					else if (str[j+1] == '9')
						s = s + 9;
					else if (str[j+1] == '0')
						s = s + 0;
				}

				else if (str[j] == '-')
				{
					if (str[j+1] == '1')
						s = s - 1;
					else if (str[j+1] == '2')
						s = s - 2;
					else if (str[j+1] == '3')
						s = s - 3;
					else if (str[j+1] == '4')
						s = s - 4;
					else if (str[j+1] == '5')
						s = s - 5;
					else if (str[j+1] == '6')
						s = s - 6;
					else if (str[j+1] == '7')
						s = s - 7;
					else if (str[j+1] == '7')
						s = s - 7;
					else if (str[j+1] == '8')
						s = s - 8;
					else if (str[j+1] == '9')
						s = s - 9;
					else if (str[j+1] == '0')
						s = s - 0;
				}
			}

		cout << s << endl;
		}
	}
}
