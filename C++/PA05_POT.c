#include <iostream>
using namespace std;
int main(){
	long int ilosc;
	cin>>ilosc;
	for(int i=0;i<ilosc;i++){
		long int wynik,suma=1,liczba,potega,tab[4] = {0};
		cin>>liczba>>potega;
		liczba = liczba % 10;
		if (potega%4==0)
			wynik=4;
		else
			wynik=potega%4;

		for(int j=0;j<4;j++){
			suma*=liczba;
			tab[j]=suma%10;
		}
		cout<<tab[wynik-1]<<endl;
	}
}
