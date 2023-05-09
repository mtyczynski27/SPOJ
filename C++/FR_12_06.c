#include<iostream>
using namespace std;
int main()
{
    string znaki;
    int licznik=0;

    cin >> znaki;

    for(int i=0; i<znaki.length(); i++){
        if(znaki[i] == '+')
            licznik++;
        else
            if(znaki[i] == '-')
                licznik--;
    }

    if(licznik > 0)
	{
        if(licznik < 3)
            cout << "BRAK" << endl;
        else
		{
        	for(int i=0; i<licznik/3; i++)
            	cout<<"5"<<" ";
        }
    }
	else
	{
        licznik*=-1;
        if(licznik < 3)
            cout << "BRAK" << endl;
		else
		{
            for(int i=0; i<licznik/3; i++)
                cout << "1" << " ";
        }
    }
}
