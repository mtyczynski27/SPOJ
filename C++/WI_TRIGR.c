#include <iostream>
using namespace std;
int main ()
{
	string str;
	while (getline(cin,str))
	{
		for (int i=0; i<str.size(); i++)
		{
			if (str[i] == '?' && str[i+1] == '?' && str[i+2] == '=')
			{
				cout << "#";
				i = i + 2;
			}
			else if (str[i] == '?' && str[i+1] == '?' && str[i+2] == '/')
			{
				cout << "\\";
				i = i + 2;
			}
			else if (str[i] == '?' && str[i+1] == '?' && str[i+2] == 39)
			{
				cout << "^";
				i = i + 2;
			}
			else if (str[i] == '?' && str[i+1] == '?' && str[i+2] == '(')
			{
				cout << "[";
				i = i + 2;
			}
			else if (str[i] == '?' && str[i+1] == '?' && str[i+2] == ')')
			{
				cout << "]";
				i = i + 2;
			}
			else if (str[i] == '?' && str[i+1] == '?' && str[i+2] == '!')
			{
				cout << "|";
				i = i + 2;
			}
			else if (str[i] == '?' && str[i+1] == '?' && str[i+2] == '<')
			{
				cout << "{";
				i = i + 2;
			}
			else if (str[i] == '?' && str[i+1] == '?' && str[i+2] == '>')
			{
				cout << "}";
				i = i + 2;
			}
			else if (str[i] == '?' && str[i+1] == '?' && str[i+2] == '-')
			{
				cout << "~";
				i = i + 2;
			}
			else
				cout << str[i];
		}
	}
}
