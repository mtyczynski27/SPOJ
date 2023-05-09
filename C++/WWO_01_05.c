#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main ()
{
	int wynik=0;
	string zegar;
    for (int i=0; i<4; i++)
    {
    	string binar;
        cin >> binar;
        int size = binar.size()-1;
        for (int j=0; j<=size; j++)
        {
            if (binar[j] == '1')
                wynik = wynik + (1 * pow(2, size-j));
            else if (binar[j] == '0')
            	wynik = wynik + 0;
        }

       	if (wynik == 1)
        	zegar[i] = '1';
        else if (wynik == 2)
        	zegar[i] = '2';
        else if (wynik == 3)
        	zegar[i] = '3';
        else if (wynik == 4)
        	zegar[i] = '4';
        else if (wynik == 5)
        	zegar[i] = '5';
        else if (wynik == 6)
        	zegar[i] = '6';
        else if (wynik == 7)
        	zegar[i] = '7';
        else if (wynik == 8)
        	zegar[i] = '8';
        else if (wynik == 9)
        	zegar[i] = '9';
        else if (wynik == 0)
        	zegar[i] = '0';
        wynik = 0;
    }
    cout << zegar[0] << zegar[1] << ":" << zegar[2] << zegar[3];
}
