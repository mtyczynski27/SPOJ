#include <iostream>
using namespace std;
int main ()
{
	string str;
	int i;
	i = 0;
	while (getline(cin,str))
	{
		i++;
	}
	cout << i << endl;
	return 0;
}
